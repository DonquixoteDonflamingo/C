#include <stdio.h>
#include <stdlib.h>
// typedef struct serve para criar um tipo de função, exemplo int, char, etc...
typedef struct Ponto
{
    int x;
    int y;
} Ponto;

int main(int argc, char* argv[])
{
int a = 2;
int b = a;
int *p = &a;

    printf("a = %-10d \t b = %-10d\n", a, b);
        printf("\n&a = %-10p \t &b = %p\n", &a, &b);

    b =3;
    printf("\na = %-10d \t b = %-10d\n", a, b);

    a = 4;
    printf("a = %-10d\t b = %-10d\n", a, b);
        printf("&p = %p\t p = %p\t *p = %d", &p, p, *p);

    *p = 5;
    printf("a = %d\t b = %d\n", a, b);
    // malloc = aloca um espaço novo de memoria para guardar o que tu quiser
    p = malloc(sizeof(int)*5);
    p[0] = 3;
    p[1] = 55;

    printf("&p = %p\t p = %p\t *p = %d\n", &p, p, *p);
    printf("&p = %p\t p = %p\t *p = %d\n", &p, &p[1], p[1]);
    
Ponto A;
A.x = 4;
A.y = 4;
printf("A(%d, %d)\n", A.x, A.y);

exit(0);
}