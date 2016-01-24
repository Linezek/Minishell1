/*
** get_next_line.c for ertyui in /home/galpin_a/rendu/CPE/CPE_2015_getnextline
**
** Made by Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Sat Jan  9 19:28:15 2016 Galpin
** Last update Mon Jan 11 15:40:25 2016 Galpin
*/

#include <stdlib.h>
#include <fcntl.h>
#include "my.h"

static	char	buffer[READ_SIZE];
static	int	end = 0;

char		*my_resize(char *dest, char *str)
{
  int		i;
  char		*tmp;
  int		j;

  j = 0;
  tmp = malloc(my_strlen(dest) * READ_SIZE);
  if (tmp == NULL)
    return (NULL);
  i = 0;
  while (dest[i] != '\0')
    {
      tmp[i] = dest[i];
      i = i + 1;
    }
  while (str[j] != '\0' && str != NULL)
    {
      tmp[i] = str[j];
      i = i + 1;
      j = j + 1;
    }
  tmp[i] = '\0';
  return (tmp);
}

int		check_end(int rest, char *str)
{
  int		i;
  int		j;

  j = 0;
  i = 0;
  if (rest == 0)
    return (1);
  while (str[i] != '\0')
    {
      if (str[i] == '\n')
	{
	  i = i + 1;
	  while (str[i] != '\0')
	    {
	      buffer[j] = str[i];
	      i = i + 1;
	      j = j + 1;
	    }
	  buffer[j] = '\0';
	  return (1);
	}
      i = i + 1;
    }
  return (0);
}

char		*end1(char *str, char *imput, int rest)
{
  int		i;

  i = 0;
  if (rest == 0)
    {
      end = 1;
      return (imput);
    }
  while (imput[i] != '\n')
    i = i + 1;
  imput[i] = '\0';
  return (imput);
}

char		*get_next_line(const int fd)
{
  char	*str;
  int	rest;
  char	*imput;

  if (end == 1)
    return (NULL);
  str = malloc(sizeof(char) * READ_SIZE);
  imput = malloc(sizeof(char) * READ_SIZE);
  if (imput == NULL || str == NULL)
    return ("erreur malloc");
  str = buffer;
  imput = my_resize(imput, str);
  while (42)
    {
      if ((rest = read(fd, str, READ_SIZE)) == -1)
	return (NULL);
      str[rest] = '\0';
      imput = my_resize(imput, str);
      if (check_end(rest, str) == 1)
	return (end1(str, imput, rest));
    }
  free(str);
  free(imput);
}
