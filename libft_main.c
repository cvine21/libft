// int main(void)
// {
// 	char	*str = "2147483649";
// 	printf("%d\n", atoi(str));
// 	printf("%d\n", ft_atoi(str));
// }

// int main(void)
// {
// 	char	b[] = "TO_SET hello hello";

// 	ft_bzero(b, 6);
// 	printf("%s", b);
// 	return (0);
// }

// int main(void)
// {
// 	char *str;

// 	str = ft_calloc(5, sizeof(char));
// 	printf("%s", str);
// 	free(str);
// 	return (0);
// }

// int main(void)
// {
// 	printf("%d", ft_isalnum('1'));
// 	return (0);
// }

// int main(void)
// {
// 	printf("%d", ft_isalpha('S'));
// 	return (0);
// }

// int main(void)
// {
// 	printf("%d", ft_isascii('n'));
// 	return (0);
// }

// int main(void)
// {
// 	printf("%d", ft_isdigit(0));
// 	return (0);
// }

// int	main(void)
// {
// 	printf("%d", ft_isprint('n'));
// 	return (0);
// }

// int main(void)
// {
// 	int	n;

// 	n = 10;
// 	printf("%d ", ft_nlen(n));
// 	printf("%s", ft_itoa(n));
// 	return (0);
// }

// int main(void)
// {
// 	t_list	*lst;
// 	t_list	el1;
// 	t_list	el2;
// 	t_list	last;
// 	char	content[] = "You found me!";	
// 	lst = &el1;
// 	el1.next = &el2;
// 	el2.next = &last;
// 	last.next = NULL;
// 	last.content = content;
// 	printf("%p\n", last.content);
// 	printf("%p\n", ft_lstlast(lst)->content);
// 	return (0);
// }

// int main(void)
// {
// 	t_list	*lst;
// 	t_list	el1;
// 	t_list	el2;
// 	t_list	el3;

// 	lst = &el1;
// 	el1.next = &el2;
// 	el2.next = &el3;
// 	el3.next = NULL;

// 	printf("%d\n", ft_lstsize(lst));
// 	return (0);
// }

// int main(void)
// {
// 	const char	s[] = "";
// 	int 		c;
// 	size_t		n;

// 	c = '\0';
// 	n = 9;
// 	printf("%s", memchr(s, c, n));
// 	return (0);
// }

// int	main()
// {
// 	const unsigned char	s1[] = "hello";
// 	const unsigned char	s2[] = "hello";
// 	size_t		n;

//     n = 6;
// 	printf("%d\n", ft_memcmp(s1, s2, n));
// 	printf("%d\n", memcmp(s1, s2, n));
// }

// int main(void)
// {
// 	// char	src[] = "123456";
// 	// char	dst[] = "987654321";

// 	printf("%s", ft_memcpy(NULL, NULL, 5));
// 	return (0);
// }

// int main(void)
// {
// 	char	src[] = "123456";
// 	// char	dst[] = "9876543210";

// 	printf("%s\n", ft_memmove(src, src+3, 5));
// 	return (0);
// }

// int main(void)
// {
// 	char	b[] = "TO_SET hello hello";

// 	ft_memset(b, 65, 6);
// 	printf("%s", b);
// 	return (0);
// }

// int main(void)
// {
// 	ft_putnbr_fd(-2147483648LL, 2);
// 	return (0);
// }

// int main(void)
// {
// 	char	**split;
// 	char	*s = "lorem ipsum dolor sit amet";
// 	char	c;

// 	c = ' ';
// 	split = ft_split(s, c);
// 	while (*split)
// 	{
// 		printf("%s\n", *split);
// 		split++;
// 	}
// 	return (0);
// }

// int main(void)
// {
// 	const char s[] = "hello";
// 	int c;
// 	c = '\0';
// 	printf("%s", ft_strchr(s, c));
// 	return (0);
// }

// int main(void)
// {
// 	char		src[] = "Hello";
// 	const char	*cpy;

// 	cpy = ft_strdup(src);
// 	printf("%s", cpy);
// 	free((void *)cpy);
// 	return (0);
// }



// void	ft_toup(unsigned int i, char *c)
// {
// 	if (i > 10 || !c)
// 		write(1, "wrong index\n", 12);
// 	if (97 <= *c && *c <= 122)
// 		*c -= 32;
// }
// int main(void)
// {
// 	char str[] = "hello";
// 	// char	*str = NULL;

// 	ft_striteri(str, ft_toup);
// 	printf("%s", str);
// 	return (0);
// }

// int main(void)
// {
// 	char const s1[] = "hello ";
// 	char const s2[] = "world";

// 	printf("%s", ft_strjoin(s1, s2));
// 	return (0);
// }

// int main(void)
// {
// 	size_t	dstsize = 6;
// 	char	src[] = "12345";
// 	char	dst[10]  = "1234";

// 	printf("%zu\n", ft_strlcat(dst, src, dstsize));
// 	// printf("%zu\n", strlcat(dst, src, dstsize));
// 	printf("%s\n", dst);
// }

// int main()
// {
// 	size_t		dstsize = 6;
// 	const char	src[] = "hello";
// 	char		dst[6];

// 	printf("%zu\n", ft_strlcpy(dst, src, dstsize));
// 	printf("%s", dst);
// 	return (0);
// }

// int main()
// {
// 	char	c[] = "hello";
// 	printf("%zu", ft_strlen(c));
// 	return (0);
// }


// char	ft_toup(unsigned int i, char c)
// {
// 	if (i > 10 || !c)
// 		write(1, "wrong index\n", 12);
// 	if (97 <= c && c <= 122)
// 		c -= 32;
// 	return (c);
// }
// int main(void)
// {
// 	// char str[] = "hello";
// 	char	*str = NULL;

// 	printf("%s", ft_strmapi(str, ft_toup));
// 	return (0);
// }



// int	main(void)
// {
// 	const char	s1[] = "12";
// 	const char	s2[] = "125";
// 	size_t		n;

//     n = 10;
// 	printf("%d\n", ft_strncmp(s1, s2, n));
// 	printf("%d\n", strncmp(s1, s2, n));
// }

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	const char *haystack = "aaabcabcd";
// 	const char *needle = "bca";

// 	printf("%s\n", ft_strnstr(haystack, needle, -1));
// 	printf("%s\n", strnstr(haystack, needle, -1));
// 	return (0);
// }

// int main(void)
// {
// 	const char s[] = "hello";
// 	int c;

// 	c = 'r';
// 	printf("%s", ft_strrchr(s, c));
// 	return (0);
// }

// int main(void)
// {
// 	char const	s1[] = "\n\n\n";
// 	char const	set[] = " \t\n";

// 	printf("%s", ft_strtrim(s1, set));
// 	return (0);
// }

// int	main(void)
// {
// 	char			s[] = "abcdef";
// 	unsigned int	start;
// 	size_t			len;

// 	start = 1;
// 	len = 3;
// 	printf("%s\n", ft_substr(s, start, len));
// 	return (0);
// }

// int main()
// {
// 	unsigned char	c;

// 	c = 66;
// 	printf("%d", ft_tolower(c));
// 	return (0);
// }

// int main()
// {
// 	unsigned char	c;

// 	c = 120;
// 	printf("%d", ft_toupper(c));
// 	return (0);
// }