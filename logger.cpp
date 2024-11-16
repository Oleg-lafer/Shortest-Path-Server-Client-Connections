#include <iostream>
#include <fstream>
#include <ctime>
#include <string>

// Function to log messages to a file
void logMessage(const std::string& message) {
    std::ofstream logFile("client.log", std::ios_base::app);
    if (logFile.is_open()) {
        std::time_t now = std::time(nullptr);
        logFile << std::ctime(&now) << ": " << message << std::endl;
    } else {
        std::cerr << "Unable to open log file!" << std::endl;
    }
}

// Example usage of logging
void logExampleUsage() {
    logMessage("Client started.");
    logMessage("Attempting to connect to server...");
    // Simulate a successful connection
    logMessage("Connected to server successfully.");
}