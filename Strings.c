#include<stdio.h>
#include<stdlib.h>

void input(char *s) {
	printf("Enter string: ");
	gets(s);
	return;
}

int get_length(char *s) {
	
	int count = 0;
	while(s[count] != '\0') {
		count++;	
	}
	return count;
}

void reverse_str(char *s) {

	int i = 0, j = get_length(s) - 1;
	char temp;
	while(j > i) {
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;

		i++;
		j--;
	}
	return;
}

void copy_str(char *src, char *dest) {

	int i = 0;
	while(src[i] != '\0') {
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];

	return;
}

int is_palindrome(char *s) {
	
	char *temp;
	temp = (char *)malloc(sizeof(s));
	int i = 0;
	copy_str(s,temp);
	reverse_str(temp);
	while(s[i] != '\0') {
		if(s[i] != temp[i]) {
			return 0;
		}
		i++;
	}
	return 1;
}

int main()
{
	char *str;
	str = (char *)malloc(sizeof(char)*50);

	input(str);

	printf("Length of string: %d\n", get_length(str));

	if(is_palindrome(str)) {
		printf("String is palindrome\n");
	}
	else {
		printf("String is not plindrome\n");
	}
	return 0;
}
