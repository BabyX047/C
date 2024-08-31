# Initialize the words list
words = []

# Loop until the user has entered at least 5 words
while len(words) < 5:
    word = input("Enter a word: ")
    words.append(word)  # Add the word to the list

# Use list comprehension to create a new list with words that have an odd number of characters
odd_length_words = [word for word in words if len(word) % 2 != 0]

# Use list comprehension to create a new list with words that have an even number of characters
even_length_words = [word for word in words if len(word) % 2 == 0]

# Print the lists
print("Odd words are: ", odd_length_words)
print("Even words are: ", even_length_words)
