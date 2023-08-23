def celsius_to_fahrenheit(celsius):
    """
    Purpose:
        Converts from Celsius to Fahrenheit.

    Parameters:
        celsius (float): The temperature in Celsius.

    Returns:
        The temperature in Fahrenheit (float).
    """
    # Check if the input is a valid numerical value
    if not isinstance(celsius, (int, float)):
        raise ValueError("Input temperature must be a numerical value.")

    # Check if the input temperature is within a reasonable range
    if celsius < -273.15:
        raise ValueError("Temperature cannot be below absolute zero (-273.15°C).")

    # Perform the conversion using the formula (Celsius * 9/5) + 32
    fahrenheit = (celsius * 9 / 5) + 32
    return fahrenheit
