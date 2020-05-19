#include <stdio.h>
#include <string.h>


int main()
{
    char name[15];
    char family[15];
    char fullname[30]="";


    puts("Enter your firstname : ");
    gets(name);

    puts("Enter your last name : ");
    gets(family);

    strcat(fullname, name);
    strcat(fullname, " ");
    strcat(fullname, family);

    printf("Hello dear %s .",fullname);
    
    return (0);
}




