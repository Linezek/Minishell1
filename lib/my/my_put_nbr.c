/*
** my_put_nbr.c for azertyu in /home/galpin_a/rendu/Library/lib/my
**
** Made by Antoine Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Tue Nov 10 13:58:31 2015 Antoine Galpin
** Last update Tue Nov 10 13:58:58 2015 Antoine Galpin
*/

int	my_put_nbr(int nb)
{
  int	mod;

  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  if (nb >= 0)
    {
      if (nb >= 10)
	{
	  mod = (nb % 10);
	  nb = (nb - mod) / 10;
	  my_put_nbr(nb);
	  my_putchar(48 + mod);
	}
      else
	my_putchar(48 + nb % 10);
    }
}
