/*
** get_next_line.c for tyuiop in /home/galpin_a/rendu/PSU/PSU_2015_minishell1
**
** Made by Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Tue Jan 19 03:03:11 2016 Galpin
** Last update Wed Jan 20 19:55:13 2016 Galpin
*/

#include <stdlib.h>
#include <unistd.h>
#include "minishell1.h"

char		*my_alloc(char *imput, int b)
{
  int		a;
  char		*line;

  a = 0;
  if (b == 0 && ((imput = malloc(READ_SIZE + 1)) == NULL))
    return (NULL);
  if (b == 0)
    return (imput);
  if ((line = malloc(b + READ_SIZE + 1)) == NULL)
    return (NULL);
  while (a <= b)
    {
      line[a] = imput[a];
      a = a + 1;
    }
  line[a] = '\0';
  free(imput);
  return (line);
}

char		*check_end(char *imput, int b)
{
  static int	rest;

  if (b == 0)
    {
      my_putchar('\n');
      exit(EXIT_SUCCESS);
    }
  if (rest == 0)
    {
      rest = 1;
      return (imput);
    }
  else
    return (NULL);
}

char		*get_next_line(const int fd)
{
  static int	a;
  static char	buffer[READ_SIZE];
  static int	b;
  static int	end;
  static char	*imput;

  if (a == '\0' && (end = read(fd, buffer, READ_SIZE)) < 1)
    return (check_end(imput, b));
  if ((imput = my_alloc(imput, b)) == NULL)
    return (NULL);
  while (a < end)
    {
      if (buffer[a] == '\n')
	{
	  a = a + 1;
	  imput[b] = '\0';
	  b = 0;
	  return (imput);
	}
      imput[b] = buffer[a];
      a = a + 1;
      b = b + 1;
    }
  a = 0;
  get_next_line(fd);
}
