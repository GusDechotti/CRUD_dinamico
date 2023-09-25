void edita(LISTA* lista){
    int flag=0,id,op;
    node *tmp;// no temporario
    tmp = (*lista);
    printf("Informe o ID do cliente a ser editado\n");
	scanf("%i",&id);
     if ( (*lista) == NULL){
        printf("LISTA VAZIA");
	}else{
		do{
			if(id==tmp->ID){
               printf("O que deseja alterar?\n 1- Nome\n 2- Telefone\n 3- RG\n");
               scanf("%i",&op);
               switch(op){
                case 1:
                    printf("Digite o novo nome: ");
                    fflush(stdin);
                    gets(&tmp->nome);
                    break;
                case 2:
                    printf("Digite o novo telefone: ");
                    fflush(stdin);
                    gets(&tmp->telefone);
                    break;
                case 3:
                    printf("Digite o novo RG: ");
                    fflush(stdin);
                    gets(&tmp->rg);
                    break;
               }
               printf("Cliente editado!\n");
               flag=1;
			}else{
                tmp = tmp->prox;
			}
		}while (flag!=1);
    }
}
