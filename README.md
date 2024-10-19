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


```markdown
## Running the Project

To run the entire project, follow these steps:

### Step 1: Prepare the Data File
Ensure that you have the `data_adjacency_table.csv` file in the project directory. This file should contain the adjacency list representation of the graph. The format of the CSV file should look like this:

```
node1,node2
node2,node3
node1,node3
...
```

Each line represents an edge between two nodes in the graph. Ensure there are no extra spaces or formatting issues in the file.

### Step 2: Compile the Code
Open your terminal, navigate to the project directory, and compile the server and client code using the following commands:

```bash
g++ -o server server.cpp -lpthread
g++ -o client client.cpp
```

### Step 3: Start the Server
Run the server by specifying the CSV filename and the desired port number. In this example, we will use port `4444`:

```bash
./server data_adjacency_table.csv 4444
```

This command will read the graph from `data_adjacency_table.csv` and start the server, listening for client requests.

### Step 4: Run the Client
In a separate terminal window, run the client to request the shortest path between two nodes. Specify the server's IP address (for localhost, use `127.0.0.1`), the port number used by the server, and the start and end nodes. For example:

```bash
./client 127.0.0.1 4444 1 5
```

This command will send a request to the server to find the shortest path from node `1` to node `5`. The server will process the request and return the path (if found) to the client, which will then display it in the terminal.

### Example Workflow
1. **Prepare the `data_adjacency_table.csv`:**
   ```
   1,2
   2,3
   3,4
   4,5
   1,5
   ```

2. **Start the server:**
   ```bash
   ./server data_adjacency_table.csv 4444
   ```

3. **Run the client to find a path:**
   ```bash
   ./client 127.0.0.1 4444 1 5
   ```

This will initiate the server and allow clients to query for paths in the graph as specified in the CSV file.
```

### Notes
- Adjust the instructions according to the actual structure of your `data_adjacency_table.csv` if necessary.
- This section guides users step-by-step through preparing the data file, compiling the code, starting the server, and running the client to test the functionality.
- Feel free to customize any part of this section based on your project’s requirements! Let me know if you want any changes or additional details.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.



