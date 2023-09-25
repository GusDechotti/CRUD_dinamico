
void compra(LISTA* lista){
    int id,opcao,flag=0;
    node *tmp;
    tmp=(*lista);
    printf("\nEscolha um dos clientes cadastrados para comprar uma passagem\n");
    scanf("%i",&id);
    if ( (*lista) == NULL){
        printf("LISTA VAZIA");
	}else{
		do{
			if(id==tmp->ID){
               printf("\nCliente escolhido:\n Nome: %s\n Telefone: %s\n RG: %s\n\n", tmp->nome, tmp->telefone, tmp->rg);
                pont_arq = fopen("Bilhete.txt","w");//abre o bilhete
                    if(pont_arq==NULL){//verifica se o arquivo do bilhete existe
                    printf("ERRO NA CRIACAO DO ARQUIVO 'Bilhete.txt'\n\n\n");
                    return 0;
                }
            fprintf(pont_arq,"---VIA DO CLIENTE---\n Cliente: %s \n Regristro geral: %s \n",tmp->nome,tmp->rg);//escreve no txt
            fclose(pont_arq);//fecha o txt
            printf("Selecione para onde deseja voar:\n 1 - Toledo -> Curitiba\n\n 2 - Toledo -> Palotina\n\n 3 - Toledo -> Foz do Iguacu\n\n 0 - Sair\n\n");
            fflush(stdin);
            scanf("%i",&opcao);
                switch(opcao){//escolhe o destino da viagem
                case 1:
                    system("cls");
                    hep();//leva o cliente para a pagina onde podem ser compradas as passagens para curitiba
                break;
                case 2:
                    system("cls");
                    heppt2();//leva o cliente para a pagina onde podem ser compradas as passagens de palotina
                break;
                case 3:
                    system("cls");
                    heppt3();//leva o cliente para a pagina onde podem ser compradas as passagens de foz
                break;
                case 0://fecha o programa
                    return 0;
                break;
                default:
                printf("Opcao invalida! Tente novamente...");
                break;
                }
            pont_arq = fopen("Bilhete.txt","a");//abre o txt
            fprintf(pont_arq,"\n8<\n------------------------------------\n\n---COLE NA BAGAGEM---\n");
            fprintf(pont_arq," Nome do passageiro: %s \n Telefone: %s \n RG: %s",tmp->nome, tmp->telefone, tmp->rg);
            fclose(pont_arq);//fecha o txt
            printf("BILHETE SENDO IMPRESSO!!!");
            system("pause");
                flag=1;
            }else{
                tmp = tmp->prox;
			}
            }while (flag!=1);
        }
    }

