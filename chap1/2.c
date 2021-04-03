#include<stdio.h>
#include<stdlib.h>

int main(){

    int ch;
    int line = 0;
    int at_begining = 1;


    while((ch==getchar())!=EOF){
    
        i(at_begining){
            at_begining = 0;
            line++;
            printf("%d ",line);
        }

        putchar(ch);
        if(ch=='\n')
            at_begining = 0;
    
    }
    
    return EXIT_SUCCESS;
}
