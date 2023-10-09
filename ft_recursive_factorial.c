int ft_recursive_factorial(int nb)
{
  if(nb > 1)
    return (ft_recursive_factorial(nb - 1));
  else
    return (1);
}

#include <stdio.h>

int main(void)
{
  int nb = 15;
  printf( "%d", ft_recursive_factorial(nb));
}
