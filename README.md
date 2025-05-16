# CLI Scripts

A collection of C++ and Python command-line tools for automating common system tasks and calculations. These scripts enable users to manage directories, perform system diagnostics, and calculate decibel values from input voltages.

## Table of Contents

- [Project Overview](#project-overview)
- [Features](#features)
- [Requirements](#requirements)
- [Usage Instructions](#usage-instructions)  
  - [Compilation with Visual Studio](#compilation-with-visual-studio)
  - [Python Setup](#python-setup)
- [License](#license)
- [Troubleshooting](#troubleshooting)

---

## Project Overview

This repository contains several command-line scripts designed to perform the following tasks:

1. **Folder Creation Script** (C++): Automatically creates a specified number of folders in the current directory.
2. **CMD Automation Script** (C++): Provides a set of network-related and system diagnostics commands (e.g., cleaning temp files, displaying network parameters, pinging websites, viewing active connections, and displaying system info).
3. **Decibel Calculation Script** (C++): Calculates decibel (dB) values for a set of voltage readings based on a reference voltage.
4. **Unit Conversion Script** (C++): Calculates multiples and submultiples for various physical units (e.g., meter, kilogram, second, volt, etc.), given an input value.

These scripts integrate with Python for ASCII art in the terminal, providing a visually appealing interface.

---

## Features

### 1. Folder Creation Script (C++)
- Allows users to specify the number of folders to create (`Folder_1`, `Folder_2`, ..., `Folder_n`).
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

#### C++:
- **Visual Studio Community Edition 2022**:
  - Free and supports C++ development with IntelliSense, debugger, and integrated compiler.
  - **Download**: [Visual Studio 2022](https://visualstudio.microsoft.com/vs/community/)
  - During installation, select the **"Desktop development with C++"** workload.

#### Python:
- **Python 3.x**:
  - Required only for ASCII art generation using `pyfiglet`.
  - **Download Python**: [python.org](https://www.python.org/downloads/)
  - After installation, verify with:
    ```bash
    python --version
    ```

- **pyfiglet**:
  - A library for generating ASCII art text in the terminal.
  - Install using:
    ```bash
    pip install pyfiglet
    ```

### Operating System
- These scripts are designed to run on **Windows** due to the usage of Windows-specific commands like `ipconfig`, `netstat`, `DEL`, and others.

---

## Usage Instructions

### Compilation with Visual Studio

1. **Open Visual Studio 2022**.
2. Go to **File > New > Project**.
3. Select **“Console App (C++)”**.
4. Name the project (e.g., `FolderCreator`) and click **Create**.
5. Replace the contents of the `main.cpp` file with the code for the desired script (`folder_creation.cpp`, etc.).
6. Press **Ctrl + F5** or click **Debug > Start Without Debugging** to compile and run the script.

> 🔧 You can also add additional `.cpp` files to the project: right-click on the project > **Add > Existing Item...**

---

### Python Setup

1. **Install Python**: Download from [python.org](https://www.python.org) and select the option *"Add Python to PATH"* during installation.
2. **Verify Installation**:
   ```bash
   python --version
