#include <stdio.h>
#include <string.h>

int main(){

    int i;
    char msg[25];

    printf("type into 25 character and then press enter : \n");
    for(i = 0 ; i < 25 ; i++)
    {
        msg[i] = getchar();
        if(msg[i] == '\n')
        {
            i--;
            break;
        }
    }
    putchar('\n');

    for(int j =0 ; j <= i ; j++)
    {
        putchar(msg[j]);
    }
    putchar('\n');
    return 0;
}