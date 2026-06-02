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

AI tools (such as ChatGPT/Claude) were used to:

* Help understand the behavior of `printf` and assignment requirements
* Clarify concepts related to `variadic functions` and related macros, 
* Understand edge cases
* Review implementation approaches and assist with debugging logic
* Assist in writing parts of a test `main` function for testing purposes
* Assist in structuring README file

No main functions were copied directly; all implementations were written manually.

---

## Notes

This project focuses on:

* Recreating the behavior of the standard `printf` function from the C standard library
* Handling variadic functions using `stdarg.h` macros (`va_start`, `va_arg`, `va_end`)
* Parsing format strings and implementing support for multiple format specifiers (char, string, integers, pointers, etc.)
* Managing type conversion, memory safety, and edge cases (e.g., NULL pointers, zero values, INT_MIN)