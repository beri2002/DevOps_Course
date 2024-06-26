#include <iostream>
#include <cstring>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>

#define PORT 12345
#define BUFFER_SIZE 1024

int main() {
    int server_fd, new_socket;
    struct sockaddr_in address;
    int addrlen = sizeof(address);
    char buffer[BUFFER_SIZE] = {0};
    const char* hello = "Hello from server";

    // Create socket file descriptor
    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0) {
        perror("socket failed");
        return -1;
    }

    // Define the type of socket created
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);

    // Bind the socket to the address and port
    if (bind(server_fd, (struct sockaddr *)&address, sizeof(address)) < 0) {
        perror("bind failed");
        return -1;
    }

    // Listen for incoming connections
    if (listen(server_fd, 3) < 0) {
        perror("listen");
        return -1;
    }

    std::cout << "Server listening on port " << PORT << std::endl;

    // Accept incoming connection
    if ((new_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t*)&addrlen)) < 0) {
        perror("accept");
        return -1;
    }

    // Read message from client
    int valread = read(new_socket, buffer, BUFFER_SIZE);
    std::cout << "Received message: " << buffer << std::endl;

    // Send message back to client
    send(new_socket, hello, strlen(hello), 0);
    std::cout << "Message sent to client: " << hello << std::endl;

    // Close the socket
    close(new_socket);
    close(server_fd);

    return 0;
}

