// Exemplo de implementacao da funcao de busca sequencial
void buscarItem() {
    if (numItens == 0) {
        printf("\n⚠️ Mochila vazia! Sem itens para buscar.\n");
        return;
    }

    char nomeBusca[MAX_NOME];
    printf("\n--- Buscar Item ---\n");
    printf("Digite o NOME do item a ser buscado: ");
    scanf(" %49[^\n]", nomeBusca);

    int i;
    int encontrado = 0; // Flag de controle

    printf("\n🔍 Buscando por: '%s'...\n", nomeBusca);

    for (i = 0; i < MAX_ITENS; i++) {
        if (mochila[i].ativo == 1) { // Só checa posições ativas
            // Conceito: Comparacao de strings
            if (strcmp(mochila[i].nome, nomeBusca) == 0) { 
                printf("\n✨ ITEM ENCONTRADO! ✨\n");
                printf("Nome:       %s\n", mochila[i].nome);
                printf("Tipo:       %s\n", mochila[i].tipo);
                printf("Quantidade: %d\n", mochila[i].quantidade);
                encontrado = 1; // Item encontrado
                break;
            }
        }
    }

    if (!encontrado) {
        printf("\n❌ Item '%s' nao foi encontrado na mochila.\n", nomeBusca);
    }
}