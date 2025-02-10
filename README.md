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

<h3>Project Structure Description</h3>

This project is divided into three files to maintain a modular structure:

`lab1.3.cpp` → Contains the main() function.

`mod_lab13.h` → The header file that declares function prototypes.

`Source.cpp` → Implements all the functions declared in the header.
______
# Lab1.4

`lab1.4` manages a list of products in a shop, allowing users to input product details, print the information, and sort the products alphabetically by name. 

The program uses a structure (`storage`) to store product information and provides functions for input, output, and sorting.

<h3>storage Structure</h3>

The skald structure holds information about a product, including:

- name: The name of the product.

- type: The type/category of the product.

- quantity: The quantity of the product in stock.

- cost: The cost of the product.

It also includes the following member functions:

`input()`: Prompts the user to input the product details and stores them in the respective fields of the skald structure.

`print()`: Prints the details of the product in a formatted way.

`set_get()`: Function is used to input and print the information for all products in the shop.

`sort()`: Sorts the products in the shop array based on their names in descending order (alphabetically).

<h3>Project Structure Description</h3>

This project is divided into three files to maintain a modular structure:

`lab1.4.cpp` → Contains the main() function.

`mod_lab14.h` → The header file that declares function prototypes.

`Source.cpp` → Implements all the functions declared in the header.
____
# Lab2.11

`lab2.11` defines a `Product class` that represents a food product with attributes such as name, weight, energy value, and macronutrient content. The class provides functionalities to initialize, modify, display, and sum up the energy values of multiple products.

<h3>Class Structure</h3>

Attributes:

- m_name: Product name.
- m_weight: Weight of the product.
- m_energy: Energy content (calories).
- m_bilok: Protein content per 100g.
- m_jyry: Fat content per 100g.
- m_wuglewody: Carbohydrate content per 100g.
  
Methods:

`Product()`; → Default constructor.

`Product(...)` → Parameterized constructor.

`setAll(...)` → Sets all attributes.

`print()`; → Displays product details.

`energy_summar(Product* a, int n)`; → Computes the sum of energy values for an array of Product objects.

<h3>Project Structure Description</h3>

This project is divided into three files to maintain a modular structure:

`lab2.11.cpp` → Contains the main() function.

`mod_lab21.h` → The header file that declares function prototypes.

`Source.cpp` → Implements all the functions declared in the header.
______
# Lab2.12

`lab2.12` defines a `Person class` that models a person’s basic details such as name, profession, address, age, and phone number.

<h3>Class Structure</h3>

Private Data Members:

- m_lastName → Stores the person’s last name.
- m_profession → Stores their profession.
- m_address → Stores their address.
- m_phone → Stores their phone number (as a string to preserve leading zeros).
- m_age → Stores their age.

Public Member Functions:

`Person()` → Default constructor initializes attributes with default values.

`Person(string lastName, string profession, string address, int age, string phone)` → Parameterized constructor to initialize all attributes.

`void setAll(string lastName, string profession, string address, int age, string phone)` → Setter function to assign values.

`void print() const` → Prints the person's information in a formatted table.

<h3>Project Structure Description</h3>

This project is divided into three files to maintain a modular structure:

`lab2.12.cpp` → Contains the main() function.

`Person_class.h` → The header file that declares function prototypes.

`Source.cpp` → Implements all the functions declared in the header.
_____
# Lab2.14

`lab2.14` defines a `paralelepiped class`, which represents a rectangular parallelepiped (a 3D box with six rectangular faces). It calculates:

Side surface area (Sb) → Sum of the areas of the four lateral faces.

Total surface area (Spp) → Sum of the areas of all six faces.

<h3>Class Structure</h3> 

Private attributes: `m_a`, `m_b`, `m_c` → The three dimensions of the parallelepiped.

Public methods:

`paralelepiped()` → Default constructor.

`paralelepiped(int a, int b, int c)` → Parameterized constructor.

`void setAll(int a, int b, int c)` → Sets all dimensions.

`void Sb()` → Prints the side surface area.

`int getSb()` → Calculates the side surface area.

`void Spp()` → Prints the total surface area.

`int getSpp()` → Calculates the total surface area.

<h3>Project Structure Description</h3>

This project is divided into three files to maintain a modular structure:

`lab2.14.cpp` → Contains the main() function.

