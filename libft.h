#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


char  *ft_substr(char const *s, unsigned int start, size_t len);
///
int ft_isalpha(int c);
int ft_isdigit(int d);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_strlen(char *str);
void    *ft_memset(void *buf, int ch, size_t n);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dst, void *src, size_t n);
void    *ft_memmove(void *dst, void *src, size_t n);
size_t  ft_strlcpy(char *dst, char *src, size_t n);
size_t  ft_strlcat(char *dst, char *src, size_t size);
int ft_toupper(int c);
int ft_tolower(int c);
char    *ft_strrchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2);
void    *ft_memchr(const void *s, int c, size_t n);




#endif 