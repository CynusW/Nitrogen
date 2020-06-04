// add script
// for nitrogen


// includes
#include <stdio.h>
#include <stdlib.h>


// int addition!

// iAddR adds 2 ints and returns them
int iAddR(int num1, int num2){
  return num1 + num2;
}

// iAddP adds 2 ints and prints them
void iAddP(int num1, int num2){
  printf("%d\n", num1 + num2);
}


int main(){
  // int main is the testing ground!
  iAddP(iAddR(3, 7), 10);
}
