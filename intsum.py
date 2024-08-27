# Function to create a list of integers from user input
def create_integer_list():
    # Ask user to input numbers separated by spaces
    user_input = input("Enter integers separated by spaces: ")
    
    # Split the input string into a list of strings
    string_list = user_input.split()
    
    # Convert each string in the list to an integer
    integer_list = [int(num) for num in string_list]
    
    return integer_list

# Function to compute the sum of a list of integers
def compute_sum(integer_list):
    return sum(integer_list)

# Main program
if __name__ == "__main__":
    # Create the list of integers
    integer_list = create_integer_list()
    
    # Compute the sum of the list
    total_sum = compute_sum(integer_list)
    
    # Output the result
    print(f"The sum of the integers is: {total_sum}")
