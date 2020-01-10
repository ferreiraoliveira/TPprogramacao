#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[20];
    int quantidade;
    char unidade[10];
    struct item *next;
} item;

item *head = NULL;


void listaitems(item *headitem){

    while(headitem != NULL){
        printf("%s - %d - %s \n", headitem->nome , headitem->quantidade , headitem->unidade);
        headitem = headitem->next;
    }

}
//fução que adiciona a quantidade
void adicionar(item *headitem){
    char nome[20];
    int quantidade;
    printf("A que gostaria de adicionar ?\n");
    scanf("%s",&nome);
    printf("Que quantidade gostaria de adicionar ?\n");
    scanf("%d",&quantidade);
    printf("%d",quantidade);
    while(headitem != NULL){
        printf("%s\n", headitem->nome);
        if (strcmp(headitem->nome,nome) == 0 ){
            printf("%d \n",headitem->quantidade);
            headitem->quantidade = headitem->quantidade + quantidade;
            printf("%d \n",headitem->quantidade);
        }headitem = headitem->next;
    }

}

void addiciona_item(item *headitem){
    item *newitem = malloc(sizeof(item));
    printf("Escreva o nome\n");
    scanf("%s", newitem->nome);
    printf("Escreva a quantidade\n");
    scanf("%d", &newitem->quantidade);
    printf("Escreva a unidade\n");
    scanf("%s", &newitem->unidade);
    newitem->next = headitem;
    head = newitem;
}

void gravar( item *headitem){
    FILE *file;
    if ((file = fopen("stock.csv","w")) == NULL){
        printf("Erro ao abrir ficheiro\n");
        exit(1);
    }
    while(headitem != NULL) {
        fprintf(file, "%s ;%d ;%s \n",headitem->nome ,headitem->quantidade,headitem->unidade);
        headitem = headitem->next;
    }
    fclose(file);
}

void ler (){
    FILE *file;
    if ((file = fopen("stock.csv","r")) == NULL){
        printf("Erro ao abrir ficheiro\n");
        exit(1);
    }
    char nome[20];
    int quantidade;
    char unidade[10];
    while (fscanf(file, "%s ;%d ;%s \n", nome, &quantidade, unidade) > 1) {
        item *newitem = malloc(sizeof(item));
        strcpy(newitem->nome , nome);
        strcpy(newitem->unidade , unidade);
        newitem->quantidade = quantidade;
        newitem->next = head;
        head = newitem;
    }
    fclose(file);
}

int main() {

    ler(head);

    int opcao;

    do {
        printf("Escolha uma opção\n");
        printf("1.Novo item\n");
        printf("2.Stock\n");
        printf("3.Adicionar\n");
        printf("5.Sair\n");

        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                addiciona_item(head);
                break;
            case 2:
                listaitems(head);
                break;
            case 3:
                adicionar(head);
                break;
        }

    } while (opcao != 4);

    gravar(head);

    return 0;
}