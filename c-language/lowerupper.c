#include <stdio.h>
#include <ctype.h>

int main() {
    char a, ahold;
    printf("Lets take a small case character for upper case conversion: ");
    scanf("%c", &a);
    ahold = toupper(a);
    printf("The user has entered %c and is converted to upper case %c", a, ahold);
    printf("\n");
    return 0;
}
