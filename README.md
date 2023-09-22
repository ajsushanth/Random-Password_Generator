# Random Password Generator in C++

## Description
This C++ program generates a random password for the user. The length of the password is decided by the user input.

## Dependencies
- C++ Standard Library
- `<iostream>` for standard I/O operations
- `<cstdlib>` for the random number generator
- `<ctime>` to seed the random number generator
- `<string>` for using string data type

## How to Use
1. Compile the program using a C++ compiler.
   ```bash
   g++ password_generator.cpp -o password_generator
   ```
2. Run the compiled program.
   ```bash
   ./password_generator
   ```
3. When prompted, enter the desired length for the password.

## Code Overview

### `getPassword(int length)` Function
- **Input**: Length of the desired password as an integer.
- **Output**: A randomly generated password string.

### `main()` Function
- Takes the desired password length from the user.
- Calls `getPassword(int length)` to generate a password.
- Outputs the generated password.


## Note
The program uses basic random number generation and should not be considered secure for generating high-security passwords.

## License
This project is open-sourced under the MIT License. Feel free to use and modify the code.
