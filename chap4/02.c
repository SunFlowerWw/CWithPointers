#include<stdio.h>
#define BOOL int
#define TRUE 1
#define FALSE 0

BOOL isPrime(int nInput){
	
	for(int i = 2;i*i<nInput;++i){
		
		if(nInput%i==0)
			return FALSE;
			
	}
	return TRUE;
}

int main(){
	
	
	//one and two are easy;
	printf("1\t2\t");
	
	//No other even numbers are prime; look at the remaining odd ones.
	
	for(int i = 3;i<=100;i+=2){
		
		if(isPrime(i)==TRUE){	
			printf("%d\t",i);
		}
	}
	
	return 0;
}
