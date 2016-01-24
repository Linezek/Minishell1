/*
** double_array.c for rtyuio in /home/galpin_a/rendu/PSU/PSU_2015_minishell1
**
** Made by Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Tue Jan 19 03:06:51 2016 Galpin
** Last update Tue Jan 19 09:04:40 2016 Galpin
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "minishell1.h"

char		*double_array(char **array, char **array2, int target)
{
  static int	i;
  t_var		var;

  if (target == 1)
    i = 0;
  var.j = 0;
  var.k = 0;
  var.tmp = malloc(sizeof(char *) * 10);
  if (array[i] != NULL)
    {
      while (array[i][var.j] != 0)
	{
	  var.tmp[var.j] = array[i][var.j];
	  var.j = var.j + 1;
	}
      var.tmp[var.j] = '/';
      while (array2[0][var.k] != 0)
	{
	  var.tmp[var.j + 1] = array2[0][var.k];
	  var.j = var.j + 1;
	  var.k = var.k + 1;
	}
      i = i + 1;
      return (var.tmp);
    }
}
