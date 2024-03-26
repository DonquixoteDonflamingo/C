#include <stdio.h>
#include <stdlib.h>
// Não tenho a menor ideia do que serve esse progama
// E pra achar quantos números tem, dps vou olhar o Bro Code.
int main(int argc, char* argv[])
{
int qtd_n = argc -1;
int soma_n = 0;
int med_n = 0;
int menor_n = atoi(argv[i]);
int maior_n = atoi(argv[i]);
int vetor_ord_n[]

for(int i = 1; i <= qtd_n, i++);
{
int n = atoi(argv[i]);
int soma_n+= n;
}
if(menor_n < n)
{
    menor_n = n;
if(n > maior_n)
{
maior_n = n;
}
}

med_n = (float)soma_n / qtd_n;
    
    printf("\nQuantidade de numeros recebidos: %d\n", qtd_n);
    printf("Valor medio dos numeros: %.2f\n", med_n);
    printf("Menor numero: %d\n", menor_n);
    printf("Maior numero: %d\n", maior_n);

for(int i = 0, i < qtd_n-1; i++)
{
for(int j = i; j < qtd_n; i++)
{
if(vetor_ord_n[i] > vetor_ord_n[j])
{
    int aux = vetor_ord_n[j];
    vetor_ord_n[j] = vetor_ord_n[i];
    vetor_ord_n[i] = aux;
}
}
}

    exit(0);
}