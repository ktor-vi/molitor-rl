int ft_sqrt(int nb)
{
  int i;

  i = nb - 1;
  while(i > 1)
  {
    if( i == nb /i)
      return (i);
    i--;
  }
  return(0);
}

#include <stdio.h>

int main(void)
{
  int nb = 25;
  printf( "%d", ft_sqrt(nb));
}
