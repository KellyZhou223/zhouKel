//Kelly Zhou
//System Level Programming
//Work05 Pointers

#include <stdio.h>

int main(){

	//initializing variables
	char c = 'a';
	int i = 5;
	long l = 1000;

	//printing hex representation of memory address
	printf("*c: %p\n", &c);
	printf("*i: %p\n", &i);
	printf("*l: %p\n", &l);
	//printing decimal representation of memory address
	printf("*c: %lu\n", &c);
	printf("*i: %lu\n", &i);
	printf("*l: %lu\n", &l);
	//I noticed that the address of i is 7 bytes below c and the address of l is 8 bytes below i

	//Initializing pointers for each of the variables
	char *cp = &c;
	int *ip = &i;
	long *lp = &l;
	//Printing out the values of each pointer
	printf("c: %c\n", *cp);
	printf("c: %d\n", *ip);
	printf("c: %ld\n", *lp);

	//Using pointers to modify the values of original variables
	*lp = 2000;
	lp++;
	*lp = 100; //Modifying i 
	*cp = 'b';
	//Printing out new values
	printf("l: %ld\n", l);
	printf("i: %d\n", i);
	printf("c: %c\n", c);

	//Declaring and initializing unsigned int and 2 pointers
	unsigned int ui = 50000000;
	int *uip = &ui;
	char *cuip = &ui;
	//printing out the memory addresses and values of the unsigned int from the pointers
	printf("p: %p p points to: %d\n", uip, *uip); //int pointer
	printf("p: %p p points to: %c\n", cuip, *cuip); //char pointer

	printf("ui: %x\n", ui); //hexadecimal representation
	printf("ui: %u\n", ui); //decimal representation

	//Printing out each byte of the unsigned int using hex and decimal representations
	int count = 1;
	while (count <= sizeof(ui)){
		printf("Byte %d in decimal: %hhu |", count, *cuip);
		printf("Byte %d in hex: %hhx\n", count, *cuip);
		cuip++;
		count++;
	}

	//Incrementing each byte of the unsigned int by 1
	printf("\nModification 1: Increment by 1\n");
	//Reset
	count = 1;
	cuip-=4;
	while (count <= sizeof(ui)){
		printf("Byte %d in decimal incremented: %hhu |", count,++*cuip);
		printf("Byte %d in hex incremented: %hhx\n", count, ++*cuip);
		printf("Unsigned int after modification: %u\n", ui);
		cuip++;
		count++;
	}

	//Incrementing each byte of the unsigned int by 16
	printf("\nModification 2: Increment by 16\n");
	//Reset
	count = 1;
	cuip-=4;
	while (count <= sizeof(ui)){
		printf("Byte %d in decimal incremented: %hhu |", count,*cuip+=15);
		printf("Byte %d in hex incremented: %hhx\n", count,*cuip+=15);
		printf("Unsigned int after modification: %u\n", ui);
		cuip++;
		count++;
	}

	return 0;

}