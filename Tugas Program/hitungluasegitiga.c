#include <stdio.h>
int a,t;
float luas;
void main()
{
    printf("Masukkan alas : ");
    scanf("%d",&a);
    printf("Masukkan tinggi : ");
    scanf("%d",&t);
    luas = (float) 1/2 * a * t;
    printf("Luas segitiga = : %.2f",luas);
}