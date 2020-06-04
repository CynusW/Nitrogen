// subtraction logic
// for nitrogen

// imports
#include <stdio.h>
#include <stdlib.h>

//division function
//this one ONLY does not give
//a remainder and returns it
int divideR(int num1, int num2){
  if (num1 > num2){
    return num1 / num2;
  } else {
    return num2 / num1;
  }
}


// divide function 2
// divides 2 numbers and
// prints it, not returning it.
void divideP(int num1, int num2){
  if (num1 > num2) {
    printf("%d\n", num1 / num2);
  } else {
    // then num2 is bigger then num1
    printf("%d\n", num2 / num1);
  }
}

// testing grounds
int main(){
  printf("%d\n", divideR(7, 3)); // attempt for return
  divideP(7,3);
}
