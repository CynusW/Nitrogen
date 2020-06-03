// Interpret.c interprets all the commands
// and also runs the shell.


// Imports
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// functions
// void run(char file[]){
//     // TODO: add
// }

void UnixShell(){
    // command array
    char command[500];

    // error parameters
    char* param1;
    char* param2;
    char* param3;
    char* param4;

    // an infinite loop
    for(; ;){
        printf("N> ");
        scanf("%s", &command);
        if(strstr(command, "log")){
            for(int i = 0; i < strlen(command); i++){
                if(command[3] == "("){
                    for(int j = 3; j < strlen(command); j++){
                        printf("%s\n", command[j]);
                    }
                    system("./build/unix.log.out");
                break;
                }
            }
            break;
            }
        if (strstr(command, "inp")){
            for(int i = 0; i < strlen(command); i++){
                // if (strstr(command, "\")")) break;
                system("./build/unix/inp.out");
                break;
            }
            break;
        }
        if (strstr(command, "err")){
            for(int i = 0; i < strlen(command); i++){
                system("./build/unix/err.out");
                break;
                }
            break;
        } else {
            printf("Syntax error - interpreter.nit(1:1)\n");
            printf("An error occured and...yeah the thing crashed\n");
            printf("Details of error: %s\n", command);
            break;
        }
    }
}