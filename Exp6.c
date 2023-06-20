#include<stdio.h>

#include<string.h>

#include<ctype.h>

int main()

{

	char id[20];	int i,n,flag=0;

	printf("Enter Identifier to validate : ");

	gets(id);

	n=strlen(id);

	for(i=0;i<n;i++)

	{

		if(isdigit(id[0]))

			flag=1;

	}

	if(flag==0)

		printf("Given identifier is VALID ");

	else

		printf("Given identifier is INVALID ");

	return 0;

}
