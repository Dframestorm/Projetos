#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
setlocale(LC_ALL,"");

//Definindo Variaveis
  int a = 18;

  //Conectivo Lógico E (AND), Se UMA COMPARAÇÃO for FALSA, Não entra no bloco
  if(a > 5 && a < 15){
    printf("\n A variavel 'a' está entre 5 e 15");

  }

  //Conectivo Lógico OU (OR), Se UMA COMPARAÇÃO for VERDADEIRA, Já entra no bloco
  if(a > 5 || a > 15){
    printf("\n A variavel 'a' é maior que 5 e 15");

  }

  //Misturando Conectivos
  if((a > 5 && a < 15)|| a == 20){
    printf("\n A variavel 'a' está entre 5 e 15 ou ela vale 20");
  }


}
