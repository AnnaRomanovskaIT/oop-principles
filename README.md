# oop-principles
A study repository for Object-Oriented Programming (OOP) principles in C++ covering encapsulation, inheritance, polymorphism, and abstraction with practical examples
____
# Lab1.1:
*Lab1.1* consists of multiple functions performing different operations on an array. 

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

*lab1.2* working with a dynamically allocated 2D array (matrix). 

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

The *lab1.3* program defines a class `sentence` for manipulating strings, focusing on **tokenization, word filtering, and character swapping**.  

### **Functionality**  
- **Tokenizes** a string into words based on delimiters.  
- **Identifies twin words** (words with an even length).  
- **Swaps** the first and last characters of each word.  

### **Key Features**  
- **Uses a vector** to store and manage words efficiently.  
- **Customizable delimiters** allow flexible tokenization.  
- **Filtering mechanism** isolates words with even lengths.  
- **Character swapping** modifies word structures dynamically.  

This class is useful for **text processing, data parsing, and natural language preprocessing tasks.**

<h3>Project Structure Description</h3>

This project is divided into three files to maintain a modular structure:

`lab1.3.cpp` → Contains the main() function.

`mod_lab13.h` → The header file that declares function prototypes.

`Source.cpp` → Implements all the functions declared in the header.
______
# Lab1.4

The *lab1.4* program manages a **list of products** in a shop, enabling users to **input, display, and sort** product information. It uses a **structure (`storage`)** to store details and provides basic operations for handling product data.  

### **Functionality**  
- **Stores product details** such as name, type, quantity, and cost.  
- **Accepts user input** to populate product information.  
- **Displays product details** in a structured format.  
- **Sorts products alphabetically** in descending order.  

### **Key Features**  
- **Simple Data Management:** Uses a structure to store product information.  
- **Alphabetical Sorting:** Organizes products for easy lookup.  
- **User Interaction:** Allows manual entry and display of products.  
- **Structured Output:** Ensures clear and readable product listings.  

This program is useful for **basic inventory management systems, small shop databases, and product listing applications.**

<h3>Project Structure Description</h3>

This project is divided into three files to maintain a modular structure:

`lab1.4.cpp` → Contains the main() function.

`mod_lab14.h` → The header file that declares function prototypes.

`Source.cpp` → Implements all the functions declared in the header.
____
# Lab2.11

The `Product` class in *lab2.11* represents a food item with attributes related to its **weight, energy value, and macronutrient composition** (proteins, fats, and carbohydrates).  

### **Functionality**  
- **Stores product details**, including name and nutritional information.  
- **Supports initialization and modification** of product attributes.  
- **Displays product information** in a structured format.  
- **Calculates total energy value** for multiple products.  

### **Key Features**  
- **Nutritional Tracking:** Stores macronutrient content per 100g.  
- **Energy Calculation:** Allows summing up calorie values for multiple items.  
- **Structured Output:** Provides a clear and formatted way to display data.  
- **Flexible Initialization:** Supports both default and parameterized setups.  

This class is useful for applications related to **food databases, dietary tracking, and nutrition analysis.**

<h3>Project Structure Description</h3>

This project is divided into three files to maintain a modular structure:

`lab2.11.cpp` → Contains the main() function.

`mod_lab21.h` → The header file that declares function prototypes.

`Source.cpp` → Implements all the functions declared in the header.
______
# Lab2.12

The `Person` class in *lab2.12* represents a person's basic details, including their name, profession, address, age, and phone number.  

### **Functionality**  
- Stores and manages **personal details** such as name, profession, and contact information.  
- Provides methods to **set and retrieve** this information.  
- Allows formatted output for easy readability.  

### **Key Features**  
- **Encapsulation:** Private attributes ensure data integrity.  
- **Comprehensive Representation:** Includes multiple attributes to describe a person.  
- **Formatted Display:** Outputs details in a structured format.  
- **Flexibility:** Supports default and parameterized initialization.  

This class serves as a foundational model for managing and displaying personal information efficiently.

<h3>Project Structure Description</h3>

This project is divided into three files to maintain a modular structure:

`lab2.12.cpp` → Contains the main() function.

`Person_class.h` → The header file that declares function prototypes.

`Source.cpp` → Implements all the functions declared in the header.
_____
# Lab2.14

The `paralelepiped` class in *lab2.14* models a rectangular parallelepiped (a 3D box with six rectangular faces) and provides methods for surface area calculations.  

### **Functionality**  
- Represents a 3D shape with three dimensions (length, width, height).  
- Computes the **side surface area** (sum of four lateral faces).  
- Computes the **total surface area** (sum of all six faces).  
- Allows dimensions to be set or modified dynamically.  

