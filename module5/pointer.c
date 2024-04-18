#include <stdio.h>
#include <string.h>

int main(void) {
    char *ptr;
    strcpy(ptr, "you may get into trouble soon");
    puts(ptr);
    return 0;
}
#include <stdio.h>
int main(void) {
    char *ptr;
    *ptr = 'C';
    printf("%c",*ptr);
    return 0;
}


#include <stdio.h>
#include <string.h>

int main(void) {
    char str[10];

    strcpy(str,"Welcome to Troubleland!");
    printf("%s",str);
    return 0;
}
#include <stdio.h>
#include <string.h>

int main(void) {
    char str[10];
    int i;

    strcat(str,"Bump!");
    printf("%s",str);
    return 0;
}