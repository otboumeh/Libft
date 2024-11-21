# Libft - 42 Project

## Project Overview

**Libft** is the first project of the 42 curriculum. It consists of recreating a standard C library by implementing a collection of essential C functions. This project serves as a foundation for future projects, improving understanding of C programming, memory management, and the internal workings of commonly used functions.

---

## Table of Contents
- [Introduction](#introduction)
- [Features](#features)
- [Usage](#usage)
- [Functions Implemented](#functions-implemented)
- [Conclusion](#conclusion)

---

## Introduction

The goal of this project is to build a personal library of functions that replicate the behavior of standard C library functions. Additionally, we include utility functions that extend the standard library's capabilities.

The project is part of the **42 curriculum** and aims to:
- Deepen knowledge of C programming.
- Improve understanding of low-level operations, including memory allocation and manipulation.
- Prepare for more complex projects in the 42 program.

---

## Features

The **Libft** library includes:
- Standard C library functions (e.g., `memset`, `strlen`, `strdup`).
- String manipulation utilities.
- Memory management functions.
- Custom data structure functions (e.g., linked lists).

---

## Usage

### Compilation
To compile the library, simply run the following command in the root directory:
```bash
make
```
This will create a static library file libft.a that you can include in your projects.

---
## Linking
To use Libft in your project, include the libft.h header file and link the compiled library:
```bash
#include "libft.h"
```
Compile your code with the library:

```bash
gcc  my_program my_program.c
```
---
## Functions Implemented

### Part 1 - Libc Functions
These are re-implementations of common libc functions:

- `ft_isalpha` - Check if a character is alphabetic.
- `ft_isdigit` - Check if a character is a digit.
- `ft_isalnum` - Check if a character is alphanumeric.
- `ft_isascii` - Check if a character is part of the ASCII set.
- `ft_isprint` - Check if a character is printable.
- `ft_toupper` - Convert a character to uppercase.
- `ft_tolower` - Convert a character to lowercase.
- `ft_memset` - Fill memory with a constant byte.
- `ft_bzero` - Zero out a block of memory.
- `ft_memcpy` - Copy memory area.
- `ft_memmove` - Copy memory areas, allowing overlap.
- `ft_memchr` - Locate a byte in a memory area.
- `ft_memcmp` - Compare memory areas.
- `ft_strlen` - Calculate the length of a string.
- `ft_strlcpy` - Copy a string into a buffer with size checking.
- `ft_strlcat` - Concatenate strings with size checking.
- `ft_strchr` - Locate the first occurrence of a character in a string.
- `ft_strrchr` - Locate the last occurrence of a character in a string.
- `ft_strncmp` - Compare two strings up to a specified number of characters.
- `ft_strnstr` - Locate a substring within a string.
- `ft_atoi` - Convert a string to an integer.
- `ft_calloc` - Allocate memory and initialize it to zero.
- `ft_strdup` - Duplicate a string.

---

### Part 2 - Additional Functions
Functions that are not part of libc but are frequently useful:

- `ft_substr` - Extract a substring from a string.
- `ft_strjoin` - Concatenate two strings.
- `ft_strtrim` - Remove whitespace from the beginning and end of a string.
- `ft_split` - Split a string into an array of substrings.
- `ft_itoa` - Convert an integer to a string.
- `ft_strmapi` - Apply a function to each character of a string, returning a new string.
- `ft_striteri` - Apply a function to each character of a string in-place.
- `ft_putchar_fd` - Write a character to a file descriptor.
- `ft_putstr_fd` - Write a string to a file descriptor.
- `ft_putendl_fd` - Write a string followed by a newline to a file descriptor.
- `ft_putnbr_fd` - Write an integer to a file descriptor.

---

### Bonus Part - Linked List Functions
For handling linked list operations:

- `ft_lstnew_bonus` - Create a new list element.
- `ft_lstadd_front_bonus` - Add an element at the beginning of a list.
- `ft_lstsize_bonus` - Count the number of elements in a list.
- `ft_lstlast_bonus` - Find the last element of a list.
- `ft_lstadd_back_bonus` - Add an element at the end of a list.
- `ft_lstdelone_bonus` - Delete a single element from a list.
- `ft_lstclear_bonus` - Clear the entire list, freeing memory.
- `ft_lstiter_bonus` - Iterate through a list and apply a function to each element.
- `ft_lstmap_bonus` - Apply a function to each element of a list, creating a new list.

---

## Conclusion

**Libft** is a foundational project in the 42 curriculum, focusing on recreating essential C library functions and providing additional utilities. This library serves as a key stepping stone for future projects, enhancing understanding of C programming, memory management, and algorithm implementation.









