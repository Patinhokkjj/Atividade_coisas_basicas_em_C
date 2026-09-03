#include <stdio.h>
#include <locale.h>
/*6. Ler o preço de um produto e a quantidade comprada, exibindo o valor
total da compra. */
int main(){
    setlocale(LC_ALL, "Portuguese");
    float n1, v;
    int n2;
    printf("\nDigite o valor do produto: ");
    scanf("%f", &n1);
    printf("\nDigite a quantidade ");
    scanf("%d", &n2);
    v = (n1 * n2);
    printf("\nO valor total da compra é: %.2f ", v);
    return 0;
}