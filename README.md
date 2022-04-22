<div id="header" align="center">
  <h1>
    Libft
  </h1>
  <p>My very first own library</p>
</div>

### Table of contents
- [About libft](#about-libft)
- [Mandatory part](#mandatory-part)
- [Bonus part](#bonus-part)
- [How to run project](#how-to-run-project)

## About libft
This is a project of [school 21][1] [(école 42)][2].

The goal of the project is to create a library `libft.a` consisting of functions from the redone libc functions. These functions have the same prototypes and implement the same behaviors as the originals. They comply with the way they are defined in their `man`. The only difference is their names. They begin with the ’ft_’ prefix. For instance, `strlen` becomes `ft_strlen`.

**It's forbidden to use libc functions except for some.**

## Mandatory part
Mandatory part contains 2 types of functions:
* Libc functions (redone functions from the libc): `ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint, ft_strlen, ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_strlcpy, ft_strlcat, ft_toupper, ft_tolower, ft_strchr, ft_strrchr, ft_strncmp, ft_memchr, ft_memcmp, ft_strnstr, ft_atoi, ft_calloc, ft_substr`.

- Additional functions (set of functions that are either not in the libc,
or that are part of it but in a different form):

|Additional functions|Description of additional functions|
|:------------------:|-----------------------------------|
|ft_substr           |Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.|
|ft_strjoin          |Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.|
|ft_strtrim          |Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.|
|ft_split            |Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must end with a NULL pointer.|
|ft_itoa             |Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.|
|ft_strmapi          |Applies the function ’f’ to each character of the string ’s’, and passing its index as first argument to create a new string (with malloc(3)) resulting from successive applications of ’f’.|
|ft_striteri         |Applies the function ’f’ on each character of the string passed as argument, passing its index as first argument. Each character is passed by address to ’f’ to be modified if necessary.|
|ft_putchar_fd       |Outputs the character ’c’ to the given file descriptor.|
|ft_putstr_fd        |Outputs the string ’s’ to the given file descriptor.|
|ft_putendl_fd       |Outputs the string ’s’ to the given file descriptor followed by a newline.|
|ft_putnbr_fd        |Outputs the integer ’n’ to the given filedescriptor.|
|ft_isnumber         |Tests if the string contains only decimal digit character.|

## Bonus part
Contains functions manipulating lists.

Bonus functions:

- ft_lstnew
- ft_lstadd_front
- ft_lstsize
- ft_lstlast
- ft_lstadd_back
- ft_lstdelone
- ft_lstclear
- ft_lstiter
- ft_lstmap

## How to run project

1. Clone this repo and go to the cloned directoty called `libft`
``` sh
$> git clone https://github.com/cvine21/libft.git
$> cd libft/
```
2. Run Makefile so you can build the library

- To run mandatory part:
``` sh
$> make
```
- To run bonus part:
``` sh
$> make bonus
```

[1]:https://clck.ru/YBUJq
[2]:https://42.fr/en/homepage/
