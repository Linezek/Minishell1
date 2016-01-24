/*
** my_put_nbrU.c for putnbrU in /home/galpin_a/rendu/PSU_2015_my_printf
**
** Made by Antoine Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Mon Nov  9 13:17:35 2015 Antoine Galpin
** Last update Mon Nov 16 12:04:58 2015 Antoine Galpin
*/

#include "my.h"

int	my_put_nbrU(unsigned int nb)
{
  int	mod;

  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  if (nb >= 0)
    {
      if (nb >= 10)
	{
	  mod = (nb % 10);
	  nb = (nb - mod) / 10;
	  my_put_nbr(nb);
	  my_putchar(48 + mod);
	}
      else
	my_putchar(48 + nb % 10);
    }
}
