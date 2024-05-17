#include <stdio.h>

// Função para converter a nota numérica para conceito de A a E
char converter_nota_para_conceito(int nota) {
    if (nota >= 86 && nota <= 100) {
        return 'A';
    } else if (nota >= 61 && nota <= 85) {
        return 'B';
    } else if (nota >= 36 && nota <= 60) {
        return 'C';
    } else if (nota >= 1 && nota <= 35) {
        return 'D';
    } else {
        return 'E';
    }
}

// Função principal
int main() {
    int nota;

    // Solicita ao usuário que insira a nota numérica
    printf("Digite a nota numérica (0 a 100): ");
    scanf("%d", &nota);

    // Verifica se a nota está dentro do intervalo válido e chama a função para converter para conceito
    if (nota >= 0 && nota <= 100) {
        char conceito = converter_nota_para_conceito(nota);
        printf("Conceito correspondente: %c\n", conceito);
    } else {
        printf("Por favor, insira uma nota numérica válida (0 a 100).\n");
    }

    return 0;
}

