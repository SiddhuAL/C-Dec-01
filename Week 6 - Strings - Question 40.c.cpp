#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	printf("Enter first string :");
	scanf("%[^\n]",s);
	getchar();
	int n = strlen(s);
	char t[100];
	printf("Enter second string :");
	scanf("%[^\n]",t);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<strlen(t);j++)
		{
			if(t[j]==s[i])
			{
				for(int k=i;k<n;k++)
				{
					s[k]=s[k+1];
				}
				n--;
				i--;
			}
		}
	}
	printf("\nResultant string : %s",s);
	
	return 0;
}


