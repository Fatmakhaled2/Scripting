import os
import socket

def scan_multiple_port(ip):
    start = int(input("Enter start of the range: "))
    end = int(input("Enter end of the range: "))

    for port in range(start, end + 1):  
        s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        result = s.connect_ex((ip, port))  
        if result == 0:
            print(f"Port {port} is open")
        else:
            print(f"Port {port} is closed")     
        s.close()
 
def scan_port(ip):
    port = int(input("Enter port number: "))
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    result = s.connect_ex((ip, port))  
    if result == 0:
       print(f"Port {port} is open")
    else:
        print(f"Port {port} is closed")       
    s.close()
 
def scan_network():
    network = input("Enter your network (x.x.x.): ")
    start = int(input("Enter start of the range: "))
    end = int(input("Enter end of the range: "))

    for x in range(start, end + 1):
        ip = f"{network}{x}"  
        result = os.system(f"ping -n 1 -w 1 {ip} > nul 2>&1")  
        if result == 0: 
            print(f"Network {ip} is up")
            scan_port(ip)
        else:
            print(f"Network {ip} is down")
            
def scan_network_multiple_ports():
    network = input("Enter your network (x.x.x.): ")
    start = int(input("Enter start of the range: "))
    end = int(input("Enter end of the range: "))

    for x in range(start, end + 1):
        ip = f"{network}{x}"  
        result = os.system(f"ping -n 1 -w 1 {ip} > nul 2>&1")  
        if result == 0: 
            print(f"Network {ip} is up")
            scan_multiple_port(ip)
        else:
            print(f"Network {ip} is down")

while True:
    choice = int(input("Enter 1 to scan one port \nEnter 2 to scan range of ports\nEnter 3 to Exit: "))
    
    if choice == 1:
        scan_network()
    elif choice == 2:
        scan_network_multiple_ports()
    elif choice == 3:
        break
    else:
        print("Wrong choice")
