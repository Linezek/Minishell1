/*
** my_printfd.c for printfd in /home/galpin_a/rendu/copie de PSU_2015_my_printf
**
** Made by Antoine Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Sun Nov  8 11:22:29 2015 Antoine Galpin
** Last update Tue Nov 24 18:20:50 2015 Galpin
*/

#include <stdarg.h>
#include <stdio.h>
#include "my.h"

static t_func g_tab[] =
  {
    {&printf_d, 'd'},
    {&printf_i, 'i'},
    {&printf_c, 'c'},
    {&printf_x, 'x'},
    {&printf_X, 'X'},
    {&printf_S, 'S'},
    {&printf_s, 's'},
    {&printf_o, 'o'},
    {&printf_b, 'b'},
    {&printf_p, 'p'},
    {&printf_u, 'u'},
    {&printf_P, '%'},
  };

void	call_flags(const char *format, char d, va_list ap)
{
  int	i;
  int	nb;

  i = 0;
  nb = 0;
  while (g_tab[i].key != '\0')
    {
      if (g_tab[i].key == d)
	{
	  g_tab[i].ptrfunc(ap);
	  nb = 1;
	}
      i = i + 1;
    }
  if (nb == 0)
    {
      my_putchar('%');
      my_putchar(d);
    }
}

int	my_printf(const char *format, ...)
{
  va_list ap;
  int	t;

  t = 0;
  va_start(ap, format);
  if (format == 0)
    return (-1);
  while (format[t] != '\0')
    {
      if (format[t] == '%')
	{
	  t = t + 1;
	  call_flags(format, format[t], ap);
	}
      else
	{
	  my_putchar(format[t]);
	}
      t = t + 1;
    }
  va_end(ap);
}
