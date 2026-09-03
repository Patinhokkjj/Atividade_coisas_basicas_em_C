#include <stdio.h>
#include <locale.h>
/*2. Ler o raio de um círculo e calcular área e perímetro.*/
int main(){
    setlocale(LC_ALL, "Portuguese");
    float pi, n1, a, p;
    printf("\nDigite um raio de um circulo: ");
    scanf("%f", &n1);
    pi = 3.14;
    a = ((n1 * n1) * pi);
    p = ((n1 * 2) * pi);
    printf("\n A aréa do circulo é : %.2f\n O perimetro do circulo é: %.2f", a, p);
    return 0;
}