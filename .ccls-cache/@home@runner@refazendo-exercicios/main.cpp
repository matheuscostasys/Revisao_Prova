#include <iostream>
#include <stdio.h>
int bubbleSort ( int *x,int tam ){
  int qtd, i,j,tmp;

  qtd =0;
  for( i = 0; i < tam -1; i++){
    for(j= i+1; j < tam; j++){
      if(x[i] > x[j]){
        troca (&x[i], &x[j]);
      }
    }
  }
  
}
void inserir(int *x, int tam) {
  for (int i = 0; i < tam; i++) {
    printf("\n Digite o  numero: %d \n", i + 1);
    scanf("%d", &(*(x + i)));
  }
  
}
void apresentar(int *x, int tam){
  for(int i =0; i < tam; i++){
    printf("\n A ordenacao apresentada e: %d \n",(*(x+i)));
  }
}
int main() {
  int x[5];
  int tam = sizeof(x) / sizeof(int);
  int opcao;
  do {
    printf("\n 1 - Inserir \n");
    printf("\n 2 - Bubble sort \n");
    printf("\n 3 -  Insertion sort \n");
    printf("\n 4 -  Selection sort\n");
    printf("\n 5 - Merge sort \n");
    printf("\n 6 - Quick sort \n");
    printf("\n 7 - Heap sort \n");
    printf("\n 8 - apresentar \n");
    printf("\n escolha uma opcao \n");
    scanf("%d", &opcao);
    switch (opcao)
    case 1: {
      inserir(x, tam);
      break;
    
    //    case 1: {

    //  }
    //  case 2: {

    //   }
    //  case 3: {

    //  }
    //  case 4: {

    //  }
    //  case 5: {

    //  }
      case 8: 
        apresentar(x,tam); 
        break;

     }
  } while (opcao != 0);

    
  }