#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


void main(){
setlocale(LC_ALL,"");

//Definindo variáveis
int a = 1;
char b = 'x';

//Código de exemplo com if
if(a == 1){
    printf("\n Opção escolhida: 1");
}else if(a == 2){
    printf("\n Opção escolhida: 2");
}else if(a == 3){
    printf("\n Opção escolhida: 3");
}else{
    printf("\n Opção inválida");
}


//O mesmo código de cima, adaptado ao switch
switch(a){
   case 1:
       printf("\n Opção escolhida: 1");
       break;
   case 2:
       printf("\n Opção escolhida: 2");
       break;
   case 3:
       printf("\n Opção escolhida: 3");
       break;
   default:
    printf("\n Opção inválida");
       break;
}
//Switch com char
switch(b){
   case 'x':
       printf("\n A letra é x");
       break;
   default:
       printf("\n Opção inválida");
       break;
}


}
















