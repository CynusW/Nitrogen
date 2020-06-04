#include <stdio.h>
#include <stdlib.h>


int multR(int num1, int num2){
  return num1 * num2;
}

void multP(int num1, int num2){
  printf("%d\n", num1 * num2);
}

int main(){
  // testing ground
  multP(multR(7, 3), 10);
}
