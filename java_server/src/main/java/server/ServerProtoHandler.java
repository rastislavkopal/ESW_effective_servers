package server;

import com.google.protobuf.ByteString;
import cz.cvut.fel.esw.server.proto.Request;
import cz.cvut.fel.esw.server.proto.Response;
import io.netty.channel.*;
import io.netty.util.AttributeKey;
import io.netty.util.internal.ConcurrentSet;
import org.apache.commons.io.IOUtils;


import java.io.*;
import java.nio.charset.Charset;
import java.nio.charset.StandardCharsets;
import java.rmi.UnexpectedException;
import java.util.HashSet;
import java.util.Set;
import java.util.StringTokenizer;
import java.util.concurrent.ConcurrentHashMap;
import java.util.zip.GZIPInputStream;

import static java.nio.charset.StandardCharsets.UTF_8;
import static java.util.Objects.isNull;

public class ServerProtoHandler extends ChannelInboundHandlerAdapter {


    private static Set<String> words = ConcurrentHashMap.newKeySet();
//    private Set<String> words = new HashSet<>();

    @Override
    public void channelRead(ChannelHandlerContext ctx, Object msg) throws Exception {
//        ctx.channel().attr(AttributeKey.valueOf("words")).get();
        Request req = (Request) msg;
        Response res;
        if (req.hasField(Request.getDescriptor().findFieldByName("getCount"))) {
            res = Response.newBuilder()
                    .setStatus(Response.Status.OK)
                    .setCounter(words.size())
                    .build();
            words.clear();
        } else if (req.hasField(Request.getDescriptor().findFieldByName("postWords"))) {
            byte[] bReqData = req.getPostWords().getData().toByteArray();

            if (!isNull(bReqData) && bReqData.length != 0) {
                StringTokenizer tk = new StringTokenizer(decompressContent(bReqData));

                while (tk.hasMoreTokens()) {
                    String x = tk.nextToken();
                    words.add(x);
                }
            }

            res = Response.newBuilder()
                    .setStatus(Response.Status.OK)
                    .build();

        } else {
            throw new Exception("Request broken");
        }

        ctx.writeAndFlush(res);
//        ChannelFuture future = ctx.writeAndFlush(res);
//        future.addListener(ChannelFutureListener.CLOSE_ON_FAILURE);
    }

    public static String decompressContent(byte[] pByteArray) throws IOException {
        String ret;
        try (
                InputStream ungzippedResponse = new GZIPInputStream(new ByteArrayInputStream(pByteArray));
                Reader reader = new InputStreamReader(ungzippedResponse, Charset.forName("UTF-8"));
                Writer writer = new StringWriter();
        ) {
            char[] buffer = new char[10240];
            for (int length = 0; (length = reader.read(buffer)) > 0;) {
                writer.write(buffer, 0, length);
            }
            ret = writer.toString();
        }
        return ret;
    }
}
