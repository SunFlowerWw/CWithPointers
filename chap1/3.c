#include<stdio.h>
#include<stdlib.h>

int main(){

    int ch;
    char checksum = -1;

    while((ch=getchar())!=EOF){
        
        checksum+= ch;
        putchar(ch);
        
    
    }


    printf("%d\n",checksum);



}


