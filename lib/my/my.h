/*
** my.h for my.h in /home/galpin_a/rendu/PSU_2015_my_printf/lib/my
**
** Made by Antoine Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Mon Nov  2 15:39:34 2015 Antoine Galpin
** Last update Tue Jan 19 09:02:35 2016 Galpin
*/

#ifndef MY_H_
# define MY_H_
# define READ_SIZE (1)

#include <stdarg.h>

typedef struct	s_func
{
  void (*ptrfunc)(va_list ap);
  char key;
}		t_func;

typedef	struct	s_var
{
  int		a;
  int		b;
  int		i;
}		t_var;

void	my_putchar(char c);
int	my_put_nbr(int nb);
void	my_putnbr_base(int nb, char *base);
int	my_putstr(char *str);
int	my_put_nbrS(int nbr);
int	my_isneg(int n);
int	my_swap(int *a, int *b);
int	my_getnbr(char *str);
char	*my_revstr(char *str);
int	my_showstr(char *str);
int	my_sort_int_tab(int *tab, int size);
int	my_strcmp(char *s1, char *s2);
char	*my_strcpy(char *dest, char *src);
char	*my_strdup(char *str);
char	my_strlen(char *str);
int	my_strncmp(char *s1, char *s2, int n);
char	*my_strncpy(char *dest, char *src, int n);
char	*my_strstr(char *str, char *to_find);
int	my_atoi(const char *str);
int	my_put_octal(int nbr);
int	my_putstr2(char *str);
void	call_flags(const char *format, char d, va_list ap);
int	binary(int nb);
int	my_printf(const char *format, ...);
int	my_put_nbrU(unsigned int nb);
int	hexa_min(int nb);
int	hexa_maj(int nb);
void	manage_octal(char *str);
void	printf_d(va_list ap);
void	printf_i(va_list ap);
void	printf_x(va_list ap);
void	printf_X(va_list ap);
void	printf_u(va_list ap);
void	printf_s(va_list ap);
void	printf_p(va_list ap);
void	printf_S(va_list ap);
void	printf_o(va_list ap);
void	printf_b(va_list ap);
void	printf_P(va_list ap);
void	printf_c(va_list ap);
char	*my_resize(char *dest, char *str);
int	check_end(int rest, char *str);
char	*end1(char *str, char *imput, int rest);
char	*get_next_line(const int fd);

#endif /* !MY_H_ */
