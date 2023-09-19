#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
setlocale(LC_ALL,"");

//Definindo Varáveis
char letra = 'a';

//Condicional simples
if(letra == 'a'){
    printf("\n A letra é a.");
}

//Código da letra
printf("\n Código da letra = %d", letra);

if(letra == 97){
    printf("\n A letra é a");
}

}

