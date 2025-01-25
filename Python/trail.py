'''X = 10
Y = "khressy"
print(X)
print(Y)'''
############################################
'''x = ["BMW", "Audi", "Ford"]
print(x)
print(x[1])'''
#############################################
'''x = ["BMW", "Audi", "Ford"]
x[0] = "Honda"
print(x)'''
#############################################
'''x = ["BMW", "Audi", "Ford"]
x.append("Honda")
print(x)
x.remove("Audi")
print(x)
'''
#############################################
'''x = ("BMW", "Audi", "Ford")
print(x)
print(x[1])'''
##############################################
'''
x = ("BMW", "Audi", "Ford")
y = list(x)
y.remove("BMW")
x = tuple(y)
print(x)'''
############################################
'''i = 1
while i < 6:
    print(i)
    i += 1'''
#############################################
'''i = 1
while i < 6:
    print(i)
    if i == 3:
        break
    i += 1 '''
#############################################
'''i = 0
while i < 6:
    i += 1 
    if i == 3:
        continue
    print(i)'''
##############################################
'''for x in range(10):
    print(x)'''
##############################################
'''name = input("name")
print(name)'''
##############################################
'''number=int(input("Enter a number\n"))
if number % 2 == 0:
    print('number is even')
else:
    print('number is odd')'''
##############################################
'''text=input("Enter a string\n")

vowels = "aeiouAEIOU"
count = 0

for char in text:
    if char in vowels:  
        count += 1

print("Number of vowels:", count)
'''
##############################################
'''shopping_list = [] 

while True:
    print("1. Add item")
    print("2. Remove item by name")
    print("3. Display all items")
    print("4. Clear the list")
    print("5. Exit")

    choice = input("Enter your choice (1-5): ")

    if choice == "1":
        item = input("Enter the item to add: ")
        shopping_list.append(item)
        print("Done")

    elif choice == "2":
        item = input("Enter the item to remove: ")
        if item in shopping_list:
            shopping_list.remove(item)
            print(f"'{item}' has been removed from the shopping list.")
        else:
            print(f"'{item}' is not in the shopping list.")

    elif choice == "3":
        if shopping_list:
            print("\nItems in your shopping list:")
            for i, item in enumerate(shopping_list, 1):
                print(f"{i}. {item}")
        else:
            print("The shopping list is empty.")

    elif choice == "4":
        shopping_list.clear()
        print("The shopping list has been cleared.")

    elif choice == "5":
        print("Bye!")
        break

    else:
        print("Invalid choice.")
'''
######################################################

'''number = int(input("Enter a number: "))

if number > 1:
    for i in range(2, int(number ** 0.5) + 1):  
        if number % i == 0:
            print("Not prime")
            break
    else:
        print("Prime")  
else:
    print("Not prime")  
'''
##########################################################

'''n = int(input("Enter a number: "))

for i in range(1, n + 1):
    print('*' * i)'''
#########################################################
'''
import os
file_path = r"path"

with open(file_path, 'w') as file:
    file.write("This is a new file created using the os module and Python.")

	'''
##########################################################

'''import os

directory_path = r"./new_directory"
os.mkdir(directory_path)
'''

###########################################################
'''
import os
directory_path = r"./new_directory"
directory_path2 = r"./new_dir2"
os.mkdir(directory_path2)
file_path2 = r"./new_dir2/file2.txt"
with open(file_path2,"w") as file2:
    file2.write("this the new file ,hi iam here")

os.remove(directory_path2) # if it's empty
os.rmdir(directory_path) # if it's not empty'''

##########################################################
'''import os
os.system("start chrome")
os.system("start https:\\www.facebook.com")

os.system(" start chrome https:\\www.facebook.com")'''


#########################################################