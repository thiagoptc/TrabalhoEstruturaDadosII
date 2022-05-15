#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<ctype.h>
using namespace std;


void menu ()
{
    int opicao;
    printf("----------\n");
    printf("----------\n");
    printf("   Menu  \n");
    printf("A - Gerar vetor \n");
    printf("B - Ordenar vetor \n");
    printf("C - Busca sequencial\n");
    printf("D - Busca binaria\n");
    printf("E - SAIR\n");
    printf("----------\n");
    printf("----------\n");
}
int valoresAleatorios(int vetor[], int quantidadeNumero){

        printf("Informe o tamanho do vetor\n");
        scanf("%d",&quantidadeNumero);

        printf("\n\n\t\t\t\tAgora, informe os numeros contidos no vetor\n");
        for (int i = 0; i < quantidadeNumero; i++){
        scanf("%d",&vetor[quantidadeNumero]);
        }
            sort(vetor, vetor + quantidadeNumero);
            return(vetor[quantidadeNumero]);

}

int ordenarValores(int vetor[], int quantidadeNumero){
    for (int i = 0; i < quantidadeNumero; i++){
        printf("\t %d",&vetor[quantidadeNumero]);
    }
}

int buscaSequencial(int vetor[], int quantidadeNumero, int buscar) {
    for (int i = 0; i < quantidadeNumero; i++) { // O(n)
        if (vetor[i] == buscar) {
            return i;
        }
    }
    return -1;
}

int buscaBinaria(int vetor[], int n, int buscar) { // O(log n)
    int inicio = 0, fim = buscar - 1;
    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        if (buscar == vetor[meio]) {
            return meio;
        } else if (buscar > vetor[meio]) {
            inicio = meio + 1;
        } else if (buscar < vetor[meio]) {
            fim = meio - 1;
        }
    }
}

int escolha(int vetor[],int quantidadeNumero){
char opcao;
    printf("\nEscolha uma letra para prosseguir\n");
    scanf("%c", &opcao);
    opcao = tolower(opcao);
    printf("\n Opcao escolhida: %c", opcao);

        switch (opcao){
             case 'a':
                        printf("\n\n\t\t\Gerando valores aleatorios\n");
                        valoresAleatorios(vetor,quantidadeNumero);
                        escolha(vetor,quantidadeNumero);

                        break;
            case 'b':
                            printf("\n\n\t\t\Ordenando vetores\n");
                            ordenarValores(vetor, quantidadeNumero);
                            escolha(vetor,quantidadeNumero);
                            break;


            case 'c':
                            printf("\\n\n\t\t\Busca sequencial\n");
                            escolha(vetor,quantidadeNumero);
                            break;


            case 'd':
                            printf("\n\n\t\t\Busca binaria\n");
                            escolha(vetor,quantidadeNumero);
                            break;

            case 'e':
                            printf("\n\n\t\t\Saindo do programa\n");

                            break;

            default:
                system("cls");

            printf("\n\t\tInicie com a opc A para liberar as proximas opc\n");





                }
                return 0;
}

int main ()
{
 char gerador;
 int vetor[0],quantidadeNumero=0;

 menu();
 escolha(vetor,quantidadeNumero);

 return 0;
}
