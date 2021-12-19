#include <stddef.h>
#include <stdlib.h>

int my_strlen(const char *str);
char *my_strcpy(char *dest, const char *src);
char *my_strcat(char *dest, const char *append);

void ft_bzero(void *str, int len);

char *ft_strchr(const char *str, int ch);

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isascii(int c);

int ft_toupper(int ch);
int ft_tolower(int ch);

int ft_abs(int i);

//div_t ft_div(int number, int denom);

char *ft_strstr(char *str, char *find);
char *ft_strnstr(const char *str, const char *find, int len);

void *ft_memset(void *dest, int val, size_t len);
char *ft_memcpy(char *dest, const char *src, int len);
int ft_memcmp(const void *str1, const void *str2, int count);

void ft_striter(char *s, void(*f)(char *));
char *ft_strjoin(char const *str1, char const *str2);
char *ft_strtrim(char const *s);
