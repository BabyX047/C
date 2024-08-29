# Create an empty dictionary to store the user's information
user_info = {}

# Ask the user for their name, age, and favorite color
name = input("Enter your name: ")
age = input("Enter your age: ")
favorite_color = input("Enter your favorite color: ")

# Store the information in the dictionary
user_info['name'] = name
user_info['age'] = age
user_info['favorite_color'] = favorite_color

# Print the dictionary to the console
print("\nThe information you entered is:")
print(user_info)
