#include <stdio.h>
#include <stdlib.h>

int main()
{
    char user_input = 'A';
    float a = 0, b = 0, temp = 0;
do{
    printf("\nPlease choose what you want to do:\n A-)Addition(+)\n B-)Subtraction(-)\n C-)Multiplication(*)\n D-)Division(/)");
    printf("\n Q-)Quit program\n >> ");
    scanf(" %c", &user_input);

    temp = 0;
    switch(user_input)
    {
    case('A'):
    case('a'):
        printf("\nPlease enter number 1 > " );
        scanf("%f", &a);
        printf("\nPlease enter number 2 > " );
        scanf("%f", &b);
        temp = a+b;
        printf("%.1f + %.1f = %.1f",a,b,temp);
        break;

    case('b'):
    case('B'):
        printf("\nPlease enter number 1 > " );
        scanf("%f", &a);
        printf("\nPlease enter number 2 > " );
        scanf("%f", &b);
        temp = a - b;
        printf("%.1f - %.1f = %.1f",a,b,temp);
        break;

    case('c'):
    case('C'):
        printf("\nPlease enter number 1 > " );
        scanf("%f", &a);
        printf("\nPlease enter number 2 > " );
        scanf("%f", &b);
        temp = a*b;
        printf("%.1f * %.1f = %.1f",a,b,temp);
        break;

    case('D'):
    case('d'):
        printf("\nPlease enter number 1 > " );
        scanf("%f", &a);
        printf("\nPlease enter number 2 > " );
        scanf("%f", &b);
        temp = a/b;
        printf("%.1f/%.1f = %.1f",a,b,temp);
        break;
    case('q'):
    case('Q'):
        printf("\nGood Bye!");
        break;
    default:
        printf("\nERROR!");
    }
}while (user_input!='Q' && user_input!='q');
}
