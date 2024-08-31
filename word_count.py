# Store a list of words
words = ["apple", "banana", "cherry", "date", "fig", "grape", "kiwi"]

# Use list comprehension to create a new list with words that have an odd number of characters
odd_length_words = [word for word in words if len(word) % 2 != 0]

# Print the new list
print(odd_length_words)
