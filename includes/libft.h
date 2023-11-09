#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

/* Opérations sur strings*/
char    *ft_strcpy( char * dst, const char * src);
char    *ft_rev_str_tab(const char *str);
char    **ft_split(char const *s, char c);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_substr(char const *s, unsigned int start,size_t len);


/* Opérations sur char*/
char    ft_tolower(char c);
char    ft_toupper(char c);

/* Allocation mémoire*/
void    *ft_calloc( size_t len, size_t element_size);
void    *ft_memalloc(size_t size);

/* Tests ascii/int*/
int     ft_isalnum(char c);
int     ft_isalpha(char c);
int     ft_isascii(char c);
int     ft_isdigit(char c);
int     ft_isupper(char c);
int     ft_islower(char c);
int     ft_is_negative(int n)

size_t  ft_strlen(const char *str);


/* Opérations sur tableaux*/
void	ft_print_numbers(void);
void	ft_is_negative(int n);
void    ft_sort_integer_table(int *tab, int size);
void	ft_swap(int *a, int *b);
void	ft_rev_int_tab(int *tab, int size);

/* Fonctions map*/
void ft_striteri(char *s, void (*f)(unsigned int,char*));
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));



/* Affichage */
void	ft_putstr(char *str);
void    ft_putchar(char c);
void	ft_print_comb2(void);
void	ft_print_comb(void);
void    ft_print_reverse_alphabet(void);
void	ft_print_numbers(void);
void	ft_print_combn(int len);
char    *ft_itoa(int n);



/* Fonctions mathétmatiques*/
int     ft_power(int nb, int power);

/* Ecriture sur fichier*/
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);


typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;