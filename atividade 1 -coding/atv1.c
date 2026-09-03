#include <stdio.h>
#include <locale.h>
/*1. Ler o nome e a idade de uma pessoa e exibir uma frase formatada com os
dois dados.*/
int main (){
    setlocale(LC_ALL, "Portuguese");

    int n1;
    char nome [20] = "";
    printf("\nDigite o seu nome: ");
        scanf("%s", &nome);
    printf("\nDigite sua idade: ");
        scanf("%d", &n1);
    printf("\nO seu nome é %s e vocé tem %d anos!",  nome, n1);

    return 0;
}

   
