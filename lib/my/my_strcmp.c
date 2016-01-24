/*
** my_strcmp.c for ertyui in /home/galpin_a/rendu/Library/lib/my
**
** Made by Antoine Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Tue Nov 10 14:03:36 2015 Antoine Galpin
** Last update Tue Nov 10 14:03:38 2015 Antoine Galpin
*/

int	my_strcmp(char *s1, char *s2)
{
  if (s1[0] == s2[0])
    {
      if (s1[0] == '\0')
	return (0);
      return (my_strcmp(s1 + 1, s2 + 1));
    }
  else
    return (s1[0] - s2[0]);
}
