#include <stdio.h>
#include <windows.h>

#include "carta.h"
#include "jogo.h"

const struct Carta BARALHO[14] = {
    { .nome_cidade = "Joao Pessoa", .populacao = 833932, .area = 210.044, .pib = 22244.0, .idhm = 0.763, .ano_fundacao = 1585, .densidade_demografica = 833932 / 210.044 },
    { .nome_cidade = "Campina Grande", .populacao = 419379, .area = 593.026, .pib = 10134.0, .idhm = 0.720, .ano_fundacao = 1864, .densidade_demografica = 419379 / 593.026 },
    { .nome_cidade = "Santa Rita", .populacao = 149910, .area = 726.565, .pib = 2779.0, .idhm = 0.636, .ano_fundacao = 1890, .densidade_demografica = 149910 / 726.565 },
    { .nome_cidade = "Patos", .populacao = 103165, .area = 512.93, .pib = 2275.0, .idhm = 0.703, .ano_fundacao = 1903, .densidade_demografica = 103165 / 512.93 },
    { .nome_cidade = "Bayeux", .populacao = 97544, .area = 32.12, .pib = 1205.0, .idhm = 0.648, .ano_fundacao = 1959, .densidade_demografica = 97544 / 32.12 },
    { .nome_cidade = "Cabedelo", .populacao = 66509, .area = 31.91, .pib = 7533.0, .idhm = 0.748, .ano_fundacao = 1956, .densidade_demografica = 66509 / 31.91 },
    { .nome_cidade = "Sousa", .populacao = 67259, .area = 738.547, .pib = 1133.0, .idhm = 0.668, .ano_fundacao = 1854, .densidade_demografica = 67259 / 738.547 },
    { .nome_cidade = "Cajazeiras", .populacao = 63239, .area = 565.9, .pib = 1210.0, .idhm = 0.679, .ano_fundacao = 1863, .densidade_demografica = 63239 / 565.9 },
    { .nome_cidade = "Guarabira", .populacao = 57446, .area = 180.76, .pib = 891.0, .idhm = 0.684, .ano_fundacao = 1887, .densidade_demografica = 57446 / 180.76 },
    { .nome_cidade = "Sape", .populacao = 51273, .area = 316.32, .pib = 570.0, .idhm = 0.635, .ano_fundacao = 1925, .densidade_demografica = 51273 / 316.32 },
    { .nome_cidade = "Princesa Isabel", .populacao = 22176, .area = 368.51, .pib = 227.0, .idhm = 0.606, .ano_fundacao = 1905, .densidade_demografica = 22176 / 368.51 },
    { .nome_cidade = "Pombal", .populacao = 32110, .area = 888.63, .pib = 490.0, .idhm = 0.648, .ano_fundacao = 1772, .densidade_demografica = 32110 / 888.63 },
    { .nome_cidade = "Itaporanga", .populacao = 23193, .area = 468.05, .pib = 277.0, .idhm = 0.627, .ano_fundacao = 1865, .densidade_demografica = 23193 / 468.05 },
    { .nome_cidade = "Aguiar", .populacao = 5570, .area = 344.68, .pib = 55.0, .idhm = 0.589, .ano_fundacao = 1961, .densidade_demografica = 5570 / 344.68 }
};

int main() {
    // Ajusta a codificação do terminal para UTF-8 (apenas em Windows)
    SetConsoleOutputCP(65001);

    int opcao = -1;
    const int TAMANHO_BARALHO = sizeof(BARALHO) / sizeof(BARALHO[0]);

    do {
        printf("\n\n=============================================\n");
        printf("   BOAS VINDAS AO SUPER TRUNFO DA PARAÍBA!   \n");
        printf("=============================================\n");
        printf("1. Como Jogar\n");
        printf("2. Visualizar Cartas\n");
        printf("3. Iniciar Duelo!\n");
        printf("---------------------------------------------\n");
        printf("0. Sair do Jogo\n");
        printf("=============================================\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                mostrarInstrucoes();
                break;
            case 2:
                visualizarCartas(BARALHO, TAMANHO_BARALHO);
                break;
            case 3:
                iniciarRodada(BARALHO, TAMANHO_BARALHO);
                break;
            case 0:
                printf("\nObrigado por jogar! Até a próxima!\n");
                break;
            default:
                printf("\nOpção inválida! Por favor, tente novamente.\n");
                break;
        }

    } while (opcao != 0);
    
    return 0;
}