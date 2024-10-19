# Graph Pathfinding Server

## Overview

The Graph Pathfinding Server is a multi-threaded application that allows clients to request the shortest path between two nodes in a graph. The graph is represented using an adjacency list, which is read from a file. The server employs the Breadth-First Search (BFS) algorithm to calculate paths and utilizes caching to enhance performance.

### Key Features

- **Graph Representation**: The graph is loaded from a text file, where each line represents an edge between two nodes.
- **Pathfinding**: The server implements the BFS algorithm to find the shortest path between two nodes.
- **Client-Server Architecture**: The server can handle multiple clients simultaneously using threads.
- **Caching**: Cached paths are stored for quick retrieval, reducing computation time for repeated requests.

## Installation

To run this project, you will need a C++ compiler and the necessary libraries for socket programming. This project has been tested on Unix-like systems.

### Build Instructions

1. Clone the repository:
    ```bash
    git clone https://github.com/yourusername/graph-pathfinding-server.git
    cd graph-pathfinding-server
    ```

2. Compile the server and client code:
    ```bash
    g++ -o server server.cpp -lpthread
    g++ -o client client.cpp
    ```

## Usage

### Running the Server

1. Start the server by providing the filename containing the graph data and the port number:
    ```bash
    ./server <filename> <port>
    ```

    Example:
    ```bash
    ./server graph.txt 4444
    ```

### Running the Client

1. Send a request to the server specifying the server IP, port, start node, and end node:
    ```bash
    ./client <serverIP> <port> <start> <end>
    ```

    Example:
    ```bash
    ./client 127.0.0.1 4444 1 5
    ```

## Example Graph File Format

The graph should be defined in a text file with edges represented by pairs of integers. Each line denotes a connection between two nodes.

```
1 2
1 3
2 4
3 4
4 5
```

## Explanation of Classes and Functions

- **Graph Structure**: 
  - `struct Graph`: Contains an adjacency list represented as an unordered map where keys are node identifiers, and values are vectors of connected nodes.

- **Functionality**:
  - `readGraphFromFile(const string& fileName)`: Reads the graph structure from a specified file and populates the `Graph` structure.
  - `BFS(const Graph& graph, int start, int end)`: Implements the Breadth-First Search algorithm to find the shortest path between the specified start and end nodes.
  - `handleClient(int clientSocket, const Graph& graph)`: Manages incoming client requests, processes pathfinding, and handles caching.
  - `runServer(int port, const string& filename)`: Sets up the server socket, binds it, listens for client connections, and starts a thread for each connected client.

- **Global Variables**:
  - `unordered_map<string, vector<int>> cache`: Stores cached paths.
  - `queue<string> cacheOrder`: Maintains the order of cached paths for eviction.
  - `mutex cacheMutex`: Ensures thread safety when accessing the cache.

## Contributing

Contributions are welcome! If you have suggestions for improvements or new features, please fork the repository and submit a pull request.

