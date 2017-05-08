#include <stdio.h>

int main()
{
  //declara variaveis
  int x;
  int y;
  int soma;
  int sub;
  int mult;
  int divi;
  //poderia ser int x , y , soma
  
  //atribui valores aos parametros da soma
  x = 5;
  y = 10;
  
  //calcula soma
  soma = x + y;
  sub = x - y;
  mult = x * y;
  divi = x / y;
  
   //imprimi a soma
  printf("\nResultado da soma=%d\n", soma);
  printf("\nResultado da sub=%d\n", sub);
  printf("\nResultado da mult=%d\n", mult);
  printf("\nResultado da divi=%d\n", divi);
  
  return 0;
}