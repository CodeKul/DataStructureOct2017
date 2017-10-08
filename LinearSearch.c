#include <stdio.h>
#define MAX 9

int arr[MAX]={12,23,34,45,56,67,78,89,90};

void display(int *arr)
{
    int i=0;
    for(i=0;i<MAX;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

int find(int data)
{
    int comparisons=0,i=0;
    
    for(i=0;i<MAX;i++)
    {
        
        comparisons++;
        if(data==arr[i])
        {
            return i;
        }
    }
    return -1;
}



int main()
{
    int location;
    printf("input array\n");
    display(arr);
    
    location=find(1);
    
    if(location==-1)
    {
        printf("element not found\n");
    }
    else{
        printf("the no. %d found at %d in the array\n",arr[location],location);
    }
    return 0;
}
