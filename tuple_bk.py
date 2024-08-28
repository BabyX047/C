book = 1  # Initialize the counter
book_names = []  # Initialize an empty list to store book names

while book < 6:  # Proper Python syntax with a colon
    name = input("Please enter a book name: ")  # Get the book name from user input
    book_names.append(name)  # Add the book name to the list
    book += 1  # Increment the counter

# Join the list of book names into a single string separated by commas
print("Books entered: " + ", ".join(book_names))