### **Key Features**  
- **Dimensional Representation:** Stores three key measurements of the shape.  
- **Side Surface Area Calculation:** Determines the area of the vertical faces.  
- **Total Surface Area Calculation:** Includes both lateral and top-bottom face contributions.  
- **Encapsulation:** Private attributes ensure controlled access and modification.  

This class provides a structured approach to working with rectangular parallelepipeds, enabling accurate surface area calculations.

<h3>Project Structure Description</h3>

This project is divided into three files to maintain a modular structure:

`lab2.14.cpp` → Contains the main() function.

`paralelepiped2_class.h` → The header file that declares function prototypes.

`Source.cpp` → Implements all the functions declared in the header.
____
# Lab2.15

The `quadrangle` class in *lab2.15* represents a geometric quadrilateral and provides methods to compute its perimeter and area.  

### **Functionality**  
- Stores the lengths of four sides of a quadrilateral.  
- Calculates and displays the perimeter by summing all sides.  
- Computes the area using Brahmagupta’s formula for cyclic quadrilaterals.  
- Allows updating of side lengths dynamically.  

### **Key Features**  
- **Side Length Management:** Supports initialization and modification of four sides.  
- **Perimeter Calculation:** Computes the total boundary length.  
- **Area Calculation:** Uses a mathematical formula for precise results.  
- **Structured Approach:** Separates calculations into helper methods for clarity and reusability.  

This class provides an efficient way to represent and work with quadrilaterals in geometric computations.

<h3>Project Structure Description</h3>

This project is divided into three files to maintain a modular structure:

`lab2.15.cpp` → Contains the main() function.

`quadrangle.h` → The header file that declares function prototypes.

`Source.cpp` → Implements all the functions declared in the header.
_____
# Lab2.21

The `Stopwatch` class in *lab2.21* is designed to measure elapsed time with minute-level precision. It leverages the C++ `chrono` library for high-resolution time tracking.  

### **Functionality**  
- Tracks the start time of an event.  
- Measures elapsed time in minutes using a high-precision clock.  
- Can be reset and restarted at any moment.  
- Displays elapsed time in a clean format.  

### **Key Features**  
- **High-Precision Timing:** Uses `std::chrono::high_resolution_clock` for accurate time measurement.  
- **Flexible Duration Handling:** Stores time in minutes using `std::chrono::duration<double, std::ratio<60>>`.  
- **Dynamic Time Tracking:** Can be started, stopped, and restarted.  
- **Clean Console Output:** Clears the screen before displaying updated elapsed time.  

This class provides a structured and efficient way to measure elapsed time with an easy-to-use interface.
<h3>Project Structure Description</h3>

This project is divided into three files to maintain a modular structure:

`lab2.21.cpp` → Contains the main() function.

`lab21.h` → The header file that declares function prototypes.

`Source.cpp` → Implements all the functions declared in the header.
_____
# lab4.4

*lab4.4* defines two classes, Matrix and Matrix1, to work with matrices dynamically. It includes memory allocation, operator overloading, sorting, and array operations. 

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
_____
# Lab5.1

*lab5.1* implements the `spot`, `circle`, and `ellipse` classes to model geometric shapes using coordinate points.

### **Functionality Overview**
1. **`spot` Class (Represents a 2D Point)**
   - Stores `x` and `y` coordinates.
   - Provides methods to access (`getX()`, `getY()`) and print (`print()`) coordinates.
   - Includes default and parameterized constructors.
   - Has a destructor for proper cleanup.

2. **`circle` Class (Represents a Circle)**
   - Uses two `spot` objects: one as the center and another to define the radius.
   - Computes the area using the formula:  
     \[
     \text{area} = \pi \times r^2
     \]
   - Prints the computed area.
   - Implements a destructor.

3. **`ellipse` Class (Represents an Ellipse)**
   - Uses three `spot` objects: one as the center and two others to determine the ellipse’s axes.
   - Computes an approximation of the area using distances from the center.
   - Prints the computed area.
   - Implements a destructor.

### **Key Features**
- **Object-Oriented Design**: Uses encapsulation and inheritance to organize geometric shapes.
- **Mathematical Calculations**: Implements basic distance formulas to determine shape dimensions.
- **Dynamic Memory Management**: Ensures proper resource handling with constructors and destructors.

This setup provides a structured way to work with geometric figures in a 2D coordinate system while allowing for easy extensions and modifications.

<h3>Project Structure Description</h3>

This project is divided into three files to maintain a modular structure:

`lab5.1.cpp` → Contains the main() function.

`lab5.1.h` → The header file that declares function prototypes.

`Source.cpp` → Implements all the functions declared in the header.
