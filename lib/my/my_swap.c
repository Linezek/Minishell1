/*
** my_swap.c for my_swap in /home/faure_j//rendu/lib/my
** 
** Made by jordan faure
** Login   <faure_j@epitech.net>
** 
** Started on  Mon Oct 24 10:02:26 2011 jordan faure
** Last update Sat Jan  7 09:23:25 2012 jordan faure
*/

int	my_swap(int *a, int *b)
{
  int	d;

  d = *a;
  *a = *b;
  *b = d;
}
