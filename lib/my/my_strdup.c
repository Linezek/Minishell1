/*
** my_strdup.c for my_strdup in /home/faure_j//works/rendu/piscine_rattrapage/Jour_03PM/ex_01
**
** Made by jordan faure
** Login   <faure_j@epitech.net>
**
** Started on  Wed Dec 14 14:31:53 2011 jordan faure
** Last update Mon Nov  2 15:58:35 2015 Antoine Galpin
*/

#include <stdlib.h>

char	*my_strdup(char *str)
{
  char	*s;

  if ((s = malloc(my_strlen(str))) == 0)
    {
      return (0);
    }
  my_strcpy(s, str);
  return (s);
}
