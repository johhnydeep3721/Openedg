#include <stdio.h>
#include <string.h>

int main()
{
	/* your code */
	char name1[20], name2[20],name3[20],name4[20];
	
	printf("input name\n");
	scanf("%s",name1);
	printf(" ");
	scanf("%s",name2);
	printf(" ");
	scanf("%s",name3);
	printf(" ");
	scanf("%s",name4);

	printf("%s",name4);
	printf("\n%s",name3);
	printf("\n%s",name2);
	printf("\n%s",name1);
	
	return 0;
}