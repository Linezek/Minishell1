/*
** my_strstr.c for azertyu in /home/galpin_a/rendu/Library/lib/my
**
** Made by Antoine Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Tue Nov 10 13:56:32 2015 Antoine Galpin
** Last update Tue Nov 10 13:57:32 2015 Antoine Galpin
*/

char	*my_strstr(char *str, char *to_find)
{
  int	i;

  if (str[0] != '\0')
    {
      i = 0;
      while (to_find[i] != '\0')
	{
	  if (to_find[i] != str[i])
	    return (my_strstr(str + 1, to_find));
	  i = i + 1;
	}
      return (str);
    }
  else
    return (0);
}
