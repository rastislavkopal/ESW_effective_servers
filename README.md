# ESW_effective_server
Task assignment
Write an TCP + protobuf based server application, which will count unique words in data sent by clients. The server must meet the following requirements:

All TCP transfers are composed of two parts: message length (4 bytes, big endian, unsigned int) + serialized protobuf message.
Clients send data using Request_PostWords protobuf message. Data are in plain text format encoded in UTF-8 and compressed by gzip method.
The server counts unique words. On startup, the counter equals zero.
The server keeps records of words sent by clients. The unique word counter is increased by one for each new word, which is not in records yet.
If a Request_GetCount arrives, the server will answer actual value of unique count and reset it.
The server must be able to handle a large number of simultaneously connected clients (approximately 100).
The server has to respond to every client Request message with Response message. Status field in response message is required.
