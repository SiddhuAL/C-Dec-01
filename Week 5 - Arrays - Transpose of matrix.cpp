#include<stdio.h>
void matrix_print(int,int,int *);
int main()
{
	int m,n;
	printf("Enter dimensions for matrix (ROWS,COLUMNS):");
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
	int *c;
	c=&a[0][0];
	printf("The matrix is :\n");
	matrix_print(m,n,c);
	int b[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		b[i][j]=a[j][i];
	}
	c=&b[0][0];
	printf("\nThe transpose of matrix is :\n");
	matrix_print(n,m,c);
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


