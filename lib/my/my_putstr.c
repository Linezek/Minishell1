/*
** my_putstr.c for aze in /home/galpin_a/rendu/Library/lib/my
**
** Made by Antoine Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Tue Nov 10 13:59:32 2015 Antoine Galpin
** Last update Tue Nov 10 14:04:35 2015 Antoine Galpin
*/

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
}
