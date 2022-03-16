<div id="header" align="center">
  <h1>
    Libft
  </h1>
  <p>My very first own library</p>
</div>

### Table of contents
- [What is libft?](#what-is-libft)
- [Mandatory part](#mandatory-part)
- [Bonus part](#bonus-part)
- [How to run project](#how-to-run-project)

## What is libft?
This is a project of [school 21][1] [(école 42)][2].

The goal of the project is to create a library `libft.a` consisting of functions from the redone libc functions. These functions have the same prototypes and implement the same behaviors as the originals. They comply with the way they are defined in their `man`. The only difference is their names. They begin with the ’ft_’ prefix. For instance, `strlen` becomes `ft_strlen`.

**It's forbidden to use libc functions except for some.**

## Mandatory part

- Libc functions are redone functions from the libc;
- Additional functions is a set of functions that are either not in the libc,
or that are part of it but in a different form.

|Libc functions | Additional functions |
|:-------------:|:--------------------:|
|ft_isalpha     |ft_substr             |
|ft_isdigit     |ft_strjoin            |
|ft_isalnum     |ft_strtrim            |
|ft_isascii     |ft_split              |
|ft_isprint     |ft_itoa               |
|ft_strlen      |ft_strmapi            |
|ft_memset      |ft_striteri           |
|ft_bzero       |ft_putchar_fd         |
|ft_memcpy      |ft_putstr_fd          |
|ft_memmove     |ft_putendl_fd         |
|ft_strlcpy     |ft_putnbr_fd          |
|ft_strlcat     |ft_isnumber           |
|ft_toupper     |
|ft_tolower     |
|ft_strchr      |
|ft_strrchr     |
|ft_strncmp     |
|ft_memchr      |
|ft_memcmp      |
|ft_strnstr     |
|ft_atoi        |
|ft_calloc      |
|ft_strdup      |

## Bonus part
Contains functions manipulating lists

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
```
git clone https://github.com/cvine21/libft.git
cd libft/
```

2. Run Makefile so you can build the library

- To run mandatory part:
```
make
```
or
```
make all
```
- To run bonus part:
```
make bonus
```

[1]:https://21-school.ru/
[2]:https://42.fr/en/homepage/
