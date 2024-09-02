def divisible_by_ten(num):
    # Calculate the remainder when num is divided by 10
    remainder = num % 10
    
    # Check if the remainder is 0
    if remainder == 0:
        return True
    else:
        return False


# Get user input

testnum = int(input("Enter a test number: "))

# Check if the number is divisible by 10

if divisible_by_ten(testnum):
    print(str(testnum) + " is divisible by 10")
else:
    print(str(testnum) + " is not divisible by 10")