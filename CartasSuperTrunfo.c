#include <stdio.h>

int main() {

    //Declaração de Variáveis.
    char nome_da_cidade[20], codigo[4];
    int populacao , Num_turisticos;
    float pib, area;
 
    //Informando os registros da carta.
	printf("Digite o código: Ex: A01\n");
    scanf("%s", &codigo);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade);

    printf("Digite a população:\n");
    scanf("%d", &populacao);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &Num_turisticos);


    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite a Área:\n");
    scanf("%f", &area);


   // Apresentando os resultados das cartas. 
    printf("DADOS DA CARTA:\n");
	printf ("\n"); 
    printf("CODIGO DA CARTA: %s\n", codigo);
    printf ("\n");
    printf("CIDADE: %s\n", nome_da_cidade);
    printf ("\n");
    printf("POPULAÇÃO: %d HABITANTES\n", populacao);
    printf ("\n");
    printf("N° DE PONTOS TURISTICO: %d\n", Num_turisticos);
    printf ("\n");
    printf("PIB: R$ %.2f\n", pib);
    printf ("\n");
    printf("ÁREA: %.2f metros quadrado", area);

    return 0;
}
