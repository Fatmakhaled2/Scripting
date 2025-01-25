import re
passward = str(input("enter your password"))
flag = True

while flag:
    if len(passward)<8:
        flag= False
        print('your password must be more than 8 charcters')
    elif not re.search('[A-Z]',passward):
        flag= False
        print('your password must have an uppercase')
    elif not re.search('[a-z]',passward):
        flag= False
        print('your password must have an lowercase')
    elif not re.search('[0-9]',passward):
        flag= False
        print('your password must have number')
    elif not re.search(r'[!*+@#$%^&()_~/|]',passward):
        flag= False
        print('your password must have a special char')
    else:
        print('your password is strong')
        break
    