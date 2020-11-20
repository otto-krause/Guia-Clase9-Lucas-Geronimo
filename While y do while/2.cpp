#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i=0,NM=0,acu=0,Num=0;
	float p=0;
	while (15>=i)
	{
		printf("\n Ingrese un numero ");
		scanf("%d",&Num);
		acu=acu+Num;
		if(Num>NM){
			NM=Num;
		}
		i=i+1;
	}
	p=acu/15;
	printf("\n El numero promedio es:\n %f",p);
	printf("\n El numero mayor es: \n %d",NM);
	return 0;
}
