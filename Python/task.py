import os
import string

# Take the filename as input from the user
file_name = input("Enter the filename you are looking for: ")

# Get all available drives on the system
drives = [f"{drive}:\\" for drive in string.ascii_uppercase if os.path.exists(f"{drive}:\\")]

# Function to search for the file in directories
def find_file(file_name, drives):
    for drive in drives:
        for dirpath, dirnames, filenames in os.walk(drive):
            if file_name in filenames:
                return os.path.join(dirpath, file_name) 
    return None  
file_path = find_file(file_name, drives)
if file_path:
    print(f"The file was found at: {file_path}")
else:
    print("The file was not found.")
