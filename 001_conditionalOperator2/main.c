#include <stdio.h>


int main()
{
    int num;
    printf("tell me a number between 1 to 100\n");
    scanf(" %d",&num);

    printf("%d %s divisible by 2.\n",num,(num % 2 == 0)?("is"):("is not"));



    int num2;

   /*
    do{
        printf("tell me a number between 1 to 10\n");
        scanf(" %d",&num2);

        if((num2 > 10) || (num2 < 1))
        {
            printf("Incorrect number !! \n");
        }
        else{
            if(num2 % 2 == 0){
                printf("%d is even.\n",num2);
            }else{
                printf("%d is odd.\n",num2);
            }
        }

    }while(num2 > 10 || num2 < 1);

*/

    //do with conditional operators
    do{
        printf("tell me a number between 1 to 10\n");
        scanf(" %d",&num2);

        if((num2 > 10) || (num2 < 1))
            {
                printf("Incorrect number !! \n");
            }else
            {
                printf("the %d is %s.\n",num2,(num2 % 2 == 0)?("even"):("odd"));
            }
    }while(num2 > 10 || num2 < 1);
    return 0;
}
