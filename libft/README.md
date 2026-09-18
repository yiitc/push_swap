*This project has been created as part of the 42 curriculum by caisik*

## Description

Libft is a small static library that re-implements a set of standard C library (libc) functions from scratch, and adds several extra utility functions on top of them. The goal of the project is to build a personal toolbox of reliable, well-tested C functions that can be reused across future 42 projects, while gaining a deeper understanding of how the standard library functions work internally (memory handling, string manipulation, type checking, etc.).

Libft functions are organized into three categories:

- **Libc Functions** — reimplementations of standard C library functions (e.g. `memcpy`, `strlen`, `atoi`, `isalpha`)
- **Additional Functions** — extra helper functions not part of the standard libc (e.g. `ft_split`, `ft_itoa`, `ft_strtrim`)
- **Linked List Functions** — functions to create and manipulate a singly linked list (e.g. `ft_lstnew`, `ft_lstadd_back`, `ft_lstmap`)

## Library Overview

### Libc Functions

| Function | Description |
|---|---|
| `ft_atoi` | Convert a string to an integer |
| `ft_bzero` | Zero a byte string |
| `ft_calloc` | Allocate and zero dynamic memory |
| `ft_isalnum` | Checks for an alphanumeric character |
| `ft_isalpha` | Checks for an alphabetic character |
| `ft_isascii` | Checks whether `c` is a 7-bit unsigned char value that fits into the ASCII character set |
| `ft_isdigit` | Checks for a digit character (0-9) |
| `ft_isprint` | Checks for any printable character, including space |
| `ft_memchr` | Scans the initial `n` bytes of the memory area pointed to by `s` for the first instance of `c` |
| `ft_memcmp` | Compares memory areas |
| `ft_memcpy` | Copies a memory area (overlap is undefined) |
| `ft_memmove` | Copies a memory area, handling overlaps |
| `ft_memset` | Fills memory with a constant byte |
| `ft_strchr` | Locates a character in a string |
| `ft_strdup` | Duplicates a string |
| `ft_strlcat` | Size-bounded string concatenation |
| `ft_strlcpy` | Size-bounded string copying |
| `ft_strlen` | Calculates the length of a string |
| `ft_strncmp` | Compares two strings |
| `ft_strnstr` | Locates a substring in a string |
| `ft_strrchr` | Locates a character in a string, searching from the end |
| `ft_tolower` | Converts an uppercase letter to its lowercase equivalent |
| `ft_toupper` | Converts a lowercase letter to its uppercase equivalent |

### Additional Functions

| Function | Description |
|---|---|
| `ft_itoa` | Allocates memory and returns a string representing the integer received as an argument |
| `ft_putchar_fd` | Outputs the character `c` to the specified file descriptor |
| `ft_putendl_fd` | Outputs the string `s` to the specified file descriptor, followed by a newline |
| `ft_putnbr_fd` | Outputs the integer `n` to the specified file descriptor |
| `ft_putstr_fd` | Outputs the string `s` to the specified file descriptor |
| `ft_split` | Allocates memory and returns an array of strings obtained by splitting `s` using the character `c` as a delimiter |
| `ft_striteri` | Applies the function `f` to each character of the string passed as argument, passing its index as the first argument |
| `ft_strjoin` | Allocates memory and returns a new string, which is the result of concatenating `s1` and `s2` |
| `ft_strmapi` | Applies the function `f` to each character of the string `s`, passing its index as the first argument and the character itself as the second |
| `ft_strtrim` | Allocates memory and returns a copy of `s1` with the characters from `set` removed from the beginning and the end |
| `ft_substr` | Allocates memory and returns a substring from the string `s` |

### Linked List Functions

| Function | Description |
|---|---|
| `ft_lstnew` | Allocates memory and returns a new node. The `content` member is initialized with the given parameter `content`, and `next` is initialized to `NULL` |
| `ft_lstadd_front` | Adds the node `new` at the beginning of the list |
| `ft_lstadd_back` | Adds the node `new` at the end of the list |
| `ft_lstsize` | Counts the number of nodes in the list |
| `ft_lstlast` | Returns the last node of the list |
| `ft_lstdelone` | Takes a node as a parameter and frees its content using the function `del`, then frees the node itself. Does **not** free the next node |
| `ft_lstclear` | Deletes and frees the given node and all its successors, using the function `del` and `free(3)`. Finally, sets the pointer to the list to `NULL` |
| `ft_lstiter` | Iterates through the list `lst` and applies the function `f` to the content of each node |
| `ft_lstmap` | Iterates through the list `lst`, applies the function `f` to each node's content, and creates a new list resulting from the successive applications of `f`. The `del` function is used to delete the content of a node if needed |

## Instructions

All `.c` files are compiled and linked into a static library using `make`.

| Command | Effect |
|---|---|
| `make` / `make all` | Builds the `libft.a` library |
| `make clean` | Removes the `.o` object files |
| `make fclean` | Removes the `.o` object files and the `libft.a` library |
| `make re` | Removes all `.o` object files and `libft.a`, then rebuilds everything from source |

To use Libft in your own project:

1. Include the `libft.h` header file in your source code.
2. Add the directory containing `libft.h` to your include path.
3. Add the directory containing `libft.a` to your library path, and link against `libft`.

```sh
gcc main.c -I/path/to/libft -L/path/to/libft -lft -o main
```

## Resources

- [In 54 Minutes, Understand the Whole C and C++ Compilation Process](https://youtu.be/ksJ9bdSX5Yo) — overview of the preprocessing, compilation, assembly, and linking stages used when building this library.
- Claude was used during development for final bug detection , to help clarify how C structs work while implementing the linked list functions, and to format this README file.
