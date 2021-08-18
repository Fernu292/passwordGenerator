import random


#Create the template of characters
chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz12346789!@#$%^&*"
size = len(chars)

#Declarate the Variable Password
password = " "


#Take an input int from user 
length = int(input('Select the length of your password: '))


#Generate the password
for i in range(length):
    password+=chars[random.randint(0, size)]
    i+=1

print(f'Your password is: {password}')
