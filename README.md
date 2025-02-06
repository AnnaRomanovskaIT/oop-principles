# oop-principles
A study repository for Object-Oriented Programming (OOP) principles in C++ covering encapsulation, inheritance, polymorphism, and abstraction with practical examples
____
# Lab1.1:
`Lab1.1` consists of multiple functions performing different operations on an array. 

It includes:

- Creating an array with random values.
- Printing the array to display its contents.
- Finding the maximum element in the array.
- Computing the sum of elements before the last negative number.
- Modifying the array by replacing elements in a given range with zero and rearranging it.

<h3>Project Structure Description</h3>

This project is divided into three files to maintain a modular structure:

`lab1.1.cpp` → Contains the main() function.

`mod_lab11.h` → The header file that declares function prototypes.

`func1.1.cpp` → Implements all the functions declared in the header.
_____
# Lab1.2

`lab1.2` working with a dynamically allocated 2D array (matrix). 

The main operations include:

- Matrix Creation with random values.
- Summing positive values in each column and storing these sums in a new array.
- Finding the minimum sum of absolute values along the diagonals of the matrix.

<h3>Project Structure Description</h3>

This project is divided into three files to maintain a modular structure:

`lab1.2.cpp` → Contains the main() function.

`mod_lab12.h` → The header file that declares function prototypes.

`Source.cpp` → Implements all the functions declared in the header.
______
# Lab1.3

`Lab1.3` involves a C++ `class sentence` that is used to manipulate strings based on certain conditions. 

The class contains methods to:

- Tokenize a string into words using specified delimiters.
- Find twin words (words with an even length).
- Swap characters in the words (swap the first and last character).

<h3>Class Definition</h3>

The `sentence class` has a vector of strings called main, which stores the words from a given input string. The class has the following methods:

Constructor `sentence()`: Initializes an empty sentence object.

Parameterized Constructor `sentence(string s, string symb, string ano_symb)`: Takes an input string and two delimiter strings. It tokenizes the input string by removing occurrences of a specified symbol (ano_symb) and splitting the string based on the other symbol (symb).

`print()`: Prints all the words stored in the main vector.

`twin()`: Returns a vector of strings containing only the words with an even number of characters.

`swap()`: Swaps the first and last character of each word stored in main and returns the modified vector of words.

Project Structure the same as previous one.
