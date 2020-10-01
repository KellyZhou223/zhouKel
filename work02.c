//Kelly Zhou
//System Level Programming- Mr. DW
//Work 02 Variables are the Spice of Life 

#include <stdio.h>

int main(){

	//Trying out different primitive types
	char c = 'k'; 
	int i = 15; 
	float f = 14.999999;
	float f2 = 14.9999999;
	double d = 12.3456789;

	//Testing the values of the different types
	printf("Float values: %f %f\n", f, f2); //First float printed 14.999999 (all digits) but the second rounded to 6 digits of precision after the decimal point- 15.000000
	printf("Testing precision of float: %0.3f\n", f); //rounded to specified number of digits after point
	printf("Double value: %lf\n", d); //rounded to six digits after the decimal point- 12.345679

	//Comparing values as char has a integer value
	if (i>c){
		printf("Integer value %d is greater than char value %c\n", i, c);
	}
	else {
		printf("Integer value %d is less than char value %c\n", i, c);
	}

	printf("Char value: %i\n", c); //char value is 107

	//Testing %p 
	printf("%p\n", c); //seems to print out a memory address, probably the address of char c
		
	//Unsigned integer types
	unsigned int ui = 255;
	unsigned char uc = 0;

	//Testing values of unsigned integer types
	printf("Unsigned int value: %i\n", ui);
	printf("Unsigned char value: %i\n", uc); //Prints 0
	printf("Unsigned char value: %c\n", uc); //Doesnt print anything

	//Going out of bounds
	unsigned int ui2 = -10000000000;
	unsigned char uc2 = 256;
	char c2 = 200;

	//Testing out of bounds
	printf("Unsigned int value: %i\n", ui2); //converts int to -1410065408
	printf("Unsigned char value: %i\n", uc2); //converts 256 to 0 
	printf("Char value: %i\n", c2); //converts 200 to -56
	//All three gave a warning (implicit conversion) and converted the out of bound values to another value

	return 0;
}


