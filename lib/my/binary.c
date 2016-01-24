/*
** binary.c for zertyui in /home/galpin_a/rendu/PSU_2015_my_printf
**
** Made by Antoine Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Mon Nov 16 11:57:35 2015 Antoine Galpin
** Last update Mon Nov 16 13:32:57 2015 Antoine Galpin
*/

#include "my.h"

int	binary(int nb)
{
  if (nb >= 2)
    binary(nb / 2);
  my_putchar(nb % 2 + '0');
}
