#include<stdio.h>
void matrix_print(int,int,int*);
int trace(int,int,int *);

int main()
{
	printf("Enter the number of rows and colums of matrix :");
	int m,n;
	scanf("%d %d",&m,&n);
	int a[m][n];
	for(int i=0;i<m;i++)
	{
		printf("\nFor row %d :",i+1);
		for(int j=0;j<n;j++)
		{
			printf("\n\tEnter element %d :",j+1);
			scanf("%d",&a[i][j]);
		}
	}
	int *c = &a[0][0];
	printf("\nThe matrix is : \n");
	matrix_print(m,n,c);
	printf("\nThe sum of diagonal elements of the matrix is %d",trace(m,n,c));
	return 0;
}

void matrix_print(int m,int n,int *c)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		printf("%4d",*c++);
		printf("\n");
	}
}

int trace(int m,int n,int *c)
{
	int sum =0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j) sum += *c;
			c++;
		}
	}
	return sum;
}

