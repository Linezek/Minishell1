/*
** my_strncmp.c for my_strncmp in /home/faure_j//rendu/lib/my
** 
** Made by jordan faure
** Login   <faure_j@epitech.net>
** 
** Started on  Mon Oct 31 15:44:18 2011 jordan faure
** Last update Mon Oct 31 15:46:44 2011 jordan faure
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  if (n > 0)
    {
      if (s1[0] == s2[0])
	{
	  if (s1[0] == s2[0])
	    return (0);
	  return (my_strncmp(s1 + 1, s2 + 1, n - 1));
	}
      else
	return (s1[0] - s2[0]);
    }
  else
    return (0);
}
