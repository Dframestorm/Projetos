#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<stdbool.h>

void main(){
setlocale(LC_ALL,"");

//Definindo Vari�veis
bool a = true, b = false;

//Se for verdadeiro
if(a){
    printf("\n A � verdadeiro");
}
//Comparando o B
if(b){
    printf("\n B � verdadeiro");
}else{
    printf("\n B � falso");
}
//Comparando uma falsidade

if(!b){
    printf("\n B � falso");
}



}
