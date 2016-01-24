/*
** my_revstr.c for azerty in /home/galpin_a/rendu/Library/lib/my
**
** Made by Antoine Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Tue Nov 10 14:03:01 2015 Antoine Galpin
** Last update Tue Nov 10 14:03:56 2015 Antoine Galpin
*/

char	*my_revstr(char *str)
{
  int	i;

  i = *str;
  while (str[i])
    {
      i = i - 1;
    }
}
