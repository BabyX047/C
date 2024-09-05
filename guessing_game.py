print("Welcome to my guessing game.\n")

print("I am thinking of a number between 0 and 50\n")

# Generate a random number between 0 and 50

import random

number = random.randint(0, 50)

# Initialize the number of attempts

attempts = 0

# Set the maximum number of attempts

max_attempts = 5

# Start the game loop

while attempts < max_attempts:

    # Get the user's guess

    guess = int(input("Guess the number: "))
    
    # Check if the guess is correct
    
    if guess == number:
        
        print("Congratulations! You guessed the correct number.")
        
        break
    
    # Check if the guess is too high or too low
    
    elif guess < number:
        
        print("Too low. Try again.")
    
    else:
        
        print("Too high. Try again.")
    
    # Increment the number of attempts
    
    attempts += 1
    
    # Check if the user has exceeded the maximum number of attempts
    
    if attempts == max_attempts:
        
        print(f"Sorry, you ran out of attempts. The correct number was {number}.")

        