//default includes
#include <stdio.h>
#include <stdlib.h>


// external functions
void write(){
    FILE *fp;
    fp = fopen("error.txt", "w+");
    fprintf(fp, "Syntax Error - 6:04 - src/init.nit (1:1)\n\nA Syntax Error occured and the program broke\n");
    fprintf(fp, "\nlog([] + [])\n    ^^^^^^^ syntax error: unknown token: []\n");
    fprintf(fp, "   \thelp: remove '[] + []'");
}


// main function
int main(){
    write();
}