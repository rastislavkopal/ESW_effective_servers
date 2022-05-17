package server;

import cz.cvut.fel.esw.server.proto.Request;
import io.netty.buffer.ByteBuf;
import io.netty.buffer.ByteBufInputStream;
import io.netty.channel.ChannelHandlerContext;
import io.netty.handler.codec.ByteToMessageDecoder;
import io.netty.handler.codec.ReplayingDecoder;


import java.nio.ByteBuffer;
import java.nio.charset.Charset;
import java.util.List;

public class ReqDecoder extends ByteToMessageDecoder {

    /**
     * @param data (byte[4])  --> packed
     * @return unsigned int (0 - 4,294,967,295)
     */
    public static long toUInt(final byte[] data) {
        if (data == null || data.length != 4)
            throw new IllegalArgumentException("!= 4 bytes");
        return (long)(
                (long)(data[0] & 0xffL) << 24 |
                (long)(data[1] & 0xffL) << 16 |
                (long)(data[2] & 0xffL) << 8  |
                (long)(data[3] & 0xffL)
        );
    }

    private final Charset charset = Charset.forName("UTF-8");

    @Override
    protected void decode(ChannelHandlerContext channelHandlerContext, ByteBuf in, List<Object> list) throws Exception {
        if (in.readableBytes() < 4) {
            return;
        }

        long size = in.getUnsignedInt(in.readerIndex());

        if (in.readableBytes() - 4 < size) {
            return;
        }

        in.skipBytes(4);
        Request req = Request.parseFrom(new ByteBufInputStream(in));
        list.add(req);
    }
}
