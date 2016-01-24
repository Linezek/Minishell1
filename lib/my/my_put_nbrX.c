/*
** my_put_nbrX.c for Xx in /home/galpin_a/rendu/PSU_2015_my_printf
**
** Made by Antoine Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Mon Nov  9 13:01:13 2015 Antoine Galpin
** Last update Fri Nov 13 13:37:51 2015 Antoine Galpin
*/

#include "my.h"

int	hexa_min(int nb)
{
  if (nb >= 16)
    hexa_min(nb / 16);
  if (nb % 16 == 10)
    my_putchar('a');
  else if (nb % 16 == 11)
    my_putchar('b');
  else if (nb % 16 == 12)
    my_putchar('c');
  else if (nb % 16 == 13)
    my_putchar('d');
  else if (nb % 16 == 14)
    my_putchar('e');
  else if (nb % 16 == 15)
    my_putchar('f');
  else
    my_putchar(nb % 16 + '0');
}

int	hexa_maj(int nb)
{
  if (nb >= 16)
    hexa_min(nb / 16);
  if (nb % 16 == 10)
    my_putchar('A');
  else if (nb % 16 == 11)
    my_putchar('B');
  else if (nb % 16 == 12)
    my_putchar('C');
  else if (nb % 16 == 13)
    my_putchar('D');
  else if (nb % 16 == 14)
    my_putchar('E');
  else if (nb % 16 == 15)
    my_putchar('F');
  else
    my_putchar(nb % 16 + '0');
}
