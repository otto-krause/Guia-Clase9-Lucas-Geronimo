#include<stdio.h >
#include <stdlib.h>
int main()
{
 float m1,m2,m3,m4,m5,m6,m7,m8,m9,m10,pgeneral,palumno;
 int I,c=0;
 I=1;
 do
 {  
  printf("Ingrese las 10 notas del alumno");
  scanf("%f%f%f%f%f%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5,&m6,&m7,&m8,&m9,&m10);
  palumno=(m1+m2+m3+m4+m5+m6+m7+m8+m9+m10)/10;
  printf("el promedio del alumno %d es %f",I,palumno);
  c=c+palumno;
  I=I+1;
 }
 while (I<=30);
 pgeneral=c/30;
 printf("El promedio de la clase es %f\n",pgeneral);
return 0;
}
