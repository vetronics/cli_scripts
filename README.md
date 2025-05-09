# CLI Scripts

A collection of C++ and Python command-line tools for automating common system tasks and calculations. These scripts enable users to manage directories, perform system diagnostics, and calculate decibel values from input voltages.

## Table of Contents

- [Project Overview](#project-overview)
- [Features](#features)
- [Requirements](#requirements)
- [Usage Instructions](#usage-instructions)
  - [Compilation Instructions](#compilation-instructions)
  - [Python Setup](#python-setup)
  
- [License](#license)
- [Troubleshooting](#troubleshooting)

---

## Project Overview

This repository contains several command-line scripts designed to perform the following tasks:

1. **Folder Creation Script** (C++): Automatically creates a specified number of folders in the current directory.
2. **CMD Automation Script** (C++): Provides a set of network-related and system diagnostics commands (e.g., cleaning temp files, displaying network parameters, pinging websites, viewing active connections, and displaying system info).
3. **Decibel Calculation Script**:
   - **C++ Version**: Calculates decibel (dB) values for a set of voltage readings based on a reference voltage.
   
4. **Unit Conversion Script** (C++): Calculates multiples and submultiples for various physical units (e.g., meter, kilogram, second, etc.), given an input value.

These scripts integrate with Python for ASCII art in the terminal, providing a visually appealing interface.

---

## Features

### 1. Folder Creation Script (C++)
- Allows users to specify the number of folders to create (named `Folder_1`, `Folder_2`, ..., `Folder_n`).
- Prints success messages in green and error messages in red.

### 2. CMD Automation Script (C++)
- Provides a menu-driven interface to select from five system management tasks:
  1. **Clean Temporary Files**: Wipes out system temp files.
  2. **Network Interface Information**: Displays network adapter settings.
  3. **Ping Command**: Pings a specified domain multiple times.
  4. **Active Connections**: Displays statistics for active network connections.
  5. **System Info**: Outputs detailed system information.

### 3. Decibel Calculation Script (C++)
- **C++ Version**: Computes the decibel (dB) values for a set of voltages using the formula:
  \[
  \text{dB} = 20 \times \log_{10} \left(\frac{V_{\text{max}}}{V_{\text{input}}}\right)
  \]
  Prompts the user for a reference voltage, then processes 21 voltage values to calculate and display corresponding dB values.

### 4. Unit Conversion Script (C++)
- **Functionality**: This script helps in converting units and calculating multiples and submultiples for a given unit.
  - The user is prompted to choose a physical unit from a list (e.g., meter, kilogram, second, volt, etc.).
  - After choosing the unit, the user is asked to input a reference value for the unit.
  - The script calculates the multiples and submultiples of the input value using powers of 10.
  - For example, it computes the following for the selected unit:
    - Multiples: \( \text{unit} \times 10^i \)
    - Submultiples: \( \text{unit} \times 10^{-j} \)

---

## Requirements

### Software
- **C++ Compiler** (for C++ scripts): The scripts are written in C++ and require a C++ compiler to compile and run (e.g., GCC, MinGW, or MSVC).
- **Dev C++ 5.11**: An Integrated Development Environment (IDE) for C++ development, which includes a built-in GCC compiler. You can use Dev C++ 5.11 to compile and run these scripts.
  - **Download Dev C++ 5.11**: [Dev C++ Official Website](https://www.bloodshed.net/devcpp.html)
  - After installing Dev C++ 5.11, you can compile the scripts by opening them within the IDE, then clicking **Execute > Compile & Run**.
- **Python**: Required for displaying ASCII art using the `pyfiglet` library and running the Python version of the Decibel Calculation script.
  - **Python Installation**:
    - Download and install Python from the official website: [Python.org](https://www.python.org/downloads/)
    - After installation, ensure Python is added to your system's `PATH`. You can verify by running:
      ```bash
      python --version
      ```
    - This should return the Python version installed on your system.

  - **Install `pyfiglet` module**:
    - `pyfiglet` is used for ASCII art in the terminal.
    - Install the module using pip:
      ```bash
      pip install pyfiglet
      ```

### Operating System
- These scripts are designed to run on **Windows** due to the usage of Windows-specific commands like `ipconfig`, `netstat`, and `DEL`.

---

## Usage Instructions

### Compilation Instructions (C++ Scripts)

If you're using **Dev C++ 5.11**:
1. **Install Dev C++ 5.11** from the official website.
2. **Open the script** (`folder_creation.cpp`, `cmd_automation.cpp`, `decibel_calculation.cpp`, or `unit_conversion.cpp`) in Dev C++.
3. **Compile and Run**:
   - Click **Execute > Compile & Run** from the menu or press `F9` to compile and run the script.

Alternatively, for **command-line compilation**:
1. **Ensure a C++ compiler is installed** (e.g., GCC, MinGW, MSVC).
2. **Save each script** as a `.cpp` file (e.g., `folder_creation.cpp`, `cmd_automation.cpp`, `decibel_calculation.cpp`, `unit_conversion.cpp`).
3. **Open a terminal** and navigate to the directory where the `.cpp` files are saved.
4. **Compile the scripts** using the following commands (for GCC):
   ```bash
   g++ -o folder_creation folder_creation.cpp
   g++ -o cmd_automation cmd_automation.cpp
   g++ -o decibel_calculation decibel_calculation.cpp
   g++ -o unit_conversion unit_conversion.cpp
