#ifndef LIBFT_H
# define LIBFT_H

/* =============================================
[] memset
[] bzero
[] memcpy
[] memccpy
[] memmove
[] memchr
[] memcmp
[] strlen
[] strdup
[] strcpy
[] strncpy
[] strcat
[] strncat
[] strlcat
[] strchr
[] strrchr
[] strstr
[] strnstr
[] strcmp
[] strncmp
[] atoi
[-] isalpha
[-] isdigit
[] isalnum
[] isascii
[] isprint
[] toupper
[] tolower
============================================= */

/* =============================================
[] ft_memalloc
[] ft_memdel
[] ft_strnew
[] ft_strdel
[] ft_strcrl
[] ft_striter
[] ft_striteri
[] ft_strmap
[] ft_strmapi
[] ft_strequ
[] ft_strnequ
[] ft_strsub
[] ft_strjoin
[] ft_strtrim
[] ft_strsplit
[] ft_itoa
[-] ft_putchar
[-] ft_putstr
[-] ft_putendl
[] ft_putnbr
[] ft_putchar_fd
[] ft_putstr_fd
[] ft_putendl_fd
[] ft_putnbr_fd
============================================= */

int   ft_isdigit(int c);
int   ft_isalpha(int c);
int   ft_isalnum(int c);
void  ft_putchar(char c);
void  ft_putstr(char const *s);
void  ft_putendl(char const *s);
void  ft_putchar_fd(char c, int fd);

#endif