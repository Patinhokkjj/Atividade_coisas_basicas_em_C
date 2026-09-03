#include <stdio.h>
#include <locale.h>
/*9. Ler o salário de um funcionário e calcular quanto ele receberá com um
aumento de 15%*/
int main(){
    setlocale(LC_ALL, "Portuguese");
    float n1, s, p;
    printf("\nDigite o salário do funcionario: ");
    scanf("%f", &n1);
    p = (n1 * 15) / 100;
    s = n1 + p;
    printf("\nO salario vai ser de: %.3f reais", s);
    return 0;
}