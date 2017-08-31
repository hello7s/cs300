#include <stdio.h>
#include <string.h>

int main(void) {

    char buff[15];
    int passwd = 0;

    printf("\n Enter the password: \n");
    gets(buff);

    if (strcmp(buff, "thesecretword")) {
        printf("\n Incorrect.");
    }
    else {
        printf("\n Correct.");
        passwd = 1;
    }

    if (passwd) {
        printf("I am gRoot!");
    }

    return 0;
}
