#include <stdio.h>
#include <stdlib.h>

int main(void) {

    char str[100];
    int i;

    printf("Enter an integer and your name: ");
    scanf("%d %s", &i, str);

    printf("\nYou entered: %d %s\n", i, str);

    return 0;
}
