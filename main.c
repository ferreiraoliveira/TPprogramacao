#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[20];
    int quantidade;
    char unidade[10];
    char categorias[20];
    int contagem;
    struct item *next;
} item;

item *head = NULL;


void listaitems(item *headitem){

    while(headitem != NULL){
        printf("%s - %d - %s - %s - %d \n", headitem->nome , headitem->quantidade , headitem->unidade , headitem->categorias, headitem->contagem);
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
    while(headitem != NULL){
        if (strcmp(headitem->nome,nome) == 0 ){
            headitem->quantidade = headitem->quantidade + quantidade;
        }headitem = headitem->next;
    }

}

void categorias(item *headitem){
    char categoria[20];

    printf("Qual categoria ?\n");
    scanf("%s",&categoria);

    while(headitem != NULL){
        if (strcmp(headitem->categorias,categoria) == 0 ){
            printf("%s - %d - %s - %s \n", headitem->nome , headitem->quantidade , headitem->unidade , headitem->categorias);
        }headitem = headitem->next;
    }

}

void produto_necessario(item *headitem){

    while(headitem != NULL){
        if (headitem->quantidade < 100){
            printf("E preciso encomendar : %s \n", headitem->nome);
        }headitem = headitem->next;
    }
}

void remover(item *headitem){
    char nome[20];
    int quantidade;
    printf("A que gostaria de Remover ?\n");
    scanf("%s",&nome);
    printf("Que quantidade gostaria de Remover ?\n");
    scanf("%d",&quantidade);
    while(headitem != NULL){
        if (strcmp(headitem->nome,nome) == 0 ){
            headitem->quantidade = headitem->quantidade - quantidade;
            headitem->contagem = headitem->contagem + quantidade;
        }headitem = headitem->next;
    }

}
/*void remover_produto(item *headitem){

    }

}*/
void addiciona_item(item *headitem){
    item *newitem = malloc(sizeof(item));
    printf("Escreva o nome\n");
    scanf("%s", newitem->nome);
    printf("Escreva a quantidade\n");
    scanf("%d", &newitem->quantidade);
    printf("Escreva a unidade\n");
    scanf("%s", &newitem->unidade);
    printf("Escreva a categoria\n");
    scanf("%s", &newitem->categorias);
    newitem->contagem = 0;
    newitem->next = headitem;
    head = newitem;
}

void contagem(item *headitem){
    int contagem[1000];
    int i=0;
    int a=1;
    int w=0;
    while(headitem != NULL){
        i++;
        for(a; a<=i;a++){
            contagem[a] = headitem->contagem;
        }


        for (int b = 0; b <= i ; b++) {
            for (int j = b+1; j <=i; j++) {
                if (contagem[i] > contagem[j]){
                    int aux = contagem[j];
                    contagem[j]= contagem[i];
                    contagem[i]= aux;
                }

            }

        }

        if (w == 0){
            w++;
            headitem = headitem->next;
        } else {
            if (headitem->contagem == contagem[1]) {
                printf("O mais requesitado é: %s %d \n", headitem->nome, headitem->contagem);
            }
            headitem = headitem->next;
        }
    }

}


void gravar( item *headitem){
    FILE *file;
    if ((file = fopen("stock.csv","w")) == NULL){
        printf("Erro ao abrir ficheiro\n");
        exit(1);
    }
    while(headitem != NULL) {
        fprintf(file, "%s ;%d ;%s ;%s ;%d \n",headitem->nome ,headitem->quantidade,headitem->unidade,headitem->categorias,headitem->contagem);
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
    char categorias[20];
    int contagem;
    while (fscanf(file, "%s ;%d ;%s ;%s ;%d \n", nome, &quantidade, unidade, categorias, &contagem) > 1) {
        item *newitem = malloc(sizeof(item));
        strcpy(newitem->nome , nome);
        strcpy(newitem->unidade , unidade);
        strcpy(newitem->categorias , categorias);
        newitem->quantidade = quantidade;
        newitem->contagem = contagem;
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
        printf("3.Adicionar Stock\n");
        printf("4.Remover Stock\n");
        printf("5.Produtos por Categoria\n");
        printf("6.Produtos necessarios\n");
        printf("7.Mais requesitado\n");
        printf("8.Sair\n");

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
            case 4:
                remover(head);
                break;
            case 5:
                categorias(head);
                break;
            case 6:
                produto_necessario(head);
                break;
            case 7:
                contagem(head);
                break;
        }

    } while (opcao != 8);

    gravar(head);

    return 0;
}