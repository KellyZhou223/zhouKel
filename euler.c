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
