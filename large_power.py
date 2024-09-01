def large_power(base, exponent):
    # Calculate the result of base raised to the power of exponent
    result = base ** exponent
    
    # Use an if statement to check if the result is greater than 5000
    if result > 5000:
        return True
    else:
        return False

# Receive input from the user
base = int(input("Enter the base number: "))
exponent = int(input("Enter the exponent number: "))

# Call the function with the user-provided inputs and store the result
is_large_power = large_power(base, exponent)

if is_large_power % 2 == 0:
    print(f"The result of {base}^{exponent} is an even number.")
else:
    print(f"The result of {base}^{exponent} is an odd number.")


# # Print the result
# if is_large_power:
#     print(f"The result of {base}^{exponent} is greater than 5000.")
# else:
#     print(f"The result of {base}^{exponent} is not greater than 5000.")
