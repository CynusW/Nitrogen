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
                // if(strstr(command, "\")")) break;
                // printf();
                if(command[3] == "("){
                    
                }
                // system("./build/unix/log.out");
                break;
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
                if(command[3] == "("){
                    for(int i = 0; i < strlen(command); i++){
                            if (command[i] != ","){
                                continue;
                            } else {
                                if (command[i] == ","){
                                    for(int j = 0; j < i; j++){
                                        switch (command[j]-1){
                                        // first one
                                        case ',':
                                            // we can infer that j is either s or o (currently)
                                            if (command[j] == 's'){
                                                param1 = "syntax";
                                            } else if (command[j] == "o"){
                                                param1 = "overflow";
                                            }   
                                            break;
                                        // this is the second one
                                        case ', ':

                                        default:
                                            break;
                                        }
                                    }
                                }
                            }
                        }
                // system("./build/unix/err.out");
                break;
                }
            break;
            }
        } else {
            printf("Syntax error - interpreter.nit(1:1)\n");
            printf("An error occured and...yeah the thing crashed\n");
            printf("Details of error: %s\n", command);
            break;
        }
    }
}