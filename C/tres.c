#include <stdio.h> 
#include <string.h>

int main(){
    char nome[20];
    char fundador[100];
    int quantidade;
    float tamanho;
    float preco;
    
    printf("Fale uma marca de veículos: ");
    scanf("%s", nome);
    printf("A marca de veículo escolhida é: %s \n", nome);

    printf("Quantos carros a %s tem? ", nome);
    scanf("%d", &quantidade);
    printf("A %s tem %d carros\n", nome, quantidade);

    printf("Qual a altura media dos carros da %s: ", nome);
    scanf("%f", &tamanho);
    printf("O tamanho médio dos carros da %s é de %.2f metros\n", nome, tamanho);

    printf("Qual o valor médio dos carros da %s? ", nome);
    scanf("%f", &preco);
    printf("O valor médio dos %d carros da %s, com %.2f metros é de R$ %.3f mil reais\n", quantidade, nome, tamanho, preco);
    
    
    getchar(); // limpa o ENTER deixado pelo scanf anterior33

    printf("Qual o nome do fundador da %s? ", nome);
    fgets(fundador, sizeof(fundador), stdin);
    fundador[strcspn(fundador, "\n")] = '\0';
    printf("%s é o gênio e fundador da %s.\n", fundador, nome);

    // Sempre usar o & para que o scanf salve a informação e use-a posteriomente.

}