//libera (desaloca) lista
void libera (LISTA* lista){
	if((*lista)==NULL){
		printf("LISTA VAZIA");
	}else{
		node *tmp;
		while ((*lista) != NULL){
			tmp = *lista;
			*lista = (*lista)->prox;
			free(tmp);
		}
		*lista=NULL;
	}
}
