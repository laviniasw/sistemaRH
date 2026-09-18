#include <stdio.h>
#include <string.h>

int main()
{
    int i,j;
    int idade[10], tempoEmpresa[10], setor[10];
    float salario[10];

    char nome[10][50], sexo[10];

    int quantidadeM=0, quantidadeF=0;
    int maisNovo=0, maisVelho=0;
    
    float idadeSetor1=0, idadeSetor2=0, idadeSetor3=0, idadeSetor4=0, idadeSetor5=0;
    float quantidadeSetor1=0, quantidadeSetor2=0, quantidadeSetor3=0, quantidadeSetor4=0, quantidadeSetor5=0;

    int opcao,opcaoRelatorio;



    printf("--- CADASTRO DE FUNCIONARIOS ---\n\n");

    for(i=0;i<10;i++)
    {
    	// Cadastro dos funcionarios
    	
        printf("\nInforme o nome do %d funcionario: ", i+1);
        fgets(nome[i], 50, stdin);

        printf("\nInforme o sexo: ");
        scanf(" %c", &sexo[i]);

	        // Quantidade de funcionarios por sexo
	
	        if(sexo[i]=='M'||sexo[i]=='m'){
	            quantidadeM++;
	        }
	        else if(sexo[i]=='F'||sexo[i]=='f'){
	            quantidadeF++;
	        }

        printf("\nInforme a idade: ");
        scanf("%d",&idade[i]);

	        // Funcionario mais novo e mais velho
	
	        if(i==0){
	            maisNovo=0;
	            maisVelho=0;
	        }
	        else{
	            if(idade[i]<idade[maisNovo])
	                maisNovo=i;
	
	            if(idade[i]>idade[maisVelho])
	                maisVelho=i;
	        }

        printf("\nInforme o setor onde trabalha:\n");
        printf("1 - Administrativo\n");
        printf("2 - Comercial\n");
        printf("3 - Marketing\n");
        printf("4 - Operacional\n");
        printf("5 - Recursos humanos\n");
        scanf("%d",&setor[i]);
        
        	// Contador de numero de funcionarios por setor e contador que soma as idades de todos
        	
        	if (setor[i]==1){
        		quantidadeSetor1++;
        		idadeSetor1=idadeSetor1+idade[i];
			}
			else if (setor[i]==2){
        		quantidadeSetor2++;
        		idadeSetor2=idadeSetor2+idade[i];
			}
			else if (setor[i]==3){
        		quantidadeSetor3++;
        		idadeSetor3=idadeSetor3+idade[i];
			}
			else if (setor[i]==4){
        		quantidadeSetor4++;
        		idadeSetor4=idadeSetor4+idade[i];
			}
			else if (setor[i]==5){
        		quantidadeSetor5++;
        		idadeSetor5=idadeSetor5+idade[i];
			}

        printf("\nInforme o salario: ");
        scanf("%f", &salario[i]);

        printf("\nInforme o tempo de empresa (em anos):\n");
        printf("*Funcionarios com menos de 1 ano de empresa, informar valor 0\n");
        scanf("%d", &tempoEmpresa[i]);

        getchar();

        printf("\n--------------------------------\n");
    }


    // Menu principal - ativo enquanto o usuario nao escolher a opcao de Sair (0)

    do
    {
        printf("\n\n--- MENU DE OPCOES ---\n");
        printf("0 - Sair\n");
        printf("1 - Informar dados dos funcionarios\n");
        printf("2 - Relatorios\n");

        printf("\nEscolha uma opcao: ");
        scanf("%d",&opcao);


        switch(opcao)
        {
            case 0:
                printf("\n\n--- Saindo do programa ---\n");
                break;


            case 1:
                printf("\n\n--- Dados dos funcionarios ---\n");

                for(i=0; i<10; i++){
                    printf("\nFuncionario %d\n", i+1);
                    printf("Nome: %s", nome[i]);
                    printf("Sexo: %c\n", sexo[i]);
                    printf("Idade: %d\n", idade[i]);
                    printf("Setor: %d\n", setor[i]);
                    printf("Salario: %.2f\n", salario[i]);
                    printf("Tempo de empresa: %d\n", tempoEmpresa[i]);
                }
                break;


            case 2:

                // Menu de relatorios

                do
                {
                    printf("\n\n--- MENU DE RELATORIOS ---\n");
                    printf("1 - Quantidade de funcionarios por sexo\n");
                    printf("2 - Funcionario mais novo e mais velho\n");
                    printf("3 - Media de idade por setor\n");
                    printf("4 - Funcionarios por ordem crescente de salario\n");
                    printf("5 - Funcionarios por sexo em ordem decrescente de idade\n");
                    printf("6 - Voltar ao menu anterior\n");

                    printf("\nEscolha uma opcao: ");
                    scanf("%d", &opcaoRelatorio);


                    switch(opcaoRelatorio)
                    {
                        case 1:
                            printf("\n\n--- Quantidade de funcionarios por sexo ---\n");
                            printf("Homens: %d\n", quantidadeM);
                            printf("Mulheres: %d\n", quantidadeF);
                            break;


                        case 2:

                            printf("\n\n--- Funcionario mais novo e mais velho ---\n");
                            printf("Funcionario mais novo: %s", nome[maisNovo]);
                            printf("Funcionario mais velho: %s", nome[maisVelho]);
                            break;


                        case 3:

                            printf("\n\n--- Media de idade por setor ---\n");

                            // Calcula e mostra a media por idade de cada setor, se nao houver funcionarios naquele setor, tambem mostra
                            
                            if(quantidadeSetor1>0)
							    printf("\nAdministrativo: %.2f anos\n", idadeSetor1/quantidadeSetor1);
							else
							    printf("\nAdministrativo: Nenhum funcionario\n");
							
							if(quantidadeSetor2>0)
							    printf("Comercial: %.2f anos\n", idadeSetor2/quantidadeSetor2);
							else
							    printf("Comercial: Nenhum funcionario\n");
							
							if(quantidadeSetor3>0)
							    printf("Marketing: %.2f anos\n", idadeSetor3/quantidadeSetor3);
							else
							    printf("Marketing: Nenhum funcionario\n");
							
							if(quantidadeSetor4>0)
							    printf("Operacional: %.2f anos\n", idadeSetor4/quantidadeSetor4);
							else
							    printf("Operacional: Nenhum funcionario\n");
							
							if(quantidadeSetor5>0)
							    printf("Recursos humanos: %.2f anos\n\n", idadeSetor5/quantidadeSetor5);
							else
							    printf("Recursos humanos: Nenhum funcionario\n\n");	
                            
                            break;


                        case 4:
                        {
                            printf("\n\n--- Funcionarios por ordem crescente de salario ---\n");

                            char nomeAux[10][50];
                            int idadeAux[10];
                            float salarioAux[10];

                            char tempNome[50];
                            int tempIdade;
                            float tempSalario;


                            // Copia os dados originais

                            for(i=0; i<10; i++){
                                strcpy(nomeAux[i], nome[i]);
                                idadeAux[i]=idade[i];
                                salarioAux[i]=salario[i];
                            }


                            // Ordena pelo salario

                            for(i=0; i<10; i++){
                                for(j=i+1; j<10; j++){

                                    if(salarioAux[i]>salarioAux[j]){

                                        tempSalario=salarioAux[i];
                                        salarioAux[i]=salarioAux[j];
                                        salarioAux[j]=tempSalario;

                                        tempIdade=idadeAux[i];
                                        idadeAux[i]=idadeAux[j];
                                        idadeAux[j]=tempIdade;

                                        strcpy(tempNome,nomeAux[i]);
                                        strcpy(nomeAux[i],nomeAux[j]);
                                        strcpy(nomeAux[j],tempNome);
                                    }
                                }
                            }


                            // Mostra somente nome e idade

                            for(i=0; i<10; i++){
                                printf("\nNome: %s", nomeAux[i]);
                                printf("Idade: %d\n", idadeAux[i]);
                            }
                            break;
                        }


                        case 5:
                        {
                            printf("\n\n--- Funcionarios por sexo em ordem decrescente de idade ---\n");
                            
                            char nomeAux[10][50];
						    char sexoAux[10];
						    int idadeAux[10];
						
						    char tempNome[50];
						    char tempSexo;
						    int tempIdade;
						
						
						    // Copia os dados originais
						
						    for(i=0;i<10;i++){
						        strcpy(nomeAux[i],nome[i]);
						        sexoAux[i]=sexo[i];
						        idadeAux[i]=idade[i];
						    }
						
						
						    // Ordena por sexo e idade
						
						    for(i=0;i<10;i++){
						        for(j=i+1;j<10;j++){
						
						            if(sexoAux[i]==sexoAux[j]&&idadeAux[i]<idadeAux[j]){
						
						                tempIdade=idadeAux[i];
						                idadeAux[i]=idadeAux[j];
						                idadeAux[j]=tempIdade;
						
						                strcpy(tempNome,nomeAux[i]);
						                strcpy(nomeAux[i],nomeAux[j]);
						                strcpy(nomeAux[j],tempNome);
						
						                tempSexo=sexoAux[i];
						                sexoAux[i]=sexoAux[j];
						                sexoAux[j]=tempSexo;
						            }
						        }
						    }
							
                            // Funcionarios homens

                            printf("\nFuncionarios do sexo masculino:\n");

                            for(i=0;i<10;i++){

                                if(sexoAux[i]=='M'||sexoAux[i]=='m'){
                                    printf("Nome: %s", nomeAux[i]);
                                    printf("Sexo: %c\n", sexoAux[i]);
                                    printf("Idade: %d\n\n", idadeAux[i]);
                                }
                            }


                            // Funcionarios mulheres

                            printf("\nFuncionarios do sexo feminino:\n");

                            for(i=0;i<10;i++){

                                if(sexoAux[i]=='F'||sexoAux[i]=='f'){
                                    printf("Nome: %s", nomeAux[i]);
                                    printf("Sexo: %c\n", sexoAux[i]);
                                    printf("Idade: %d\n\n", idadeAux[i]);
                                }
                            }

                            break;
                        }


                        case 6:

                            printf("\n\n--- Voltando ao menu principal ---\n");

                            break;


                        default:

                            printf("\n\nOpcao de relatorio invalida!\n");
                    }

                }while(opcaoRelatorio!=6);

                break;


            default:

                printf("\n\nOpcao invalida!\n");
        }

    }while(opcao!=0);

}