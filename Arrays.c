#include<stdio.h> 
#include<stdlib.h>

int length = 0, max_count = 0;

void add_at_end(int *arr, int data) {

	if (max_count == 0) {
		printf("Use option 1 to give count\n");
		return;
	}
	else if (length == max_count) {
		printf("List is full\n");
		return;
	} 
	arr[length++] = data;
	return;
}

void display(int *arr) {

	int i = 0;
	if(length == 0) {
		printf("List is empty.\n");
	}
	for(i = 0; i < length; i++) {
		printf("%d\t",arr[i]);
	}
	printf("\n");
}

int main() {

	int *arr, opt, data;

	while(1) {
		printf("1) Enter count\n2) Add at end\n3) Display\n0)Exit\nOption: ");
		scanf("%d",&opt);
		
		if(opt == 0) {
			break;
		}
		switch(opt) {
			case 1:
				printf("Enter count: ");
				scanf("%d",&max_count);
				arr = (int *)malloc(max_count * sizeof(int));
				break;
			case 2:
				printf("Enter data: ");
				scanf("%d",&data);
				add_at_end(arr, data);
				break;
			case 3:
				display(arr);
				break;

			default: 
				printf("Enter correct option!\n");
		}
	}
	free(arr);
	return 0;
}


