/*
** minishell1.h for ertyuio in /home/galpin_a/rendu/PSU/PSU_2015_minishell1
**
** Made by Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Tue Jan 19 03:03:36 2016 Galpin
** Last update Sun Jan 24 11:55:07 2016 galpin
*/

#ifndef MINISHELL1_H_
# define MINISHELL1_H_

# define READ_SIZE (1)
# define PATH_MAX (100)

typedef struct	s_mini
{
  char		*str;
  char		**tab;
  int		a;
  char		**array2;
  char		*str3;
  pid_t		pid;
  int		i;
  char		*show;
  char		*cp;
  char		buffer[PATH_MAX];
  char		*buf;
}		t_mini;

typedef struct	s_env
{
  int		a;
  int		b;
  int		c;
  char		*path;
}		t_env;

typedef struct	s_wordtab
{
  char		**tab;
  int		nb;
  int		j;
  int		k;
}		t_wordtab;

typedef struct	s_wordtab2
{
  char		**tab;
  int		nb;
  int		j;
  int		k;
}		t_wordtab2;

typedef struct	s_var
{
  int		i;
  int		j;
  int		k;
  char		*tmp;
}		t_var;

char		*get_next_line(const int fd);
char		**my_str_to_wordtab(char *str);
char		**my_str_to_wordtab2(char *str);
char		*double_array(char **tab, char **tab2, int found);
void		my_control_d();

#endif /*!READ_SIZE*/
