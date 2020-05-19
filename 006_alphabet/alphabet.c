#include <stdio.h>
#include "ctype.h"

int main() {
  
    printf("Enter a character : \n");
    char ch = getchar();

    if (isalpha(ch)) {
        printf("the %c is an alphabet\n", ch);
    } else {
        printf("your input is not alphabet\n");
    }
}