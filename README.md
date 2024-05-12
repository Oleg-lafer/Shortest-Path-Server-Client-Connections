# Shortest Path Server-Client

This project implements a client-server architecture to find the shortest path in a graph. The server is responsible for computing the shortest path using Breadth First Search (BFS) algorithm, and the client sends requests to the server to find the shortest path between two nodes in the graph.

## Features

- Server implemented in C++ using sockets.
- Client implemented in C++ using sockets.
- Communication between server and client over TCP/IP.
- Caching mechanism on the server to optimize performance by storing computed paths.
- Support for multi-threading to handle multiple client connections simultaneously.
- Simple command-line interface for both server and client.

## Prerequisites

- C++ compiler supporting C++11 or later.
- Unix-like environment (Linux, macOS).

## Usage

### Server

To run the server, navigate to the server directory and compile the source code using a C++ compiler. Then, execute the compiled binary with the following command:
./server <filename> <port>



Where:
- `<filename>` is the path to the file containing the graph data.
- `<port>` is the port number on which the server will listen for client connections.

### Client

To run the client, navigate to the client directory and compile the source code using a C++ compiler. Then, execute the compiled binary with the following command:
./client <serverIP> <port> <start> <end>




Where:
- `<serverIP>` is the IP address of the server.
- `<port>` is the port number on which the server is listening.
- `<start>` is the starting node of the shortest path.
- `<end>` is the ending node of the shortest path.

## Example

1. Start the server:
cd server
g++ -std=c++11 server.cpp -o server
./server graph.txt 8080




2. In another terminal window, run the client:
cd client
g++ -std=c++11 client.cpp -o client
./client 127.0.0.1 8080 1 5



This will send a request to the server to find the shortest path between nodes 1 and 5 in the graph.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.



