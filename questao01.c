#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("\nMedia: %.2f\n", media);

    if (media >= 9) {
        printf("Classificacao: Excelente\n");
    }
    else if (media >= 7) {
        printf("Classificacao: Bom\n");
    }
    else if (media >= 5) {
        printf("Classificacao: Recuperacao\n");
    }
    else {
        printf("Classificacao: Reprovado\n");
    }

    printf("Situacao: %s\n", media >= 7 ? "Aprovado" : "Nao Aprovado");

    return 0;
}