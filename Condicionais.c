#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
setlocale(LC_ALL,"");

//Imprime na tela
//printf("ol� \n");

//Definindo Condicionais

int a = 4, opcao = 3;
float b = 2.5;
char c = 'x';

if(a == 5){
  printf("\n A variavel a � = 5");
}
if(b == 2.5){
  printf("\n A variavel b � = 2.5");
}

if(c == 'x'){
  printf("\n A variavel c � = x");
}
//N�mero par ou impar
if(a % 2 == 1){
    printf("\n A variavel � impar");
}else{
    printf("\n A variavel � par");
}

//Condicional composta
if(opcao == 1){
    printf("\n A opcao = 1");
}else if(opcao == 2){
    printf("\n A opcao = 2");
}else{
printf("\n A opcao n�o � 1 e nem 2");
}

}





