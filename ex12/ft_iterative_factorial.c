int ft_iterative_factorial(int nb)
{
  int i;
  i = nb ;

  while(i > 1)
    nb *= --i;
  return (nb);
}


#include <stdio.h>

int main(void)
{
  int nb = 15;
  printf( "%d", ft_iterative_factorial(nb));
}
