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








