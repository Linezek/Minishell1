/*
** my_strncpy.c for my_strncpy.c in /home/faure_j//rendu/lib/my
** 
** Made by jordan faure
** Login   <faure_j@epitech.net>
** 
** Started on  Mon Oct 24 09:47:17 2011 jordan faure
** Last update Mon Oct 24 09:50:54 2011 jordan faure
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  char	i;

  i = 0;
  if (i > n && src[i] != '\0')
    {
      (dest[i] = src[i]);
    }
  if (i < n)
    {
      (dest[i] = '\0');
    }
}
