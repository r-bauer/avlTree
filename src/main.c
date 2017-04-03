/*
  Arquivo: MAIN.C
  Autor: Roberto Bauer
  Observacoes: 
            Arquivo central do programa, funcaoh main()
*/

#define __MAIN_C__

#include "main.h"



int main(int argc, char *argv[])
{
    SBINTREE *BT, *AVL;

    // configura a estrutura de dados da arvore binaria
    BT = CreateBinTree( CreateData,
                        DeleteData,
                        DuplicatedNode,
                        NodeDataCmp, 
                        PrintData);

    AVL = CreateBinTree(CreateData,
                        DeleteData,
                        DuplicatedNode,
                        NodeDataCmp, 
                        PrintData);

    if (BT == NULL)
    {
        fprintf(stderr, "Erro criando arvore binaria simples\n");
        exit(EXIT_FAILURE);
    }

    if (AVL == NULL)
    {
        fprintf(stderr, "Erro criando arvore AVL de busca binaria\n");
        exit(EXIT_FAILURE);
    }

    // controla as opcoes para teste
    // na arvore criada
    // possui um loop interno que serah finalizado 
    // quando o usuario escolher a opcaoh
    Menu(BT, AVL);

    // libera toda a memoria utilizada pela arvore binaria
    DestroyBinTree(BT);

    DestroyBinTree(AVL);


    return (EXIT_SUCCESS);
}


