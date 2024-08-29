# Create an empty dictionary to store the person's information
person_info = {}

user_input = input("Enter your name, age, and favorite color (separated by commas): ")

# Split the input string into a list using comma as the delimiter
name, age, favorite_color = user_input.split(',')

# Store the information in the dictionary
person_info['Name'] = name.strip()
person_info['Age'] = age.strip()
person_info['Favorite Color'] = favorite_color.strip()

# Print the dictionary
print(person_info)
