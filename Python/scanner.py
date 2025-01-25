import os
import socket
ip = '19.19.1.114'

def scan_multiple_port():
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
    port = int(input("Enter port number"))
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    result = s.connect_ex((ip, port))  
    if result == 0:
       print(f"Port {port} is open")
    else:
        print(f"Port {port} is closed")       
    s.close()
  
while True:
    choice = int(input("Enter 1 to scan one port \n Enter 2 to scan range of ports\n Enter 3 to Exit"))
    if choice ==1:
        scan_port(ip)
    elif choice ==2:
        scan_multiple_port()
    elif choice == 3:
        break
    else:
        print("wrong choice")





                
                
                


'''for x in range(start, end + 1):
    ip = f"{network}{x}"  
    result = os.system(f"ping -n 1 -w 1 {ip} > nul 2>&1")  
    if result == 0: 
        print(f"Network {ip} is up")
    else:
        print(f"Network {ip} is down")'''



'''network = input("Enter your network (x.x.x.): ")
start = int(input("Enter start of the range: "))
end = int(input("Enter end of the range: "))

for x in range(start, end + 1):
    ip = f"{network}{x}"  
    result = os.system(f"ping -n 1 -w 1 {ip} > nul 2>&1")  
    if result == 0: 
        print(f"Network {ip} is up")
    else:
        print(f"Network {ip} is down")
'''


         

'''socket_con = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

#\r enter \n new line
socket_con.connect(("google.com",80))
socket_con.send(b"GET / HTTP/1.1 \r\n ")
socket_con.send(b"HOST www.google.com \r\n")
socket_con.send(b"connection closed\r\n")
socket_con.send(b"\r\n")

result = socket_con.recv(1024)
print(result)'''


'''for port in range(1,65535):
            socket= socket.socket(socket.AF_INET, socket.SOCK_STREAM)
            socket.connect(ip,port)
            response= socket.recv(500)
            if response ==0:
                print(f"Port {port} is up")
            else:
                print(f"Port {port} is down")'''