cmake_minimum_required(VERSION 3.0)
project(ServerSocketExample CXX)  # Specify C++ language

# Set C++ standard to C++11 (or higher if needed)
set(CMAKE_CXX_STANDARD 11)

# Add executable target
add_executable(server
    server.cpp  # Replace with your actual server source file(s)
)

# Add executable target
add_executable(client
    client.cpp  # Replace with your actual server source file(s)
)

# Link libraries if needed
target_link_libraries(server)
target_link_libraries(client)
