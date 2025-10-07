#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main(){
    char input [1024];
    printf ("PBOTM: Hello there! We are replying onbehalf of Paul Matata. Reply with 'exit' to quit!\n");

    while (1){
        printf ("You: ");
        fgets(input, Sizeof(input), stdin);

        //remove new line from input
        input [strcspn(input),"\n"]=0;

        if (strcmp(input, "exit")==0){
            printf("PBOTM: Sad to see you leave. see you soon for a humanly interaction!\n");
            break;
        }
        else if(strstr(input,"hello")!=NULL||strstr(input, "hi")!=NULL){
            printf("PBOTM: HELLO, PAUL IS AWAY, KINDLY LET US KNOW HOW WE CAN HELP!\n");
        }
        else if(strstr(input, "how are you")!=NULL||strstr(input, "doing")!=NULL||strstr(input, "uko aje")!=NULL){
            printf("PBOTM: Thanks for asking! Am doing well.\n");
        }
        else if (strstr (input, "your name")!=NULL||strstr(input, "are you called")!=NULL||strstr(input, "created by")!=NULL){
            printf("PBOTM: I Am PBOTM! Created by Paul Matata to help in replying messages and make fun when necessary\n");
        }
        else { printf("PBOTM: Sorry, i am still learning that one.\n")
        }
    }
    return 0;
}