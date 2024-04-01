#include <stdio.h>

int main()
{
	/* your code */
	char letter[26];
	
	for(char c ='a';c<='z';c++){
	    letter[c-'a'] = c;
	}
	for(char c='z';c>='a';c--){
	    printf("\n%c",c);
	    if( c == 'a'){
	        break;
	}
	}
	printf("great");
	return 0;
}