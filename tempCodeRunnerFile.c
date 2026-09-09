#include <stdio.h>

int s, t;
float volume;

int main()
{
    printf("Masukkan sisi : ");
    scanf("%d", &s);

    printf("Masukkan tinggi limas: ");
    scanf("%d", &t);

    volume = (1.0 / 3.0) * (s * s) * t;

    printf("Volume limas adalah : %.2f", volume);

    return 0;
}