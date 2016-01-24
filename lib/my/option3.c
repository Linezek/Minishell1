/*
** option3.c for azert in /home/galpin_a/rendu/printf_ptrfct
**
** Made by Antoine Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Thu Nov 12 13:49:37 2015 Antoine Galpin
** Last update Mon Nov 16 16:40:14 2015 Antoine Galpin
*/

#include <stdarg.h>
#include "my.h"

void	printf_c(va_list ap)
{
  my_putchar(va_arg(ap, int));
}

void	printf_u(va_list ap)
{
  my_put_nbrU(va_arg(ap, unsigned int));
}
