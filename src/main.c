/*
** main.c for rtyuiop in /home/galpin_a/rendu/PSU/PSU_2015_minishell1
**
** Made by Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Tue Jan 19 02:35:33 2016 Galpin
** Last update Sun Jan 24 12:09:10 2016 galpin
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include "minishell1.h"

char		*my_getenv(char **env)
{
  int	i;
  t_env	envi;

  envi.c = 0;
  envi.b = 0;
  i = 0;
  if ((envi.path = malloc(sizeof(char *) * PATH_MAX)) == NULL)
    return (NULL);
  while (env[i][0] != 'P')
    i = i + 1;
  if (env[i][1] == 'A' && env[i][2] == 'T' && env[i][3] == 'H')
    {
      while (env[i][envi.b] != '=')
	envi.b = envi.b + 1;
      envi.b = envi.b + 1;
      while (env[i][envi.b] != 0)
	{
	  envi.path[envi.c] = env[i][envi.b];
	  envi.b = envi.b + 1;
	  envi.c = envi.c + 1;
	}
      return (envi.path);
    }
  free(envi.path);
}

int		check_path(char **env, char *str, char **array, t_mini	mini)
{
  while (42)
    {
      mini.i = 0;
      if (my_strlen(mini.show = get_next_line(0)) > 0)
	{
	  mini.array2 = my_str_to_wordtab2(mini.show);
	  my_exit(mini);
	  if (mini.show[0] == 'c' && mini.show[1] == 'd' && mini.show[2] == ' ')
	    my_cd(mini.array2, mini);
	  else
	    {
	      if ((mini.pid = fork()) == -1)
		return (-1);
	      if (mini.pid > 0)
		waitpid(mini.pid, 0, 0);
	      else if (mini.pid == 0)
		while (execve(mini.str3, mini.array2, env) == -1)
		  if ((mini.str3 = double_array(array, mini.array2, mini.i)) == 0)
		    return (write(2, "Command not found\n", 18));
	      mini.i = 1;
	      mini.str3 = double_array(array, mini.array2, mini.i);
	      show_cwd(mini);
	    }
	}
    }
}

int		main(int ac, char **av, char **env)
{
  char		*str;
  char		**array;
  t_mini	mini;
  char		*str2;

  if (ac != 1)
    return (write(2, "Usage: ./mysh\n", 14));
  if (signal(SIGINT, my_control_d) == SIG_ERR)
    my_printf("\ncan't catch SIGINT\n");
  str = my_getenv(env);
  array = my_str_to_wordtab(str);
  my_header();
  if (show_cwd(mini) == -1)
    return (-1);
  check_path(env, str, array, mini);
}
