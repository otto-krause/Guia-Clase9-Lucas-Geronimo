#include<stdio.h >
#include <stdlib.h>


int main()
{
 int i=0,Sueldos=0,mas=0,menos=0;
 do
 {
  printf("Ingrese los sueldos");
  scanf("%d",&Sueldos);
  i++;
  if (Sueldos>2000)
  {
  mas=mas+1;
  }
  else
  {
  menos=menos+1;
  }}
 while(i<20); 
 printf(" %d ganan mas de 2000 \n %d ganan menos de 2000",mas,menos);
return 0;
}
