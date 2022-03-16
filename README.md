<div id="header" align="center">
  <h1>
    Libft
  </h1>
  <p>My very first own library</p>
</div>

### What is libft?
This is a project of school 21 (école 42).

The purpose of this project is redo a set of functions from the libc. These functions have the same prototypes and implement the same behaviors as the originals. They comply with the way they are defined in their man. The only difference is their names. They begin with the ’ft_’ prefix. For instance, strlen becomes ft_strlen.\

**It's forbidden to use libc functions except for some.**

### Mandatory part
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

- Libc functions are redone functions from the libc;
- Additional functions is a set of functions that are either not in the libc,
or that are part of it but in a different form.
