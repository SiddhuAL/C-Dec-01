#include<stdio.h>
#include<string.h>
int main()
{
	int p=0;
	while(p==0)
	{
		char s[100];
		printf("\nEnter a string :");
		scanf("%[^\n]s",s);
		getchar();
		char t[100];
		printf("\nEnter a string :");
		scanf("%[^\n]s",t);
		getchar();
		int l1 = strlen(s);
		int l2 = strlen(t);
		if(l1!=l2)
		{
		p=0;
		printf("Sorry they're not anagrams...Try again");
		}
		else
		{
			int k=0;
			for(int i=0;i<l1;i++)
			{
				for(int j=0;j<l2;j++)
				{
					if(s[i]==t[j])
					k++;
				}
			}
			if(k>=l1)
			printf("They're anagrams");
			else
			printf("They're not anagrams");
			printf("\n\nYou can start once again");
			p=0;
		}	
	}
	return 0;	
}
