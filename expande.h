void batata(LISTA* lista){
    int flag=0,id;
    node *tmp; // no temporario
    tmp = (*lista);

    printf("Informe o ID do cliente que deseja exibir: \n");
    scanf("%i",&id);

    if ( (*lista) == NULL){
        printf("LISTA VAZIA");
    }else{
        do
        {
            if(id==tmp->ID){
                printf("Nome: %s\n", tmp->nome);
                printf("Telefone: %s\n", tmp->telefone);
                printf("RG: %s\n", tmp->rg);
                flag = 1;
            }else{
                tmp = tmp->prox;
            }
        printf("\nDigite qualquer tecla para voltar!\n");
        scanf("%d");
        } while (flag != 1);
    }
}
