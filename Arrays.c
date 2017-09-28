#include<stdio.h> 
#include<stdlib.h>

int length = 0, max_count = 0;

void add_at_end(int *list, int data) {

	if (max_count == 0) {
		printf("Use option 1 to give count\n");
		return;
	}
	else if (length == max_count) {
		printf("List is full\n");
		return;
	} 
	list[length++] = data;
	return;
}

void delete_at_end(int *list) {

	if(length == 0) {
		printf("List is empty.\n");
	}
	else {
		length--;
	}
}
void delete_at_begining(int *list) {

	int i = 0;
	if(length == 0) {
		printf("List is empty.\n");
	}
	else {
		for(i = 0; i < length-1; i++) {
			list[i] = list[i+1];
		}
		length--;
	}
}
void add_at_begining(int *list, int data) {
	
	int i = 0;
	if (max_count == 0) {
		printf("Use option 1 to give count\n");
		return;
	}
	else if(length == max_count) {
		printf("List is full\n");
		return;
	}
	for(i = length; i > 0; i--) {
		list[i] = list[i - 1];
	}
	list[0] = data;
	length++;
}

void add_at_index(int *list, int data, int index) {
	
	int i = 0;
	if (max_count == 0) {
		printf("Use option 1 to give count\n");
		return;
	}
	else if(length == max_count) {
		printf("List is full\n");
		return;
	}
	for(i = length; i > index; i--) {
		list[i] = list[i - 1];
	}
	list[index] = data;
	length++;
}

void delete_at_index(int *list, int index) {

	int i = 0;
	if(length == 0) {
		printf("List is empty.\n");
	}
	else {
		for(i = index; i < length-1; i++) {
			list[i] = list[i+1];
		}
		length--;
	}
}

void display(int *list) {

	int i = 0;
	if(length == 0) {
		printf("List is empty.\n");
		return;
	}
	for(i = 0; i < length; i++) {
		printf("%d\t",list[i]);
	}
	printf("\n");
}

int main() {

	int *list, opt, data, index;

	while(1) {
		printf("1) Enter count\n2) Display\n3) Add at end\n4) Add at begining\n5) Delete at end\n6) Delete at begining\n7) Add at index\n8) Delete at index\n0) Exit\nOption: ");
		scanf("%d",&opt);
		
		if(opt == 0) {
			break;
		}
		switch(opt) {
			case 1:
				printf("Enter count: ");
				scanf("%d",&max_count);
				list = (int *)malloc(max_count * sizeof(int));
				break;
			case 2:
				display(list);
				break;
			case 3:
				printf("Enter data: ");
				scanf("%d",&data);
				add_at_end(list, data);
				break;
			case 4:
				printf("Enter data: ");
				scanf("%d",&data);
				add_at_begining(list, data);
				break;
			case 5:
				delete_at_end(list);
				break;
			case 6:
				delete_at_begining(list);
				break;
			case 7:
				printf("Enter data: ");
				scanf("%d",&data);
				printf("Enter index: ");
				scanf("%d",&index);
				add_at_index(list, data, index);
				break;
			case 8:
				printf("Enter index: ");
				scanf("%d",&index);
				delete_at_index(list, index);
				break;
			default: 
				printf("Enter correct option!\n");
		}
	}
	free(list);
	return 0;
}


