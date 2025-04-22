#include <stdio.h>
int main(){

    printf("DESAFIO SUPER TRUNFO \n");
// Criação das variaveis que serão os dados das cartas

char estado[20], capital[20], código[3], opcao, atributo, atributo2;
int população, pontos;
float área;
long long int PIB;

// Menu interativo onde o jogador seleciona a opção

printf("Escolha uma opção\n");
printf("1. Iniciar o jogo\n");
printf("2. Regras do jogo\n");
printf("3. Sair do jogo\n");
scanf("%d", &opcao);

// Comando executado para selecionar o item do menu

switch (opcao)
{
case 1:
   printf("Iniciando o jogo\n");
    break;
case 2:
   printf("Regras do jogo\n");
   printf("Cada jogador terá uma carta \nCada carta tem seus atributos \nEscolha um atributo \nO maior vence!!!\n");
   return 0;
    break;
case 3:
    printf("Saindo\n");
    return 0;
    break;
default:
    printf("Opção Inválida");
    return 0;
    break;
        }

//Criando a CARTA 1, dados serão solicitados ao jogador

printf ("Digite os dados solicitados a seguir: \n");
    printf ("Estado: \n");
    scanf("%s", &estado);
    
    printf("Capital: \n");
    scanf("%s", &capital);

    printf("Código: \n");
    scanf("%s", &código);

    printf("População: \n");
    scanf("%i", &população);

    printf("Área: \n");
    scanf("%f", &área);

    printf("PIB: \n");
    scanf("%lli", &PIB);

    printf("Quantidade de pontos turísticos: \n");
    scanf("%i", &pontos);

    float Densidade = (população / área);
    float PIBpercapita = (PIB / população);
    float SuperPoder = (população + pontos + área + PIB + PIBpercapita + Densidade/1);

    //Criando a CARTA 2, dados serão solicitados ao jogador

    char estado2[20], capital2[20], código2[3];
    int população2, pontos2;
    float área2;
    long long int PIB2;

    printf ("Digite os dados solicitados a seguir: \n");
    printf ("Estado: \n");
    scanf("%s", &estado2);
    
    printf("Capital: \n");
    scanf("%s", &capital2);

    printf("Código: \n");
    scanf("%s", &código2);

    printf("População: \n");
    scanf("%i", &população2);

    printf("Área: \n");
    scanf("%f", &área2);

    printf("PIB: \n");
    scanf("%lli", &PIB2);

    printf("Quantidade de pontos turísticos: \n");
    scanf("%i", &pontos2);

    float Densidade2 = (população2 / área2);
    float PIBpercapita2 = (PIB2 / população2);
    float SuperPoder2 = (população2 + pontos2 + área2 + PIB2 + PIBpercapita2 + Densidade2/1);

    // Mostrando o dados da carta 1

    printf ("Carta 1");
    printf ("Estado: %s \n", estado);
    printf ("Capital: %s \n", capital);
    printf ("Código da carta: %s \n", código);
    printf ("População: %i \n", população);
    printf ("Área: %.2f \n", área);
    printf ("PIB: %lli \n", PIB);
    printf ("Pontos turísticos: %i \n", pontos);
    printf ("Densidade populacional: %f \n", Densidade);
    printf ("PIB per capita: %f \n", PIBpercapita);
    printf ("Super Poder: %d \n", SuperPoder);

    // Mostrando os dados da carta 2

    printf ("Carta 2");
    printf ("Estado: %s \n", estado2);
    printf ("Capital: %s \n", capital2);
    printf ("Código da carta: %s \n", código2);
    printf ("População: %i \n", população2);
    printf ("Área: %.2f \n", área2);
    printf ("PIB: %lli \n", PIB2);
    printf ("Pontos turísticos: %i \n", pontos2);
    printf ("Densidade populacional: %f \n", Densidade2);
    printf ("PIB per capita: %f \n", PIBpercapita2);
    printf ("Super Poder: %d \n", SuperPoder2);

//Escolhendo o primeiro atributos para comparação

printf("Escolha dois atributos:\n");
printf("1 para POPULAÇÃO\n");
printf("2 para ÁREA\n");
printf("3 para PIB\n");
printf("4 para PONTOS TURÍSTICOS\n");
printf("5 para DENSIDADE POPULACIONAL\n");
printf("6 para PIB PER CAPITA\n");
printf("7 para SUPER PODER\n");
scanf("%d", &atributo);

// Mostrando o resultado da primeira comparação e o vencedor

switch (atributo)
{
case 1:{
    printf("Você escolheu POPULAÇÃO:\n");
    printf("%s: %d\n", estado, população);
    printf("%s: %d\n", estado2, população2);

    if (população > população2)
        printf("Carta 1 venceu!!!\n");
       
        else if(população < população2)
            printf("Carta 2 venceu!!!\n");
        
            else(população = população2);
                printf("Empate");
            
    }    break;
case 2:{
    printf("Você escolheu ÁREA:\n");
    printf("%s: %f\n", estado, área);
    printf("%s: %f\n", estado2, área2);

    if (área > área2)
        printf("Carta 1 venceu!!!\n");
        
        else if(área < área2)
            printf("Carta 2 venceu!!!\n");
        
            else(área = área2);
                printf("Empate");
            
    }    break;
case 3:{
    printf("Você escolheu PIB:\n");
    printf("%s: %lli\n", estado, PIB);
    printf("%s: %lli\n", estado2, PIB2);

    if (PIB > PIB2)
        printf("Carta 1 venceu!!!\n");
        
        else if(PIB < PIB2)
            printf("Carta 2 venceu!!!\n");
        
            else(PIB = PIB2);
                printf("Empate");
            
    }    break;
case 4:{
    printf("Você escolheu PONTOS TURÍSTICOS:\n");
    printf("%s: %d\n", estado, pontos);
    printf("%s: %d\n", estado2, pontos2);

    if (pontos > pontos2)
        printf("Carta 1 venceu!!!\n");
        
        else if(pontos < pontos2)
            printf("Carta 2 venceu!!!\n");
        
            else(pontos = pontos2);
                printf("Empate");
            
    }    break;
case 5:{
    printf("Você escolheu DENSIDADE POPULACIONAL:\n");
    printf("%s: %f\n", estado, Densidade);
    printf("%s: %f\n", estado2, Densidade2);

    if (Densidade > Densidade2)
        printf("Carta 1 venceu!!!\n");
        
        else if(Densidade < Densidade2)
            printf("Carta 2 venceu!!!\n");
        
            else(Densidade = Densidade2);
                printf("Empate");

    }    break;
case 6:{
    printf("Você escolheu PIB PER CAPITA:\n");
    printf("%s: %f\n", estado, PIBpercapita);
    printf("%s: %f\n", estado2, PIBpercapita2);

    if (PIBpercapita > PIBpercapita2)
        printf("Carta 1 venceu!!!\n");
        
        else if(PIBpercapita < PIBpercapita2)
            printf("Carta 2 venceu!!!\n");
        
            else(PIBpercapita = PIBpercapita2);
                printf("Empate");
            
    }    break;
case 7:{
        printf("Você escolheu SUPER PODER:\n");
        printf("%s: %f\n", estado, SuperPoder);
        printf("%s: %f\n", estado2, SuperPoder2);
    
        if (SuperPoder > SuperPoder2)
            printf("Carta 1 venceu!!!\n");
            
            else if(SuperPoder < SuperPoder2)
                printf("Carta 2 venceu!!!\n");
            
                else(SuperPoder = SuperPoder2);
                    printf("Empate");
                
    }break;
default:{
    printf("### OPÇÃO INVÁLIDA ###");
    
    }    break;
}

// escolhendo o segundo atrinuto para comparação

printf("Escolha o segundo atributo:\n");
printf("1 para POPULAÇÃO\n");
printf("2 para ÁREA\n");
printf("3 para PIB\n");
printf("4 para PONTOS TURÍSTICOS\n");
printf("5 para DENSIDADE POPULACIONAL\n");
printf("6 para PIB PER CAPITA\n");
printf("7 para SUPER PODER\n");

scanf("%d", &atributo2);

//Resultado da comparação do atributo 2 e mostrando o vencedor

switch (atributo2)
{
case 1:{
    printf("Você escolheu POPULAÇÃO:\n");
    printf("%s: %d\n", estado, população);
    printf("%s: %d\n", estado2, população2);

    if (população > população2)
        printf("Carta 1 venceu!!!\n");
       
        else if(população < população2)
            printf("Carta 2 venceu!!!\n");
        
            else(população = população2);
                printf("Empate");
            
    }    break;
case 2:{
    printf("Você escolheu ÁREA:\n");
    printf("%s: %f\n", estado, área);
    printf("%s: %f\n", estado2, área2);

    if (área > área2)
        printf("Carta 1 venceu!!!\n");
        
        else if(área < área2)
            printf("Carta 2 venceu!!!\n");
        
            else(área = área2);
                printf("Empate");
            
    }    break;
case 3:{
    printf("Você escolheu PIB:\n");
    printf("%s: %lli\n", estado, PIB);
    printf("%s: %lli\n", estado2, PIB2);

    if (PIB > PIB2)
        printf("Carta 1 venceu!!!\n");
        
        else if(PIB < PIB2)
            printf("Carta 2 venceu!!!\n");
        
            else(PIB = PIB2);
                printf("Empate");
            
    }    break;
case 4:{
    printf("Você escolheu PONTOS TURÍSTICOS:\n");
    printf("%s: %d\n", estado, pontos);
    printf("%s: %d\n", estado2, pontos2);

    if (pontos > pontos2)
        printf("Carta 1 venceu!!!\n");
        
        else if(pontos < pontos2)
            printf("Carta 2 venceu!!!\n");
        
            else(pontos = pontos2);
                printf("Empate");
            
    }    break;
case 5:{
    printf("Você escolheu DENSIDADE POPULACIONAL:\n");
    printf("%s: %f\n", estado, Densidade);
    printf("%s: %f\n", estado2, Densidade2);

    if (Densidade > Densidade2)
        printf("Carta 1 venceu!!!\n");
        
        else if(Densidade < Densidade2)
            printf("Carta 2 venceu!!!\n");
        
            else(Densidade = Densidade2);
                printf("Empate");

    }    break;
case 6:{
    printf("Você escolheu PIB PER CAPITA:\n");
    printf("%s: %f\n", estado, PIBpercapita);
    printf("%s: %f\n", estado2, PIBpercapita2);

    if (PIBpercapita > PIBpercapita2)
        printf("Carta 1 venceu!!!\n");
        
        else if(PIBpercapita < PIBpercapita2)
            printf("Carta 2 venceu!!!\n");
        
            else(PIBpercapita = PIBpercapita2);
                printf("Empate");
            
    }    break;
case 7:{
        printf("Você escolheu SUPER PODER:\n");
        printf("%s: %f\n", estado, SuperPoder);
        printf("%s: %f\n", estado2, SuperPoder2);
    
        if (SuperPoder > SuperPoder2)
            printf("Carta 1 venceu!!!\n");
            
            else if(SuperPoder < SuperPoder2)
                printf("Carta 2 venceu!!!\n");
            
                else(SuperPoder = SuperPoder2);
                    printf("Empate");
                
    }   break;
default:{
    printf("### OPÇÃO INVÁLIDA ###");
    
    }   break;
}


}





