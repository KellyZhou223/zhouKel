//Kelly Zhou
//System Level Programming- Mr. DW
//Work 03- Eul Up Your C Engine

#include <stdio.h>

//Finds the sum of all natural numbers less than n that are multiples of 3 or 5
int mult_three_five(unsigned int n){
	int mult_count=0;
	int mult_sum=0;

	for (mult_count=1; mult_count<n; mult_count++){
		if (mult_count%3==0 || mult_count%5==0){
			mult_sum+=mult_count;
		}
	}

	return mult_sum;
}

//Finds the difference between the sum of squares of first n natural numbers
//and the square of the sum of those numbers
int sum_sq_diff(unsigned int n){
	int sum_sq=0;
	int sum=0;
	int sq_sum=0;
	int diff=0;
	int count=0;

	for (count=1; count<=n; count++){
		sum_sq += count * count;
		sum += count;
	}

	sq_sum = sum * sum;
	diff = sq_sum - sum_sq ;
	return diff;
}


int main(){
	int mtf = mult_three_five(1000);
	printf("The sum of all multiples of 3 or 5 less than 1000 is: %d\n", mtf);

	int ssd = sum_sq_diff(100);
	printf("The sum square difference of the first hundred natural numbers is: %d\n",ssd);

	return 0;
}