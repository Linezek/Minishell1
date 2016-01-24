/*
** my_show_wordtab.c for edrtyuiop in /home/galpin_a/rendu/PSU/PSU_2015_minishell1
**
** Made by Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Tue Jan 19 02:35:10 2016 Galpin
** Last update Tue Jan 19 03:08:04 2016 Galpin
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "minishell1.h"

int		find_number_of_words2(char *str)
{
  int		i;
  int		nb;

  i = 0;
  nb = 0;
  while (str[i] != '\0')
    {
      if ((str[i] >= 47 && str[i] <= 57) || (str[i] >= 65 && str[i] <= 90)
          || (str[i] >= 97 && str[i] <= 122))
	{
	  while ((str[i] >= 47 && str[i] <= 57) || (str[i] >= 65 && str[i] <= 90)
		 || (str[i] >= 97 && str[i] <= 122))
	    i = i + 1;
	  nb = nb + 1;
	}
      i = i + 1;
    }
  return (nb);
}

char		**my_str_to_wordtab2(char *str)
{
  t_wordtab2	wordtab2;
  int		i;

  i = 0;
  wordtab2.k = 0;
  wordtab2.nb = find_number_of_words2(str);
  wordtab2.tab = malloc(sizeof(char *) * wordtab2.nb + 1);
  while (str[i] != '\0')
    {
      wordtab2.tab[wordtab2.k] = malloc(sizeof(char) * my_strlen(str));
      while ((str[i] < 45 && str[i] >= 32) || (str[i] <= '@' && str[i] >=
':' ) || (str[i] <= '`' && str[i] >= '[') || (str[i] <= 127 && str[i] >= '{'))
	i = i + 1;
      wordtab2.j = 0;
      while ((str[i] >= 45 && str[i] <= 57) || (str[i] >= 65 && str[i] <= 90)
             || (str[i] >= 97 && str[i] <= 122))
	{
	  wordtab2.tab[wordtab2.k][wordtab2.j] = str[i];
	  i = i + 1;
	  wordtab2.j = wordtab2.j + 1;
	}
      wordtab2.k = wordtab2.k + 1;
    }
  wordtab2.tab[wordtab2.k] = NULL;
  return (wordtab2.tab);
}
