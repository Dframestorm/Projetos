#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
setlocale(LC_ALL,"");

//Definindo Variaveis
int a = 2, b = 10, c = 15;

//Maior
if(a > 1 ){
    printf("\n %d � maior que 1", a);
}
//Maior ou igual

if(c >= b){
    printf("\n %d � maior ou igual %d", c, b);
}
//Menor

if(a < 10){
    printf("\n %d � menor que 10", a);
}
//Menor ou igual

if(a <= 10){
    printf("\n %d � menor ou igual a 10", a);
}
//Diferente

if(c != 10){
    printf("\n %d n�o � igual a 10 \n", c);
}

}
