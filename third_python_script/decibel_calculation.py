import math
import os

# CLI settings
os.system("cls")
os.system("title Decibel Calculation \n\n")
os.system("color 04")
os.system("python -m pyfiglet Calculation DB TLC")

# Create the array by 21 locations
vmax_notebook_column = [0] * 21

# Get user input for input voltage
print("Insert the input voltage (should be positive):")

while True:
    try:
        input_voltage = float(input())
        if input_voltage > 0:
            break  # Exit loop if the voltage is positive
        else:
            print("Please enter a positive value for the input voltage.")
    except ValueError:
        print("Invalid input. Please enter a numeric value.")

print("\nAcquiring data from the notebook column:\n")

# Get user input for vmax_notebook_column
for i in range(21):
    while True:
        try:
            vmax_notebook_column[i] = float(input(f"Enter value for vmax[{i}]: "))
            break  # Exit loop if the input is valid
        except ValueError:
            print("Invalid input. Please enter a numeric value.")

# Calculating the decibel value
print("\nCalculating the decibel value for each entry:")

for i in range(21):
    if vmax_notebook_column[i] > 0:
        db_value = 20 * math.log10(vmax_notebook_column[i] / input_voltage)
        print(f"vmax[{i}] = {vmax_notebook_column[i]}, Decibel Value = {db_value:.2f} dB")
    else:
        print(f"vmax[{i}] = {vmax_notebook_column[i]}, Invalid value (must be > 0)")

    os.system("pause >nul")  # Pause between each calculation
