package server;

import cz.cvut.fel.esw.server.proto.Request;
import cz.cvut.fel.esw.server.proto.Response;
import io.netty.channel.ChannelInitializer;
import io.netty.channel.ChannelPipeline;
import io.netty.channel.Channel;
import io.netty.channel.socket.SocketChannel;
import io.netty.handler.codec.protobuf.ProtobufDecoder;
import io.netty.handler.codec.protobuf.ProtobufEncoder;
import io.netty.handler.codec.protobuf.ProtobufVarint32FrameDecoder;
import io.netty.handler.codec.protobuf.ProtobufVarint32LengthFieldPrepender;

public class ServerInitializer extends ChannelInitializer<SocketChannel> {
    @Override
    protected void initChannel(SocketChannel ch) {
        ChannelPipeline pipeline = ch.pipeline();
        pipeline.addLast(new ReqDecoder());
        pipeline.addLast(new ResEncoder());
//        pipeline.addLast(new ProtobufVarint32FrameDecoder());
//        pipeline.addLast(new ProtobufDecoder(Request.getDefaultInstance()));

//        pipeline.addLast(new ProtobufVarint32LengthFieldPrepender());
//        pipeline.addLast(new ProtobufEncoder());


        pipeline.addLast(new ServerProtoHandler());
    }
}
