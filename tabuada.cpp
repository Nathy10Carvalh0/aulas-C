//tabuada
#include<stdio.h>
#include<stdlib.h>

int main()
{ int vzs1, vzs2, vzs3, vzs4, vzs5, vzs6, vzs7, vzs8, vzs9, vzs10, num;

printf("\n Digite o valor a ser multiplicado:");
scanf("%i",&num);
vzs1=1*num;
vzs2=2*num;
vzs3=3*num;
vzs4=4*num;
vzs5=5*num;
vzs6=6*num;
vzs7=7*num;
vzs8=8*num;
vzs9=9*num;
vzs10=10*num;

printf("\n %i * 1 = %i", num, vzs1);
printf("\n %i * 2 = %i", num, vzs2);
printf("\n %i * 3 = %i", num, vzs3);
printf("\n %i * 4 = %i", num, vzs4);
printf("\n %i * 5 = %i", num, vzs5);
printf("\n %i * 6 = %i", num, vzs6);
printf("\n %i * 7 = %i", num, vzs7);
printf("\n %i * 8 = %i", num, vzs8);
printf("\n %i * 9 = %i", num, vzs9);
printf("\n %i * 10= %i\n", num, vzs10);
	system("PAUSE");
	return 0;
}
