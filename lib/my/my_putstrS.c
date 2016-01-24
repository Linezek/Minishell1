/*
** my_putstrS.c for putstrS in /home/galpin_a/rendu/printf_ptrfct/lib/my
**
** Made by Antoine Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Fri Nov 13 14:21:16 2015 Antoine Galpin
** Last update Fri Nov 13 14:27:10 2015 Antoine Galpin
*/

int	my_put_octal(int nbr)
{
  char	*base;
  int	result;
  int	i;
  int	div;

  base = "01234567";
  div = 1;
  while ((nbr / div) >= 8)
    div = div * 8;
  while (div > 0)
    {
      result = (nbr / div) % 8;
      my_putchar(base[result]);
      div = div / 8;
    }
  return (0);
}

int	my_put_octal_S(int nbr)
{
  char	*base;
  int	result;
  int	i;
  int	div;

  base = "01234567";
  div = 1;
  if (nbr >= 0 && nbr <= 7)
    {
      my_putchar('0');
      my_putchar('0');
    }
  else if (nbr >= 8 && nbr <= 77)
    my_putchar('0');
  while ((nbr / div) >= 8)
    div = div * 8;
  while (div > 0)
    {
      result = (nbr / div) % 8;
      my_putchar(base[result]);
      div = div / 8;
    }
  return (0);
}

int	my_putstr2(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
    {
      if (str[i] < 32 || str[i] >= 127)
	{
	  my_putchar(92);
	  my_put_octal_S(str[i]);
	}
      else
	my_putchar(str[i]);
      i = i +  1;
    }
  return (0);
}
