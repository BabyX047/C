# Store a list of words
words = input("Enter words separated by a space: ").split()

# Use list comprehension to create a new list with words that have an odd number of characters
odd_length_words = [word for word in words if len(word) % 2 != 0]

# Use list comprehension to create a new list with words that have an even number of characters
even_length_words = [word for word in words if len(word) % 2 == 0]

# Print the lists
print("Odd words are: ", odd_length_words)
print("Even words are: ", even_length_words)
