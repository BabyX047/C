# Create an empty dictionary to store the person's information
person_info = {}

# Ask the user for their name, age, and favorite color
name = input("Enter your name: ")
age = input("Enter your age: ")
favorite_color = input("Enter your favorite color: ")

# Store the information in the dictionary
person_info['name'] = name
person_info['age'] = age
person_info['favorite_color'] = favorite_color

# Print the dictionary to the console
print("\nHere is the information you entered:")
print(person_info)
