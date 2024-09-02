def divisible_by_ten(num):
    # Calculate the remainder when num is divided by 10
    remainder = num % 10
    
    # Check if the remainder is 0
    return remainder == 0


# Get user input

testnum = []
testnumcount = 0

while testnumcount < 3:
    testnum.append(int(input("Enter a number: ")))
    testnumcount += 1





# Check if each number is divisible by 10
for num in testnum:
    if divisible_by_ten(num):
        print(str(num) + " is divisible by 10")
    else:
        print(str(num) + " is not divisible by 10")
