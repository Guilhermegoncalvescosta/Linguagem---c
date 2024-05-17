#include <stdio.h>
#include <math.h>

int main() {
    float numero;

    // Solicita ao usuário que insira um número
    printf("Digite um número: ");
    scanf("%f", &numero);

    // Verifica se o número é positivo e calcula a raiz quadrada se for
    if (numero >= 0) {
        float raiz_quadrada = sqrt(numero);
        printf("A raiz quadrada de %.2f é: %.2f\n", numero, raiz_quadrada);
    } else {
        printf("Número inválido. A raiz quadrada de um número negativo não é definida.\n");
    }

    return 0;
}


