#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{ float num1, num2,soma,prod, quad,raiz,raizSoma,seno, modulo;
printf("Informe o primeiro numero:");
scanf("%f",&num1);
printf("\nInforme o segundo numero:");
scanf("%f",&num2);

soma=num1+num2;
printf("\nSoma dos numeros:%f",soma);

prod=num1*pow(num2,2);
printf("\nProduto do primeiro numero pelo quadrado do segundo:%.2f\n",prod);

raizSoma=pow(num1,2)+pow(num2,2);
raiz=sqrt(raizSoma);
printf("Raiz quadrada da soma dos quadrados:%.2f\n",raiz);

seno= sin(num2-num1);
printf("Seno da diferenca do primeiro numero pelo segundo:%.2f\n",seno);

modulo=abs(num1);
printf("Modulo do primeiro numero:%.2f\n",modulo);
	system("PAUSE");
	return 0;
	
}
