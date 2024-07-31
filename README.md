Program Name: libft.a

This custom C library includes the following components:

  A Makefile to compile the library.
  A header file libft.h, containing the prototypes for all functions and necessary includes.
  A total of 43 custom C functions that do not call on external functions from C libraries with the exceptions of write(), malloc() and free().
    - 32 custom implementations of Libc C functions that have the same prototypes and behaviours as standard C library functions, but with the prefix ft_.
    - 11 additional functions are additional utilities not found in the standard C library or variations thereof.

32 Libc Functions
  Character Classification and Conversion Functions
    ft_isalpha: Checks if a character is an alphabetic letter.
    ft_isdigit: Checks if a character is a decimal digit.
    ft_isalnum: Checks if a character is alphanumeric (letter or digit).
    ft_isascii: Checks if a character is an ASCII character.
    ft_isprint: Checks if a character is printable, including space.

  String and Memory Functions
    ft_strlen: Computes the length of a string.
    ft_memset: Fills a block of memory with a specified value.
    ft_bzero: Sets a block of memory to zero.
    ft_memcpy: Copies a block of memory from one location to another.
    ft_memmove: Moves a block of memory, handling overlap.
    ft_strlcpy: Copies a string to a destination buffer, ensuring null-termination.
    ft_strlcat: Concatenates a string to a destination buffer, ensuring null-termination.

  Character Conversion Functions
    ft_toupper: Converts a character to uppercase.
    ft_tolower: Converts a character to lowercase.

  String Search and Comparison Functions
    ft_strchr: Locates the first occurrence of a character in a string.
    ft_strrchr: Locates the last occurrence of a character in a string.
    ft_strncmp: Compares two strings up to a specified number of characters.

  Memory Search and Comparison Functions
    ft_memchr: Locates the first occurrence of a byte in a block of memory.
    ft_memcmp: Compares two blocks of memory.

  String Substring and Conversion Functions
    ft_strnstr: Locates a substring in a string, where not more than a specified number of characters are searched.
    ft_atoi: Converts a string to an integer.

  Memory Allocation Functions (using malloc)
    ft_calloc: Allocates memory for an array of elements and initializes it to zero.
    ft_strdup: Duplicates a string, allocating memory for the new string.

  Additional Functions (11 Functions)
    ft_substr: Extracts a substring from a string.
    ft_strjoin: Concatenates two strings into a new string.
    ft_strtrim: Trims leading and trailing characters from a string.
    ft_split: Splits a string into an array of strings based on a delimiter.
    ft_itoa: Converts an integer to a string.
    ft_strmapi: Applies a function to each character of a string, creating a new string.
    ft_striteri: Applies a function to each character of a string, modifying the string in place.
    ft_putchar_fd: Outputs a character to a file descriptor.
    ft_putstr_fd: Outputs a string to a file descriptor.
    ft_putendl_fd: Outputs a string to a file descriptor followed by a newline.
    ft_putnbr_fd: Outputs an integer to a file descriptor
