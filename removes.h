//remove um cliente
int removes(LISTA* lista){
    int flag=0,id,cont=0;
    node *antNode, *tmp;// no temporario
    tmp = (*lista);
    printf("Informe o ID do cliente a ser removido\n");
	scanf("%i",&id);
     if ( (*lista) == NULL){
        printf("LISTA VAZIA");
	}else{
		do{
			if(id==tmp->ID){
                    if (cont==0){
                        (*lista)=tmp->prox;
                        free(tmp);
                        printf("Cliente removido!\n");
                        flag=1;
                    }else{
                        antNode->prox=tmp->prox;
                        free(tmp);
                        printf("Cliente removido!\n");
                        flag=1;
                    }
			}else{
			    antNode=tmp;
                tmp = tmp->prox;
                cont++;
			}
		}while (flag!=1);
    }
}
