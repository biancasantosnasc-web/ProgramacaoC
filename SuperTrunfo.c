//Nível novato 


/* Criar um programa em C que permita ao usuário inserir os dados 
de duas cartas do Super Trunfo. Para cada carta, o usuário deverá 
fornecer as seguintes informações: */

 
      #include <stdio.h>
  
      int main(){

     // logo de abertura inicial
     printf("*************************************\n");
     printf("* Bem vindo ao Jogo de Super Trunfo *\n");
     printf("*************************************\n");

     

    // Carta 1

     char Estado01 [5] = "A" ; // Considerando o Amazonas 
     
     char CodigodaCarta01 [9] = "A1" ;
    
     char NomedaCidade01 [9] = "Manaus" ;
    
     int Populacao01 = 2.063 ; //2.063.547 Milhoes
   
     float Area01 = 1559.255 ; //1559.255,88 KM²
 
     float PIB01 = 103.9 ; // Bilhoes
    
     int PontosTuristicos01 = 23 ; 
     


     // Carta 2
     
     char Estado02 [5] = "B" ; // Considerando a Bahia

     char  CodigodaCarta02 [9] = "B2" ;

     char NomedaCidade02 [9] ="Salvador" ;

     int  Populacao02 = 69 ; // Milhoes

     float Area02 = 693.44;

     float PIB02 = 62.9 ; // Bilhoes ;

     int PontosTuristicos02 = 70 ;

     printf("Dados das duas primeiras cartas para exemplo\n");
     printf("\n");
      
     printf("*Carta 1*\n");
     
     printf("Estado: %s\n" , Estado01);
     printf("Código: %s\n" , CodigodaCarta01);
     printf("Cidade: %s\n" , NomedaCidade01);
     printf("População: %d Milhões\n" , Populacao01);
     printf("Área em km²: %2.f\n" , Area01);
     printf("PIB: %2.f  Bilhões\n" , PIB01);
     printf("Pontos Turísticos: %d\n" , PontosTuristicos01);
     printf("\n");
     printf("\n");

     printf("*Carta 2* \n");
     printf("\n");
     printf("Estado: %s\n" , Estado02);
     printf("Código: %s\n" , CodigodaCarta02);
     printf("Cidade: %s\n" , NomedaCidade02);
     printf("População: %d Milhões\n" , Populacao02);
     printf("Área em km²: %2.f\n" , Area02);
     printf("PIB: %2.f  Bilhões\n" , PIB02);
     printf("Pontos Turísticos: %d\n" , PontosTuristicos02);
     printf("\n");
      
     printf("Cadastre suas cartas no jogo\n");
     
     printf("\n");

     //Carta 3
     
     char Estado03 [5] ;

     char CodigodaCarta03[10];

     char NomedaCidade03 [25];

     int  Populacao03 ;

     float Area03 ;

     float PIB03;

     int PontosTuristicos03 ;
      

     // Carta 4

     char Estado04 [5] ;

     char  CodigodaCarta04 [10];

     char NomedaCidade04 [25];

     int  Populacao04 ;

     float Area04;

     float PIB04;

     int PontosTuristicos04 ;
      

     //scanf(''formato'', &variavel);
     printf("Estado (exemplo:'A', 'Z'):  \n");
     scanf("%s" , &Estado03);
     printf("Código (exemplo: 'A01', 'Z02'):  \n");
     scanf("%s" , &CodigodaCarta03);
     printf("Cidade (exemplo: 'Blumenal','Zuric'):  \n");
     scanf("%s" , &NomedaCidade03);
     printf("População (exemplo: '123456'):  \n");
     scanf("%d" , &Populacao03);
     printf("Área em km²(exemplo: 13215):  ");
     scanf("%2.f" , &Area03);
     printf("PIB (exemplo:'1235456'):   \n");
     scanf("%2.f" , &PIB03);
     printf("Pontos Turísticos (exemplo:'1234'):  \n");
     scanf("%d" , &PontosTuristicos03);
     printf("\n");
     printf("Carta Cadastrada");
     printf("\n");
     printf("Vamos Cadastrar mais uma carta, após o cadastro poderá ver as novas cartas");
     printf("\n");

     printf("Estado (exemplo:'A', 'Z'):  \n");
     scanf("%s" , &Estado04);
     printf("Código (exemplo: 'A01', 'Z02'):  \n");
     scanf("%s" , &CodigodaCarta04);
     printf("Cidade (exemplo: 'Blumenal','Zuric'):  \n");
     scanf("%s" , &NomedaCidade04);
     printf("População (exemplo: '123456'):  \n");
     scanf("%d" , &Populacao04);
     printf("Área em km²(exemplo: 13215):  ");
     scanf("%2.f" , &Area04);
     printf("PIB (exemplo:'1235456'):   \n");
     scanf("%2.f" , &PIB04);
     printf("Pontos Turísticos (exemplo:'1234'):  \n");
     scanf("%d" , &PontosTuristicos04);

     printf("\n");
     printf("*Carta 3*");
     printf("\n");


     printf("Estado: %s\n" , Estado03);
     printf("Código: %s\n" , CodigodaCarta03);
     printf("Cidade: %s\n" , NomedaCidade03);
     printf("População: %d Milhões\n" , Populacao03);
     printf("Área em km²: %2.f\n" , Area03);
     printf("PIB: %2.f  Bilhões\n" , PIB03);
     printf("Pontos Turísticos: %d\n" , PontosTuristicos03);
     printf("\n");
     
     printf("*Carta 4*");
     printf("\n");

     printf("Estado: %s\n" , Estado04);
     printf("Código: %s\n" , CodigodaCarta04);
     printf("Cidade: %s\n" , NomedaCidade04);
     printf("População: %d Milhões\n" , Populacao04);
     printf("Área em km²: %2.f\n" , Area04);
     printf("PIB: %2.f  Bilhões\n" , PIB04);
     printf("Pontos Turísticos: %d\n" , PontosTuristicos04);
     printf("\n");
     
     return 0;
}
