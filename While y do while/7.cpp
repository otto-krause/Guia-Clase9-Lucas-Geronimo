#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a=0,i=1,acu=0,ventotal,proc,vt,mv,mvp;

	while(21>i){
		while (15>a){
			printf("\nIngrese las ventas del vendedor %d ",i);
			scanf("%d",&ventotal);
			acu=acu+ventotal;
			a=a+1;
			}
		printf("\n Vendio un total de %d unidades ",acu);
					if (acu>mv){
							mv=acu;
							mvp=i;
								}
		ventotal=ventotal+acu;
		a=0;
		acu=0;
		i=i+1;
		}

	printf("\n El total de las unidades vendidas es de%d\n",ventotal);
	printf("\n El mejor vendedor fue el vendedor numero %d con un total de %d ventas\n",mvp,mv);

}
