/*
** my_str_to_wordtab.c for tyuiop in /home/galpin_a/rendu/PSU/PSU_2015_minishell1
**
** Made by Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Tue Jan 19 02:40:33 2016 Galpin
** Last update Thu Jan 21 02:25:55 2016 Galpin
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "minishell1.h"

int		find_number_of_words(char *str)
{
  int		i;
  int		nb;

  i = 0;
  nb = 0;
  if (str == NULL)
    return (-1);
  while (str[i] != '\0')
    {
      if ((str[i] > 47 && str[i] <= 57) || (str[i] >= 65 && str[i] <= 90)
          || (str[i] >= 97 && str[i] <= 122))
	{
	  while ((str[i] > 47 && str[i] <= 57) || (str[i] >= 65 && str[i] <= 90)
                 || (str[i] >= 97 && str[i] <= 122))
	    i = i + 1;
	  nb = nb + 1;
	}
      i = i + 1;
    }
  return (nb);
}

char		**my_str_to_wordtab(char *str)
{
  int		i;
  t_wordtab	wordtab_1;

  i = 0;
  wordtab_1.k = 0;
  wordtab_1.nb = find_number_of_words(str);
  wordtab_1.tab = malloc(sizeof(char *) * wordtab_1.nb + 1);
  while (str[i] != '\0')
    {
      wordtab_1.tab[wordtab_1.k] = malloc(sizeof(char) * my_strlen(str));
      while ((str[i] < 47 && str[i] >= 32) || (str[i] <= '@' && str[i]
      >= ':' ) || (str[i] <= '`' && str[i] >= '[') || (str[i] <= 127 && str[i] >= '{'))
	i = i + 1;
      wordtab_1.j = 0;
      while ((str[i] >= 47 && str[i] <= 57) || (str[i] >= 65 && str[i] <= 90)
             || (str[i] >= 97 && str[i] <= 122))
	{
	  wordtab_1.tab[wordtab_1.k][wordtab_1.j] = str[i];
	  i = i + 1;
	  wordtab_1.j = wordtab_1.j + 1;
	}
      wordtab_1.k = wordtab_1.k + 1;
    }
  wordtab_1.tab[wordtab_1.k] = NULL;
  return (wordtab_1.tab);
}
