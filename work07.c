//Kelly Zhou
//System Level Programming
//Work 07:Arrays and Pointers and Strings, Oh My!

#include <stdio.h>
#include <string.h>

//arr_avg calculates the average of all the values of an int array
float arr_avg(int *p, int len){
	int i;
	int sum=0;

	for (i=0;i<len;i++){
		sum+= *(p+i);
	}
	return sum/ (float) len;
}

//arr_cp copies the items in p to the array q
void arr_cp(char *p, char *q, int len){
	while (*p){
		*q= *p;
		p++;	
		q++;

	}
}

//str_len returns the length of a string
int str_len(char *p){
	int len=0;
	while (*p){
		len++;
		p++;
	}
	return len;
}

int main(){
	//Part 1
	int arr[10];
	int i;
	for (i=0;i<10;i++){
		arr[i]=i*5+1;
	}
	printf("Average: %0.2f\n", arr_avg(arr, 10));
	
	//Part 2
	char word_1[10] = "Chocolate";
	char word_2[10];
	arr_cp(word_1, word_2, 10);
	
	for (i=0; i<10;i++){
		printf("%c", word_2[i]);
	}
	printf("\n");
	
	//Part 3
	printf("Length: %d\n", str_len(word_1));
	printf("Length: %d\n", str_len("Cake"));

	//String Functions

	//the strcpy function copies the second string into the first 
	//including a terminating byte
	char word_3[20];
	strcpy(word_3, "Tiramisu ");
	for (i=0; i<10;i++){
		printf("%c", word_3[i]);
	}
	printf("\n");

	//the strcat function concatenates the second argument to the first
	//the first argument must have enough space to hold result
	strcat(word_3, "is so good");
	for (i=0; i<20;i++){
		printf("%c", word_3[i]);
	}
	printf("\n");

	//the strcmp function compares two strings and returns an integer
	//greater than, less than, or equal to 0 based on whether the 
	//the first string is greater, less than or equal to the second
	printf("Strcmp: %d\n",strcmp("Hi", "Bye"));
	printf("Strcmp: %d\n",strcmp("Hi", "hi"));
	printf("Strcmp: %d\n",strcmp("Hi", "Hi"));

	//the strchr function locates the first occurrence of a character and
	//returns a pointer to the located character
	char *locate = strchr("Coffee", 'f');
	printf("Strchr: %p, %c\n", locate, *locate);

}