`paralelepiped2_class.h` → The header file that declares function prototypes.

`Source.cpp` → Implements all the functions declared in the header.
____
#Lab2.15

`lab2.15` defines a `class quadrangle` that represents a geometric quadrilateral. The class includes methods to calculate and display the perimeter and area of the quadrangle. Let's break down the code:

<h3>Class Definition</h3>

Member Variables:
`m_a`, `m_b`, `m_c`, `m_d`: These are the four sides of the quadrangle.

Constructors:

The default constructor initializes an empty quadrangle (no sides set).

The parameterized constructor initializes a quadrangle with given side lengths a, b, c, and d.

Methods:

`setAll(double a, double b, double c, double d)` This method sets the four sides of the quadrangle.

`perimeter()` This method calculates and outputs the perimeter of the quadrangle. It calls the helper method getPerimeter() to do the actual calculation.

`getPerimeter()` This method calculates the perimeter by adding up the lengths of all four sides.

`Area()` This method calculates and outputs the area of the quadrangle. It calls the helper method getArea() for the calculation.

`getArea()` This method uses Brahmagupta's formula for the area of a cyclic quadrilateral (a quadrangle that can be inscribed in a circle). It first calculates the semi-perimeter (s) and then uses it to calculate the area (S).

<h3>Project Structure Description</h3>

This project is divided into three files to maintain a modular structure:

`lab2.15.cpp` → Contains the main() function.

`quadrangle.h` → The header file that declares function prototypes.

`Source.cpp` → Implements all the functions declared in the header.
_____
#Lab2.21

`lab2.21` defines a `Stopwatch class` that is used to measure elapsed time in seconds (with minute-level precision). It utilizes the C++ chrono library for high-resolution time measurement.

<h3>Class Definition</h3>

Member Variables:

`m_beg`: A time point representing the moment when the stopwatch was started. This variable is of type std::chrono::time_point, which records the current time when the stopwatch is started or reset.

`clock_t`: This alias refers to std::chrono::high_resolution_clock, which is used for high-precision timing.

`second_t`: This alias represents the duration of time in minutes. The std::chrono::duration is parameterized with double and a ratio of 60, so the time is recorded in minutes. 

Methods:

`Stopwatch()` The default constructor initializes the stopwatch by setting m_beg to the current time point when the object is created.

`start()` This method resets the stopwatch by updating m_beg to the current time again. This allows the stopwatch to be started or restarted.

`show()` This method calculates and displays the elapsed time in minutes (since second_t is using std::ratio<60>). It does this by subtracting m_beg from the current time and then displaying the result in minutes. The console is cleared with system("cls") before displaying the time, providing a clean output every time the method is called.

`stop()` This method returns the elapsed time in minutes since the stopwatch was last started (or created if start() hasn't been called).

<h3>Project Structure Description</h3>

This project is divided into three files to maintain a modular structure:

`lab2.21.cpp` → Contains the main() function.

`lab21.h` → The header file that declares function prototypes.

`Source.cpp` → Implements all the functions declared in the header.
_____
# lab4.4

`lab4.4` defines two classes, Matrix and Matrix1, to work with matrices dynamically. It includes memory allocation, operator overloading, sorting, and array operations. 

### **Matrix Class**
- Creating a 2D array (dynamic allocation)
- Initializing it with random values
- Printing the matrix
- Overloading the + operator for matrix addition
  
### **Matrix1 Class**
- Works with the `Matrix` class.
- Stores the maximum value from each row of a matrix.
- Provides functionality for sorting rows based on their maximum values.

### **Features**
- **Matrix Addition**: Two matrices can be added element-wise using overloaded `+` operator.
- **Row Maximum Calculation**: The `Matrix1` class calculates and stores the maximum element of each row from a given matrix.
- **Sorting**: Rows are sorted based on the maximum element of each row.
- **Memory Management**: The program ensures proper memory allocation and deallocation to prevent memory leaks.

### **Main Function**
- Creates two matrices, performs matrix addition, and sorts matrix rows based on maximum elements. It prints the results for the user to see.

<h3>Project Structure Description</h3>

This project is divided into three files to maintain a modular structure:

`lab4.4.cpp` → Contains the main() function.

`lab4.h` → The header file that declares function prototypes.

`Source.cpp` → Implements all the functions declared in the header.
