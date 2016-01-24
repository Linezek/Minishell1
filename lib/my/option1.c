/*
** option1.c for options1 in /home/galpin_a/rendu/copie de PSU_2015_my_printf
**
** Made by Antoine Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Tue Nov 10 15:38:54 2015 Antoine Galpin
** Last update Tue Nov 17 11:56:30 2015 Antoine Galpin
*/

#include <stdarg.h>
#include "my.h"

void	printf_d(va_list ap)
{
  my_put_nbr(va_arg(ap, int));
}

void	printf_i(va_list ap)
{
  my_put_nbr(va_arg(ap, int));
}

void	printf_x(va_list ap)
{
  hexa_min(va_arg(ap, int));
}

void	printf_X(va_list ap)
{
  hexa_maj(va_arg(ap, int));
}

void	printf_s(va_list ap)
{
  char	*p;

  p = va_arg(ap, char *);
  if (p == 0)
    my_putstr("(null)");
  else
    my_putstr(p);
}
