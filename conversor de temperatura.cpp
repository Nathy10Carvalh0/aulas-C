#include<stdio.h>
#include<stdlib.h>

int main()
{
float f, c;
printf("\nQual a temperatura em fahreinheit? ");
scanf("%f",&f);
c=(f-32)*(5/9);
printf("\nA tempetura em graus Celcius : %f\n",c);
	system("PAUSE");
	return 0;
}
