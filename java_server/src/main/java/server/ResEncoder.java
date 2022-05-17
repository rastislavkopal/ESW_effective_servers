package server;

import com.google.protobuf.ByteString;
import cz.cvut.fel.esw.server.proto.Response;
import io.netty.buffer.ByteBuf;
import io.netty.buffer.Unpooled;
import io.netty.channel.ChannelHandlerContext;
import io.netty.handler.codec.MessageToByteEncoder;

import java.nio.ByteBuffer;
import java.nio.charset.StandardCharsets;

public class ResEncoder  extends MessageToByteEncoder<Response> {

    /**
     * @param data unsigned int (0 - 4,294,967,295)
     * @return packed byte array [4]
     */
    public static byte[] toBytes(final long data) {
        return new byte[] {
                (byte)((data >> 56) & 0xff),
                (byte)((data >> 48) & 0xff),
                (byte)((data >> 40) & 0xff),
                (byte)((data >> 32) & 0xff),
                (byte)((data >> 24) & 0xff),
                (byte)((data >> 16) & 0xff),
                (byte)((data >> 8) & 0xff),
                (byte)((data >> 0) & 0xff),
        };
    }


    @Override
    protected void encode(ChannelHandlerContext ctx, Response response, ByteBuf out) throws Exception {

        byte[] size = ByteBuffer.allocate(4).putInt(response.getSerializedSize()).array();
        byte[] bRes = response.toByteArray();

        System.out.println(response.getCounter());

        out.writeBytes(size);
        out.writeBytes(bRes);
    }
}
