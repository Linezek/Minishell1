/*
** my_putnbr_base.c for putnbr base in /home/galpin_a/rendu/Library/test
**
** Made by Antoine Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Mon Nov  2 14:34:34 2015 Antoine Galpin
** Last update Tue Nov 10 13:58:09 2015 Antoine Galpin
*/

void	 my_putnbr_base(int nb, char *base)
{
  int	result;
  int	diviseur;
  int	size_base;

  size_base = my_strlen(base);
  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
    }
  diviseur = 1;
  while ((nb / diviseur) >= size_base)
    diviseur = diviseur * size_base;
  while (diviseur > 0)
    {
      result = (nb /diviseur) % size_base;
      my_putchar(base[result]);
      diviseur = diviseur / size_base;
    }
}
