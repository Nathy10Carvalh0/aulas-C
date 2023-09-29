#include<stdio.h>
#include<stdlib.h>

int main()
{
float  m, dcm, cm, mm;
printf("\n Digite o valor em metros:");
scanf("%f",&m);
dcm= m*10;
cm= m*100;
mm= m*1000;
printf(" correspondente em decimetros: %.2f\n correspondente em centimetros: %.2f \n correspondente em milimetros: %.2f \n",dcm,cm,mm);
system ("PAUSE");
return 0;
}
