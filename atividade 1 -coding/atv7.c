#include <stdio.h>
#include <locale.h>
/*7. Ler a altura e a largura de um retângulo e calcular sua área e perímetro.*/
int main(){
    setlocale(LC_ALL, "Portuguese");
    int n1, n2, a, p;
    printf("\nDigite a altura do seu retângulo: ");
    scanf("%d", &n1);
    printf("\nDigite a largura do seu retângulo: ");
    scanf("%d", &n2);
    a = (n1 * n2);
    p = (n1 * 2) + (n2 * 2);
    printf("\nAréa do retangulo é: %d\nPerimetro do retangulo é: %d", a, p);
    return 0;
}