#include<stdio.h>
unsigned long carre(
short nb)
{return((long)nb*nb);}
long cube(
short nb)
{return((long)nb*nb*nb);}
int main()
{printf("carre de 2 = %lu\n", carre(2));
printf("cube de 3 = %ld\n", cube(3));
return 0;
}
