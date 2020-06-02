#include <stdio.h>
#include <stdlib.h>

char inp(char ask[]){
    char ret[100];
    printf("%s", ask);
    scanf("%s", &ret);
}


int main(){
    inp("This is a test? ");
}