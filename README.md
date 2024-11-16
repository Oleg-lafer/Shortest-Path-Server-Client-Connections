# TCP Client-Server Application

## Overview
This project is a simple TCP client that communicates with a server to send a range of integers and receive a response. It demonstrates basic socket programming in C++ and includes error handling for socket operations. The application is designed to be user-friendly and can be run from the command line, making it suitable for both educational purposes and practical applications.

## Features
- **Socket Programming**: Establishes a TCP connection to a server using the BSD socket API.
- **Error Handling**: Provides comprehensive feedback for socket creation, connection failures, and data transmission issues.
- **Command-Line Interface**: Accepts user input for server IP, port, and integer range, allowing for flexible usage.
- **Logging**: Records events and errors to a log file (`client.log`) for debugging and tracking application behavior.
- **Unit Testing**: Includes a set of unit tests to validate the functionality of the client application.
- **Configuration Management**: Utilizes a JSON configuration file to allow users to specify default settings for the client.

## Installation
To get started with the TCP Client-Server application, follow these steps:

1. **Clone the Repository**: If you haven't already, clone the repository to your local machine using Git.
   ```
   git clone <repository-url>
   cd <repository-directory>
   ```

2. **Compile the Client**: Ensure you have a C++ compiler installed (e.g., g++). Compile the client application using the following command:
   ```
   g++ client.cpp -o client
   ```

3. **Run the Client**: You can run the client from the command line. The application requires four arguments: server IP, port, start integer, and end integer.
   ```
   ./client <serverIP> <port> <start> <end>
   ```

   For example:
   ```
   ./client 127.0.0.1 4444 0 10
   ```

## Usage
The client application is designed to be straightforward to use. Upon execution, it will prompt the user to enter the required parameters. The application will then attempt to connect to the specified server and send the range of integers. The server is expected to process this request and return a response, which the client will display.

### Example Command
To run the client with specific parameters, use the following command:
```
./client 192.168.1.1 8080 1 100
```
This command connects to the server at IP address `192.168.1.1` on port `8080` and sends the range from `1` to `100`.

## Logging
The application logs important events and errors to a file named `client.log`. This log file is created in the same directory as the executable. It can be useful for debugging and understanding the application's behavior during execution. The log entries include timestamps and messages indicating the status of the application.

## Unit Testing
To ensure the reliability of the application, a set of unit tests is provided in the `tests.cpp` file. These tests validate the functionality of the client, including the request sending and response handling. To run the tests, compile the `tests.cpp` file and execute the resulting binary.

### Running Tests
Compile the tests using:
```
g++ tests.cpp -o tests
```
Then run the tests:
```
./tests
```

## Configuration Management
The application supports configuration through a JSON file named `config.json`. This file allows users to specify default settings such as server IP, port, and integer range. The client reads this configuration at runtime, making it easier to manage settings without modifying the source code.

### Example Configuration File
```json
{
    "serverIP": "127.0.0.1",
    "port": 4444,
    "defaultStart": 0,
    "defaultEnd": 10
}
```

## Acknowledgments
This project was developed by [Your Name]. It is inspired by the need for efficient client-server communication in network programming. Special thanks to the open-source community for providing resources and libraries that facilitated the development of this application.

## Future Enhancements
There are several potential enhancements that could be made to this project in the future:
- Implementing a graphical user interface (GUI) for improved user experience.
- Adding support for asynchronous communication to handle multiple requests simultaneously.
- Expanding the logging functionality to include different log levels (e.g., info, warning, error).
- Integrating a more robust error handling mechanism to manage different types of socket errors.

## Conclusion
The TCP Client-Server application serves as a foundational example of socket programming in C++. It provides a solid base for further development and experimentation in network communication. Whether you are a beginner looking to learn about sockets or an experienced developer seeking to expand your skills, this project offers valuable insights and practical experience.
