#include <stdio.h>
#include <locale.h>
/*10. Ler a quantidade de km percorridos e o consumo de combustível (litros),
calculando a autonomia (km/l). */
int main(){
    setlocale(LC_ALL, "Portuguese");
    float km, l, a;
    printf("\nDigite a quantidade de km percorridos: ");
    scanf("%f", &km);
    printf("\nDigite a quantidade de litros gastos por km: ");
    scanf("%f", &l);
    a = (km / l);
    printf("A autonomia do veiculo e: %.2f km/l\n", a);

    return 0;
}