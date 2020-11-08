#include <stdio.h>
#include<ctype.h>

int main(){

    char a;

    printf("Enter an upper case letter :");

    scanf("%c", &a);

    printf("Your upper case letter %c in lower case is %c", a , tolower(a));

    printf("\n");

    return 0;
}
