#include <stdio.h>

int main()
{   
    char case1 = 'a';
    char case2 = 'c';
    int counter1 = case2 - case1;
    int counter2 = case1 - case2;
	printf("Diff beetween '%c' and '%c' is : %d\n", case2, case1, counter1);
	printf("Diff beetween '%c' and '%c' is : %d\n", case1, case2, counter2);
	return 0;
}