#include<stdio.h>
#include<stdlib.h>

int main(){

    int ch;
    int braces_count = 0;

    while((ch=getchar())!=EOF){
        
        if(ch =='{')
            braces_count++;

        
        if(ch =='}')
            if(braces_count==0)
                puts("extra closing brace!\n");
            else
                braces_count--;
    
    }

    if(braces_count>0)
        printf("%d unmatched opening braces",braces_count);

    return EXIT_SUCCESS;
}

