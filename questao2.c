#include <stdio.h>

int main (){
  
  int i, n, st = 0, nd = 1, aux;

  printf("Digite um número: ");
  scanf("%d", &n);
  
  if (n == st){
    printf("Pertence a sequência de Fibonacci");
  }
 
  for (i = 0; i < n; i++){
    aux = st + nd;
    st = nd;
    nd = aux;
    if (aux == n){
      printf("Pertence a sequência de Fibonacci");
      return 0;
    }
  }
  if (i == n){
    printf("Não pertence a sequência de Fibonacci");
  } 
  return 0;
}