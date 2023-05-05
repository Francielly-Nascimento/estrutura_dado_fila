#include <stdio.h>

int cont_entrada = 0;
int cont_saida = 0;
int fila [100];

void adicionarFila(int valor){
  fila[cont_entrada] = valor;
  cont_entrada++;
}

void removerFila(){
  cont_saida++;
  if(cont_saida == cont_entrada){
    printf("Fila Vazia");
    return;
  }
  cont_saida++;
}
void imprimirFila(){
  if (cont_saida == cont_entrada){
    printf("Fila Vazia");
    return;
  }
for(int i = cont_saida; i< cont_entrada; i++){
  printf("%d, ", fila[i]);
}
  printf("\n");
}
  
int main(void){
   printf("\n---CENÁRIO 1 --- \n\n");
   adicionarFila(1);
   adicionarFila(2);
   adicionarFila(3);
   adicionarFila(7);
   adicionarFila(9);
   imprimirFila();  //: 9, 7, 3, 2, 1;
   adicionarFila(8);
   removerFila();
   removerFila();
   removerFila();
   imprimirFila(); // : 3, 2, 1;
   removerFila();
   removerFila();
   removerFila();
   removerFila(); //Filha Vazia
   

   printf("\n\n\n---CENÁRIO 2 --- \n\n");
   cont_entrada = 0;
   cont_saida = 0;
   adicionarFila(6);
   adicionarFila(7);
   adicionarFila(6);
   adicionarFila(9);
   adicionarFila(1);
   adicionarFila(6);
   adicionarFila(7);
   adicionarFila(6);
   adicionarFila(9);
   adicionarFila(1);
   imprimirFila(); //1, 9, 6, 7, 6, 1, 9, 6, 7, 6  
   adicionarFila(8);
   imprimirFila(); //8, 1, 9, 6, 7, 6, 1, 9, 6, 7, 6
   removerFila();
   removerFila();
   removerFila();
   removerFila();
   removerFila();
   removerFila();
   imprimirFila();// 1, 9, 6, 7, 6

    printf("\n\n---CENÁRIO 3 ---\n\n");
    cont_entrada = 0;
    cont_saida = 0;
    adicionarFila(6);
    removerFila();
    imprimirFila(); // fila Vazia
    adicionarFila(6);
    removerFila();
    imprimirFila(); // Fila Vazia
    adicionarFila(6);
    removerFila();
    imprimirFila(); // Fila Vazia
    adicionarFila(6);
    removerFila();
    imprimirFila(); // Fila Vazia
    adicionarFila(6);
    removerFila();
    imprimirFila(); // fila Vazia
    adicionarFila(6);
    removerFila();
    imprimirFila(); // fila Vazia
    adicionarFila(6);
    removerFila();
    imprimirFila(); // fila Vazia
    adicionarFila(6);
    removerFila();
    imprimirFila(); // fila Vazia
    adicionarFila(6);
    imprimirFila(); //6 
   
}