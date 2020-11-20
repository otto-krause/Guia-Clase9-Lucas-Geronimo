#include<stdio.h >
#include <stdlib.h>
int main()
{
 int Num=0,posi=0,nega=0,ncero=0,I=1;
 while(I<11)
 {
  printf("Ingrese un numero");
  scanf("%d",&Num);
  I=I+1;
  if (Num>0)
  {
  posi=posi+1;
  }
  else
  {
  	if (Num==0)
  	{
	 ncero=ncero+1;
	}
  else
  {
  	nega=nega+1;
  }}}
 printf(" Cantidad de positivos es de:%d\n Cantidad de negativos es de:%d\n Cantidad de ceros es de: %d\n",posi,nega,ncero);
return 0;
}

