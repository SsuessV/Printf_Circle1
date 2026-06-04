*This project has been created as part of the 42 curriculum by suyoun.*

# ft_Printf

## Description

**ft_printf** is a 42 project in which the standard C printf function is reimplemented  
from scratch.

The **objective** of this project is to recreate formatted output behavior  
by handling format strings and variadic arguments, without using  
the standard library implementation of printf.

It involves working with:

- variadic functions `stdarg.h`
- format string parsing
- type conversion and output handling
- low-level memory and pointer operations

The project deepens understanding of how formatted output works internally in C,  
and how different data types are processed and printed.

This implementation can be reused as a custom formatted output function  
in future projects.

### Project Overview

This project is a custom implementation of the standard C `printf` function.  
It replicates formatted output behavior using variadic functions and manual format parsing.

The implementation of `ft_printf` supports the following format specifiers:
- `%c` – Prints a single character
- `%s` – Prints a string
- `%p` – Prints a pointer address in hexadecimal format
- `%d` – Prints a signed decimal integer
- `%i` – Prints a signed integer
- `%u` – Prints an unsigned decimal integer
- `%x` – Prints a number in lowercase hexadecimal format
- `%X` – Prints a number in uppercase hexadecimal format
- `%%` – Prints a percent sign

The project is structured around:
- parsing the format string
- handling variadic arguments using `stdarg.h`
- dispatching format specifiers to dedicated handler functions
- converting and printing different data types

All functionality is implemented without using the standard `printf`.

---

## Instructions

### Compilation

To compile the project, run:  
`make`  
This will generate static library:  
`libftprintf.a`  
To remove object and dependency files:  
`make clean`  
To remove all generated files:  
`make fclean`  
To recompile everything from scratch:  
`make re`

### Usage

Include the library header in your project:  
`#include "ft_printf.h"`  
Compile your program with the library:  
`cc main.c libftprintf.a`

---

## Resources

### References

* Online references for the C Standard Library (cppreference.com, Cplusplus.com)
* Manual pages
* Harvard CS50 Lectures, YouTube tutorials on variadic functions, 
* Assistance and discussions with 42 students

### AI Usage

AI tools (such as ChatGPT and Claude) were used as learning and review aids during the development of this project.

They were used to:
- Explain the behavior and requirements of the `printf` function.
- Clarify the use of variadic functions and the `stdarg.h` macros.
- Discuss edge cases and expected outputs for different format specifiers.
- Review implementation ideas and assist with debugging.
- Help structure and refine the project documentation (README).

All source code, design decisions, and final implementations were written and validated manually by the author.

---

### Algorithm and Data Structure Choices

The implementation of ft_printf follows a linear parsing algorithm. The format string is traversed character by character from left to right. When a regular character is encountered, it is written directly to the output. When a % character is found, the following character is interpreted as a format specifier and dispatched to the corresponding handler function.

This approach was chosen because it closely mirrors the behavior of the standard printf function while remaining simple, efficient, and easy to maintain. Since each character in the format string is processed exactly once, the time complexity is proportional to the length of the format string, making the algorithm efficient for its intended purpose.

The project does not require complex data structures such as linked lists, trees, or hash tables. Instead, it relies on:

Character arrays (C strings) for storing and parsing format strings.
Variadic argument lists provided by stdarg.h (va_list, va_start, va_arg, and va_end) to access an unknown number of arguments.
Recursive or iterative number conversion functions for printing integers and hexadecimal values.

Separate handler functions are used for each supported format specifier (%c, %s, %p, %d, %i, %u, %x, %X, and %%). This modular design improves readability, simplifies debugging, and allows each conversion type to be implemented independently.

The chosen design prioritizes clarity, maintainability, and compliance with the project requirements while accurately reproducing the behavior of the standard printf function.

---

## Notes

This project focuses on:

* Recreating the behavior of the standard `printf` function from the C standard library
* Handling variadic functions using `stdarg.h` macros (`va_start`, `va_arg`, `va_end`)
* Parsing format strings and implementing support for multiple format specifiers (char, string, integers, pointers, etc.)
* Managing type conversion, memory safety, and edge cases (e.g., NULL pointers, zero values, INT_MIN)