#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float new_value;
	float last_value;
	float n;
	
	puts("Enter a number:");
	scanf("%f",&n);
	
	if(n<0){	
		printf("Cannot compute the square root of a "
			   "negative number\n");
		return EXIT_FAILURE;
	}
	
	new_value = 1;
	do{
		last_value = new_value;
		new_value = (last_value + n/last_value)/2;
		printf("%.15e\n",new_value);
	}while(new_value!=last_value);
	
	printf("Square root of %g is %g\n",n,new_value);
	
	return EXIT_SUCCESS;
}
