/*
** my_strlen.c for my_strlen in /home/faure_j//rendu/lib/my
** 
** Made by jordan faure
** Login   <faure_j@epitech.net>
** 
** Started on  Mon Oct 24 10:04:29 2011 jordan faure
** Last update Sun Nov 27 11:41:48 2011 jordan faure
*/

int	my_strlen(char *str)
{
  int	len;

  len = 0;
  while (str[len])
    {
      len = len + 1;
    }
  return (len);
}
