  
#include<stdio.h >
#include <stdlib.h>
int main()
{
 int num1,factorial=1,i;
 printf("Ingrese un numeros:\n");
 scanf("%d",&num1);
 i=1;
 do
 {
factorial=factorial*i;
i=i+1;
 }
 while (i<=num1);
 printf("factorial es:%d\n",factorial);
 system("pause");
 return 0;
}
