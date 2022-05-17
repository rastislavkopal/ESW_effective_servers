To run this project:
compile solution with `mvn compile` to generate protobuf classes

now its all setup, run:
mvn clean install
mvn exec:java -Dexec.mainClas=server.AppServer

The server is now up and running :)