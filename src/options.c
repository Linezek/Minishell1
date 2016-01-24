/*
** options.c for sqdqsdq in /home/galpin_a/rendu/PSU/PSU_2015_minishell1
**
** Made by Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Tue Jan 19 07:17:50 2016 Galpin
** Last update Sun Jan 24 12:07:49 2016 galpin
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "minishell1.h"

void		show_cwd(t_mini mini)
{
  mini.cp = getcwd(mini.buffer, sizeof(mini.buffer));
  if (mini.cp != NULL)
    my_printf("\033[01;35m[Minishell1]\033[01;32m[%s]\033[01;00m: ", mini.cp);
  else
    exit(0);
}

int		my_exit(t_mini mini)
{
  if (mini.show[0] == 'e' && mini.show[1] == 'x' && mini.show[2] == 'i'
      && mini.show[3] == 't' && mini.show[4] == '\0')
    {
      write(2, "exit\n", 5);
      if (mini.str != NULL)
	exit(0);
      else
	exit(0);
      return (0);
    }
  else if (mini.show[0] == 'c' && mini.show[1] == 'l' && mini.show[2] == '\0')
    {
      my_printf("\e[1;1H\e[2J");
      exit(EXIT_SUCCESS);
    }
}

void		my_control_d()
{
  t_mini	mini;

  my_putchar('\n');
  show_cwd(mini);
}
void		my_header()
{
  my_printf("************************************************\n");
  my_printf("*\e[01;31m----------------------------------------------\e[00m*\n");
  my_printf("*\e[01;32m-----------WELCOME IN MY MINISHELL1-----------\e[00m*\n");
  my_printf("*\e[01;36m----------------------------------------------\e[00m*\n");
  my_printf("*\e[01;34m-----------------by galpin_a------------------\e[00m*\n");
  my_printf("*\e[01;33m----------------------------------------------\e[00m*\n");
  my_printf("************************************************\n");
}
