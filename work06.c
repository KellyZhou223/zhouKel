//Kelly Zhou
//System Level Programming
//Work06 The Old Switcheroo

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	//initializing variables
	int ray[10];
	int reverse[10];
	int i;
	int *rp=ray;
	int *revp= reverse;
	srand(time(NULL));

	//Populate ray with random values and print the values out
	printf("ray: ");
	for (i=0; i<9;i++){
		*rp=rand();
		printf("%d\t", *rp);
		rp++;
	}
	//Last value of ray is 0
	*rp=0;
	printf("%d\n", *rp);
	
	//Populate reverse with the values in ray in reverse order and print the values out
	printf("reverse: ");
	for (i=0; i<10; i++){
		*(revp+i)=*(rp-i);
		printf("%d\t", *(revp+i));
	}

	return 0;
}
	
