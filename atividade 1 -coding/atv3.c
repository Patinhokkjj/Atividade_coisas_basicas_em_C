#include <stdio.h>
#include <locale.h>
/*3. Ler trés números e exibir a média aritmética. */
int main(){
    setlocale(LC_ALL, "Portuguese");
    int n1, n2, n3, media;
    printf("\nDigite o primeiro número: ");
    scanf("%d", &n1);
    printf("\nDigite o segundo número: ");
    scanf("%d", &n2);
    printf("\nDigite o terceiro número: ");
    scanf("%d", &n3);
    media = ((n1 + n2 + n3) / 3);
    printf("\nA média dos numeros é: %d", media);
    return 0;
}