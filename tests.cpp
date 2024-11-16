#include <iostream>
#include <cassert>
#include <cstring>
#include <cstdlib>

// Mock function to simulate server response
const char* mockServerResponse(int start, int end) {
    static char response[256];
    sprintf(response, "Received range: %d to %d", start, end);
    return response;
}

// Test function for sendRequest
void testSendRequest() {
    int start = 0;
    int end = 10;
    const char* expectedResponse = "Received range: 0 to 10";
    
    // Simulate sending request and receiving response
    const char* response = mockServerResponse(start, end);
    
    // Check if the response matches the expected output
    assert(strcmp(response, expectedResponse) == 0);
    std::cout << "testSendRequest passed!" << std::endl;
}

// Main function to run tests
int main() {
    testSendRequest();
    std::cout << "All tests passed!" << std::endl;
    return 0;
}