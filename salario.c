#include <stdio.h>
int main()
{
  float salariobruto;
  float salarioliq;
  printf("\nEntre com o valor de salario bruto:");
  scanf("%f",&salariobruto);
  salarioliq=salariobruto*0.8;
  printf("\nResultado=%f\n",salarioliq);
  return 0;
}