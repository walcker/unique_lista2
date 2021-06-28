#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <string>
#include <fstream>
#include <iostream>
#include <new>

using namespace std;

int main ( void ){

  //Permite usar acentos
  setlocale(LC_ALL,"");

  int vetor1[5], vetor2[5], vetor3[10];    // Declara um vetor de inteiros.
  int i;
      for (int i = 0 ; i < 6 ; ++i){
        cout << "Entre com o valor para o vetor1 " << i << endl;
          cin >> vetor1[i]; 
      }      // Insere elementos no vetor1

      for (int i = 0 ; i < 6 ; ++i){
        cout << "Entre com o valor para o vetor2 " << i << endl;
          cin >> vetor2[i]; 
      } // Insere elementos no vetor2
      
      //Imprime vetor único na tela
      for(int i = 0; i < 6; ++i){
        for(int j = 0; j < 6; j++){
          if( vetor1[i]  != vetor2[j]){
            vetor3[i] = vetor1[i];
            i++;
            vetor3[i] = vetor2[j];
          }else{
            vetor3[i] = -1;
          }
        }
      }

      for(int i = 0; i < 11; i++){
        cout << vetor3[i] << " ";
      }

      
return 0;
} 
  