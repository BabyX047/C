# # Create a tuple of book names
# favorite_books = ("1984", "To Kill a Mockingbird", "Brave New World", "The Catcher in the Rye", "Pride and Prejudice")

# # Use a for loop to print each book name on a separate line
# for book in favorite_books:
#     print(book)

book = 1  # Initialize the counter

while book < 6:  # Continue looping while the counter is less than 6
    book_name = input("Please enter a book name: ")  # Ask the user for a book name
    print("Book " + str(book) + ": " + book_name)  # Print the book number and name
    book += 1  # Increment the counter to eventually end the loop
