#include <stdio.h>
#include <math.h>

// esse código não funciona dentro do ambiente do URI Online Judge

#define PI 3.14159

int main()
{
    float raio = 0,
        area = 0;

    scanf(" %f", &raio);
    area = PI * pow(raio, 2);

    printf("A=%.4f\n", area);

    return 0;
}
