/*
** option2.c for options2 in /home/galpin_a/rendu/printf_ptrfct
**
** Made by Antoine Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Thu Nov 12 10:56:47 2015 Antoine Galpin
** Last update Mon Nov 16 16:39:24 2015 Antoine Galpin
*/

#include <stdarg.h>
#include "my.h"

void	printf_S(va_list ap)
{
  char	*p;

  p = va_arg(ap, char *);
  if (p == 0)
    my_putstr("(null)");
  else
    my_putstr2(p);
}

void	printf_o(va_list ap)
{
  my_put_octal(va_arg(ap, int));
}

void	printf_b(va_list ap)
{
  binary(va_arg(ap, int));
}

void	printf_p(va_list ap)
{
  int	p;

  p = va_arg(ap, int);
  if (p == 0)
    my_putstr("(nil)");
  else
    {
      my_putstr("0x");
      hexa_min(p);
    }
}

void	printf_P(va_list ap)
{
  my_putchar('%');
}
