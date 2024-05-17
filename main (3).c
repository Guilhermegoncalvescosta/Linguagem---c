#include <stdio.h>

int main() {
    int numero_mes;

    // Solicita ao usuário que insira um número de 1 a 12
    printf("Digite um número de 1 a 12: ");
    scanf("%d", &numero_mes);

    // Usa a estrutura switch para mapear o número do mês para o nome do mês
    switch(numero_mes) {
        case 1:
            printf("Janeiro\n");
            break;
        case 2:
            printf("Fevereiro\n");
            break;
        case 3:
            printf("Março\n");
            break;
        case 4:
            printf("Abril\n");
            break;
        case 5:
            printf("Maio\n");
            break;
        case 6:
            printf("Junho\n");
            break;
        case 7:
            printf("Julho\n");
            break;
        case 8:
            printf("Agosto\n");
            break;
        case 9:
            printf("Setembro\n");
            break;
        case 10:
            printf("Outubro\n");
            break;
        case 11:
            printf("Novembro\n");
            break;
        case 12:
            printf("Dezembro\n");
            break;
        default:
            printf("Não existe mês correspondente ao número digitado.\n");
    }

    return 0;
}

