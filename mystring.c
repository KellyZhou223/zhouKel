//returns the length of string s
int mystrlen( char *s){
	int len=0;
	//go through the string until the terminating character
	while (*s){
		len++;
		s++;
	}
	return len;
}

//copies string s2 into s1, returns s1
char * mystrcpy(char *s1, char *s2){
	int i=0;
	while (*s2){
		s1[i]=*s2; //copy chars from s2 into s1
		i++;
		s2++;
	}
	s1[i]='\0'; //add null terminating character at end

	return s1;
}

//concatenates s2 onto s1, returns s1
char * mystrcat(char *s1, char *s2){
	int len=0;
	//finding the length of s1 to see where to start adding 
	while (*s1){
		len++;
		s1++;
	}

	//adds from the end of s1
	int i;
	for (i=0; s2[i]; i++){
		s1[i] = s2[i];
	}
	s1[i]=0; //add null terminating character at end

	return s1-len;
}

//copies the first <size> characters of s2 into s1, returns s1
char * mystrncpy(char *s1, char *s2, int size){
	int i;
	//adds only <size> number of characters
	for (i=0;i<size;i++){
		if (s2[i])
			s1[i]=s2[i];
		else
			s1[i]=0; //if number of chars in s2 is less than size, put 0
	}
	return s1;
}

//concatenates the first <size> characters of s2 onto s1, returns s1
char * mystrncat(char *s1, char *s2, int size){
	int len=0;
	//finds length of s1 to see where to start adding
	while (*s1){
		len++;
		s1++;
	}

	//starts from end of s1, adds only <size> number of chars
	int i;
	for (i=0;i<size;i++){
		s1[i] = s2[i];
	}
	s1[i]=0; //add null terminating character at end

	return s1-len;
}

//returns a pointer to the first appearance of char c in string s
char * mystrchr(char * s, int c){
	char a = (char) c;
	while (*s){
		if (*s == a) //if it is the char
			return s;
		s++;
	}
	if (a=='\0') //if it is the null terminating character
		return s;

	return 0; //return NULL if character is not found
}

//compares two strings s1 and s2, returns -1, 0, or 1 based on whether s1 is greater than, equal to, or less than s2
int mystrcmp(char *s1, char *s2){
	while (*s1 && *s2){
		if (*s1>*s2) //s1 greater than s2
			return 1;
		else if (*s1<*s2) //s2 greater than s1
			return -1;
		s1++;
		s2++;
	}
	if (*s2) //if there are still more characters in s2
		return -1;
	if (*s1) //if there are still more characters in s1
		return 1;
	return 0; //they are equal
}
