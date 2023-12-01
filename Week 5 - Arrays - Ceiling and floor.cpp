#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,8,10,16,58};
	int k;
	printf("Enter the number:");
	scanf("%d",&k);
	for(int i=0;i<(sizeof(a)/sizeof(a[0])-1);i++)
	{
		if(k>=a[i]&&k<=a[i+1])
		{
			if(k==a[i]){
			printf("\nThe floor and ceiling of %d is %d",k,a[i]);
			break;
			}
			else if(k==a[i+1]){
			printf("\nThe floor and ceiling of %d is %d",k,a[i+1]);
			break;
			}
			else  
			{
			printf("\nThe ceiling of %d is %d",k,a[i+1]);
			printf("\nThe floor of %d is %d",k,a[i]);
			break;
			}
		}
	}
	if(k>a[(sizeof(a)/sizeof(a[0])-1)])
	{
		printf("\nThere is no ceiling of given number %d",k);
		printf("\nThe floor of %d is %d",k,a[(sizeof(a)/sizeof(a[0])-1)]);
	}
	return 0;
}
