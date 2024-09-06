print("Hello there, What is your name? ")

name = input()

print(("Hello," + name + " What is your age? "))

# Prompt the user to enter their age
age = int(input("Enter your age: "))

# Check if the age is greater than or equal to 18
if age >= 18:
    print("You are eligible to vote")

    choicetovote = input("Do you want to vote? Y/N \n").lower()

    if choicetovote == 'y':
        print("Great, Let's exercise democracy! ")
    else:
        print("We'll try next time, but dont complain.")


else:
    print("You are not eligible to vote")
