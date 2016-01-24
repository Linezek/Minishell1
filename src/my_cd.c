/*
** my_cd.c for lol in /home/galpin_a/rendu/PSU/PSU_2015_minishell1/src
**
** Made by Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Thu Jan 21 18:42:07 2016 Galpin
** Last update Fri Jan 22 16:11:20 2016 Galpin
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "minishell1.h"

char		*my_cd(char **str, t_mini mini, t_var var)
{
  int		d;
  char		*buffer;
  char		**tab3;

  var.i = 0;
  var.j = 0;
  d = cd_check(mini, d);
  if ((buffer = malloc(sizeof(char *) * PATH_MAX)) == NULL)
    return (NULL);
  if ((tab3[1] = malloc(sizeof(char *) * PATH_MAX)) == NULL)
    return (NULL);
  getcwd(buffer, sizeof(char *) * PATH_MAX);
  while (buffer[var.i] != 0)
    {
      tab3[1][var.i] = buffer[var.i];
      var.i = var.i + 1;
    }
  tab3[1][var.i] = '/';
  while (str[d][var.j] != 0)
    {
      tab3[1][var.i + 1] = str[d][var.j];
      var.i = var.i + 1;
      var.j = var.j + 1;
    }
  my_cd_2(tab3, var.i);
}

int		my_cd_2(char **tab3, int a)
{
  t_mini	mini;

  tab3[1][a + 1] = '/';
  if (chdir(tab3[1]) == -1)
    {
      if (access(tab3[1], F_OK) == -1)
	my_printf("\033[31mError : No such file or directory\n\033[37m");
      else
	my_printf("\033[31mError: Permission denied\n\033[37m");
    }
  show_cwd(mini);
  free(tab3[1]);
}

int		cd_check(t_mini mini, int d)
{
  if (my_strlen(mini.show) > 3)
    d = 1;
  else
    d = 0;
  return (d);
}
