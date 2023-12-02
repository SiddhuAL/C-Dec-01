#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("Enter the number of values in array :");
	int n;
	scanf("%d",&n);
	int *array = (int *)calloc(n,sizeof(int));
	for(int i=0;i<n;i++)
	{
		printf("\n\tGive value %d :",i+1);
		scanf("%d",&array[i]);
	}
	int max = array[0];
	for(int i=0;i<n;i++)
	{
		if(max<=array[i])
		max = array[i];
	}
	printf("The largest element in the array is %d",max);
	free(array);
	return 0;
}


