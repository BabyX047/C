print("\nHello, There!")

name = input("\nWhat is your name: ")

print("\nWelcome, " + name + "!\n")

coding = input("Want to learn coding? Y/N \n").lower()

if coding == 'n':
    print("\nHope you change your mind soon!\n")
    exit()  # Terminates the program immediately

age = int(input("How old are you: \n"))

if coding == 'y' and 6 <= age <= 13:
    print("\nGreat choice! Coding is an important skill for many jobs.\n")
    print("We shall begin with Scratch")

elif 13 < age <= 30:
    print("\nYou are at a great age to start learning coding! It's never too late.\n")
    print("Here are some popular coding languages:")
    print("\t- Python")
    print("\t- Java")
    print("\t- C++")
    print("\t- JavaScript")

else:
    print("\nI'm sorry, but your age does not meet the criteria for learning coding.\n")
