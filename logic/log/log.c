// log() function for nitrogen
#include <stdlib.h>
#include <stdio.h>

// normal log
void log(char item[]){
    printf("%s\n", item);
}

// int log
void logI(int item){
    printf("%d\n", item);
}

// char log
void logC(char item){
    printf("%c\n", item);
}


// float log
void logF(float item){ 
    printf("%f\n", item);
}

// octal log
void logO(int octal){
    printf("%o\n", octal);
}

// main function
int main(){
    log("It works!");
}