#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
setlocale(LC_ALL,"");

//Definindo Var�veis
char letra = 'a';

//Condicional simples
if(letra == 'a'){
    printf("\n A letra � a.");
}

//C�digo da letra
printf("\n C�digo da letra = %d", letra);

if(letra == 97){
    printf("\n A letra � a");
}

}

