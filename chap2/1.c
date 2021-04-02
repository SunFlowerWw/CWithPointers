#include<stdio.h>

int increment(int value){
	return value+1;
}

int negate(int value){
	return -value;
}



int main(){

	printf("%d %d\n",increment(10),negate(10));
	printf("%d %d\n",increment(0),negate(0));
	printf("%d %d\n",increment(-10),negate(-10));
	
	return 0;

}
