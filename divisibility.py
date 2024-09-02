def divisible_by_ten(num):
    # Calculate the remainder when num is divided by 10
    remainder = num % 10
    
    # Check if the remainder is 0
    return remainder == 0


# Get user input

testnum = []

# Loop until the user has entered at least 3 testnums
while len(testnum) < 3:
    num_number = len(testnum) + 1
    if num_number == 1:
        prompt = "Enter the first testnum: "
    elif num_number == 2:
        prompt = "Enter the second testnum: "
    elif num_number == 3:
        prompt = "Enter the third testnum: "
    else:
        prompt = f"Enter the {num_number}th testnum: "

    # Get the testnum from the user
    number = int(input(prompt))
    testnum.append(number)  # Add the testnum to the list




# Check if each number is divisible by 10
for num in testnum:
    if divisible_by_ten(num):
        print(str(num) + " is divisible by 10")
    else:
        print(str(num) + " is not divisible by 10")
