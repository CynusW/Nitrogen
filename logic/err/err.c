// imports
#include <stdio.h>
#include <stdlib.h>



// external functions

// the plain, normal one
// not meant for interpreters!
void err(char type[], char reason[], char file[], char loc[]){
    if (type == "syntax"){
        printf("Syntax Error - %s - %s(%s)\n", reason, file, loc);
    } else if(type == "overflow"){
        printf("Overflow Error - %s - %s(%s)\n", reason, file, loc);
    } else {
        printf("Unknown error given.\n");
    }
}

// the error meant for interpreters
void errI(char error[]){
    printf("Custom Error - %s - interpret.nit(1:1)\n", error);
    // printf("%s\n", error);
}


// main (the testing functions)
int main(int argc, char *argv[]){
    if (argc > 2){
        err(argv[1], argv[2], argv[3], argv[4]);
    }
}