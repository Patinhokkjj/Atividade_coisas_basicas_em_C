#include <stdio.h>
#include <locale.h>
/*5. Converter um total de segundos em horas, minutos e segundos.*/
int main(){
    setlocale(LC_ALL, "Portuguese");
    int n1, h, m, s;
    printf("\nDigite um número de segundos: ");
    scanf("%d", &n1);
    h = (n1 / 3600);
    m = ((n1 % 3600) / 60 );
    s = (n1 % 60);
    printf("\n%d Segundos em horas, minutos e segundos são: %d Horas %d Minutos e %d Segundos", n1, h, m, s);
    return 0;
}