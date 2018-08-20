#include <string.h>

#ifndef LIBFT_H
# define LIBFT_H

/* =============================================
[-] memset
[-] bzero
[-] memcpy
[] memccpy
[] memmove
[] memchr
[] memcmp
[-] strlen
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
[-] isalnum
[-] isascii
[-] isprint
[-] toupper
[-] tolower
============================================= */

/* =============================================
[-] ft_memalloc
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
[-] ft_putnbr
[-] ft_putchar_fd
[-] ft_putstr_fd
[-] ft_putendl_fd
[] ft_putnbr_fd
============================================= */

// Personal Functions
/* =============================================
ft_num_len
============================================= */

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void    *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen(const char *s);
char    *ft_strdup(const char *s1);
char    *ft_strcpy(char *dst, const char *src);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isprint(int c);
int		ft_isupper(int c);
int		ft_islower(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmap(char const *s, char (*f)(char));
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int     ft_strequ(char const *s1, char const *s2);
int     ft_strnequ(char const *s1, char const *s2, size_t n);
char    *ft_strsub(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s);
char    *ft_strsplit(char const *s, char c);
char    *ft_itoa(int n);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void    ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void  ft_putnbr_fd(int n, int fd);

int		ft_num_len(int n);
int     ft_iswhitespace(char c);


#endif
