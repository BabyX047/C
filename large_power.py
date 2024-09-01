def large_power(base, exponent):
    # Calculate the result of base raised to the power of exponent
    result = base ** exponent
    
    # Use an if statement to check if the result is greater than 5000
    if result > 5000:
        return True
    else:
        return False
