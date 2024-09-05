print("Welcome to my guessing game.\n")

print("I am thinking of a number between 0 and 50\n")

# Generate a random number between 0 and 50
import random
number = random.randint(0, 50)


attempts = 0
max_attempts = 5


while attempts < max_attempts:

    guess = int(input("Guess the number: "))
    
    if guess == number:
        
        print("Congratulations! You guessed the correct number.")
        
        break
    
    
    elif guess < number:
        
        print("Too low. Try again.")
    
    else:
        
        print("Too high. Try again.")
    
    attempts += 1
    
    # Check if the user has exceeded the maximum number of attempts
    
    if attempts == max_attempts:
        
        print(f"Sorry, you ran out of attempts. The correct number was {number}.")

