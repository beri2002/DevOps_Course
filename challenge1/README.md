# Flask Web Server Project

This project demonstrates a simple web server using Flask in Python. The server listens on port 8000 and includes two endpoints:
- `/`: Returns a welcome message "Hello, Flask!"
- `/age`: Returns the age of the user.

## Overview

The Flask web server provides basic endpoints to demonstrate web development with Python using the Flask framework.

## Concepts

### External IP

An external IP address, also known as a public IP address, is assigned to a device by an Internet Service Provider (ISP). It allows devices on the internet to communicate with your device or network.

### Internal IP

An internal IP address, or private IP address, is used within a local network. Devices within the same network use internal IP addresses to communicate. These addresses are not routable on the global internet.

### Ports

Ports are numerical identifiers in the TCP/IP protocol suite used to differentiate between multiple services on a single device. Each service or application uses a different port number for communication. For example:
- Web servers typically use:
  - Port 80 for HTTP
  - Port 443 for HTTPS

In this project, the Flask web server listens on port 8000 (`http://127.0.0.1:8000`).

## How to Run

### Prerequisites

- Make sure you have Python installed on your system. You can download it from [python.org](https://www.python.org/).
- Install Flask using pip if you haven't already:
```sh
pip install flask
```
- In your terminal, navigate to the directory where app.py is located and run: 
```sh
python server.py
```
- Open your web browser and navigate to http://127.0.0.1:8000 to see the welcome message and http://127.0.0.1:8000/age to see the age.


