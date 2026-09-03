#include <stdio.h>
#include <locale.h>
/*4. Converter uma temperatura de Celsius para Fahrenheit.*/
int main(){
    setlocale(LC_ALL, "Portuguese");
    float n1, f;
    printf("\nDigite uma temperatura em Celsius: ");
    scanf("%f", &n1);
    f = ((n1 * 9 / 5) + 32);
    printf("\n%.2f° graus em fahrenheit é : %.2f°", n1, f);
    return 0;
}