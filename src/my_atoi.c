/*
** my_atoi.c for rtyuio in /home/galpin_a/rendu/LibC/lib/my
**
** Made by Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Mon Jan  4 21:21:59 2016 Galpin
** Last update Mon Jan  4 21:22:01 2016 Galpin
*/

int	my_atoi(const char *str)
{
  int	i;
  int	j;
  int	idx;

  idx = 0;
  i = 0;
  j = 0;
  if (str[0] == '-')
    {
      idx = 1;
      i = 1;
    }
  while (str[i] != 0)
    {
      if (str[i] >= '0' && str[i] <= '9')
	{
	  j = j * 10;
	  j = j + str[i] - '0';
	}
      i = i + 1;
    }
  if (idx == 1)
    j = j * -1;
  return (j);
}
