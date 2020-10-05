#include <stdio.h>
#include "euler.h"

int main(){
	int mtf = mult_three_five(1000);
	printf("The sum of all multiples of 3 or 5 less than 1000 is: %d\n", mtf);

	int ssd = sum_sq_diff(100);
	printf("The sum square difference of the first hundred natural numbers is: %d\n",ssd);

	return 0;
}