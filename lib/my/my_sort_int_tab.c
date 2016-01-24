/*
** my_sort_int_tab.c for zertyuio in /home/galpin_a/rendu/Library/lib/my
**
** Made by Antoine Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Tue Nov 10 14:03:17 2015 Antoine Galpin
** Last update Tue Nov 10 14:03:19 2015 Antoine Galpin
*/

int	my_sort_int_tab(int *tab, int size)
{
  int	modif;
  int	pos;

  modif = 1;
  while (modif == 1)
    {
      pos = 0;
      modif = 0;
      while (pos < (size - 1))
	{
	  if (tab[pos] > tab[pos + 1])
	    {
	      my_swap(tab + pos, tab + pos + 1);
	      modif = 1;
	    }
	  pos = pos + 1;
	}
    }
}
