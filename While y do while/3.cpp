#include <stdio.h>
#include <stdlib.h>
int main()
{
int i,num1=0,num2=0;
printf("Ingrese un numero\n");
scanf("%d",&num1);
printf("\nIngrese otro numero\n");
scanf("%d",&num2);
i=num1;
while(i<num2)
{
	printf("%d\n",i);
	i=i+1;
}
return 0;
}
