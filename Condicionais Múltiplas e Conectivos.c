#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
setlocale(LC_ALL,"");

//Definindo Variaveis
  int a = 18;

  //Conectivo L�gico E (AND), Se UMA COMPARA��O for FALSA, N�o entra no bloco
  if(a > 5 && a < 15){
    printf("\n A variavel 'a' est� entre 5 e 15");

  }

  //Conectivo L�gico OU (OR), Se UMA COMPARA��O for VERDADEIRA, J� entra no bloco
  if(a > 5 || a > 15){
    printf("\n A variavel 'a' � maior que 5 e 15");

  }

  //Misturando Conectivos
  if((a > 5 && a < 15)|| a == 20){
    printf("\n A variavel 'a' est� entre 5 e 15 ou ela vale 20");
  }


}
