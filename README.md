# Scientific Calculator in C

A robust, menu-driven command-line scientific calculator built using the C programming language. This tool provides a wide range of mathematical functions, from basic arithmetic to trigonometry and unit conversions.

## 🚀 Features

The calculator supports 12 distinct operations:
* **Basic Arithmetic:** Addition, Subtraction, Multiplication, and Division (with zero-check protection).
* **Advanced Math:** Power ($x^y$), Square Root, and Absolute Value.
* **Trigonometry:** Sine, Cosine, and Tangent (accepts input in degrees).
* **Unit Conversion:** Celsius to Fahrenheit and Fahrenheit to Celsius.
* **Continuous Loop:** Perform multiple calculations without restarting the program.

## 🛠️ Built With

* **C Language**
* **Standard Libraries:** `stdio.h`, `math.h`, `stdlib.h`



## 📋 How to Run

1.  **Prerequisites:** Ensure you have a C compiler installed (like `gcc`).
2.  **Clone the Repository:**
    ```bash
    git clone [https://github.com/yourusername/scientific-calculator-c.git](https://github.com/yourusername/scientific-calculator-c.git)
    cd scientific-calculator-c
    ```
3.  **Compile the Code:**
    ```bash
    gcc calculator.c -o calculator -lm
    ```
    *(Note: The `-lm` flag is required to link the math library in Linux/macOS environments.)*
4.  **Execute the Program:**
    ```bash
    ./calculator
    ```

## 🕹️ Usage Example

Upon running the program, you will see a menu. Simply enter the number corresponding to the operation you wish to perform:

```text
    *Welcome To Scientific Calculator*

1. Addition(+).
2. Subtraction(-).
...
7. Sine (degrees).
...
Enter your choice between 1-13:- 7
Enter the Degree :- 90
Result :- 1.000

## ⚠️ Important Notes

- Trigonometry: The program automatically converts degrees to radians using the formula $rad = deg \times (\pi / 180)$ before processing.
- Error Handling: The program includes checks for division by zero and square roots of negative numbers to prevent runtime crashes.


Copyright (c) 2024 [Amarjeet Kumar]

Permission is hereby granted to use, copy, modify, and distribute this software 
for any purpose with or without fee, provided that the above copyright notice 
and this permission notice appear in all copies.

THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
