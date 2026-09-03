#include <stdio.h>
#include <locale.h>
/*8. Ler um valor em reais e converter para dólar, dada uma cotação fixa,
formatado com 2 casas decimais.*/
int main(){
    setlocale(LC_ALL, "Portuguese");
    float n1, d, c;
    printf("\nDigite um quantidade de reais: ");
    scanf("%f", &n1);
    d = 5,19;
    c = n1 / d;
    printf("\n%.2f Reais em dolar é: %.2f cents", n1, c);
    return 0;
}