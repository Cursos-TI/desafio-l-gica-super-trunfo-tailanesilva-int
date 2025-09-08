#include <stdio.h>

// Estrutura que representa uma carta do Super Trunfo
typedef struct {
    char estado;                
    char codigo[4];             
    char cidade[50];            
    int populacao;              
    float area;                 
    float pib;                  
    int pontos_turisticos;      
    float densidade;            
    float pib_per_capita;       
} Carta;

int main() {
    // Declaração das duas cartas
    Carta carta1, carta2;

    printf("=== SUPER TRUNFO - Cadastro de Cartas ===\n");

    // Cadastro da Carta 1
    printf("\n--- CARTA 1 ---\n");
    printf("Estado (A-Z): ");
    scanf(" %c", &carta1.estado);
    printf("Codigo (3 caracteres): ");
    scanf(" %3s", carta1.codigo);
    printf("Cidade (sem espacos): ");
    scanf(" %49s", carta1.cidade);
    printf("Populacao: ");
    scanf("%d", &carta1.populacao);
    printf("Area (km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhoes): ");
    scanf("%f", &carta1.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Cadastro da Carta 2
    printf("\n--- CARTA 2 ---\n");
    printf("Estado (A-Z): ");
    scanf(" %c", &carta2.estado);
    printf("Codigo (3 caracteres): ");
    scanf(" %3s", carta2.codigo);
    printf("Cidade (sem espacos): ");
    scanf(" %49s", carta2.cidade);
    printf("Populacao: ");
    scanf("%d", &carta2.populacao);
    printf("Area (km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhoes): ");
    scanf("%f", &carta2.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Cálculos automáticos
    carta1.densidade = carta1.populacao / carta1.area;
    carta1.pib_per_capita = carta1.pib / carta1.populacao;

    carta2.densidade = carta2.populacao / carta2.area;
    carta2.pib_per_capita = carta2.pib / carta2.populacao;

    // ===============================
    // Comparação (escolhemos POPULAÇÃO)
    // Troque para area, pib, densidade ou pib_per_capita se quiser outro atributo
    // ===============================
    printf("\n=== Comparacao de Cartas (Atributo: Populacao) ===\n");

    printf("Carta 1 - %s (%c): %d habitantes\n", carta1.cidade, carta1.estado, carta1.populacao);
    printf("Carta 2 - %s (%c): %d habitantes\n", carta2.cidade, carta2.estado, carta2.populacao);

    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
    } else if (carta2.populacao > carta1.populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
