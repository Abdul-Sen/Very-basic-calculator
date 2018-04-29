#include <stdio.h>
#include <stdlib.h>

int main()
{
    char user_input = 'A';
    char buffer[255];
    float a = 0, b = 0, temp = 0;
    int counter = 0;
    do {
    if (counter>0)
    gets(buffer);
    /// ^Collecting trash
    printf("\nPlease enter the operand you wish to use ( +, -, *, /), enter Q to quit >> ");
    scanf("%c", &user_input);
    temp = 0;
    switch(user_input)
    {
    case('+'):
        printf("\nPlease enter number 1 > " );
        scanf("%f", &a);
        printf("\nPlease enter number 2 > " );
        scanf("%f", &b);
        temp = a+b;
        printf("%.1f + %.1f = %.1f",a,b,temp);
        break;

    case('-'):
        printf("\nPlease enter number 1 > " );
        scanf("%f", &a);
        printf("\nPlease enter number 2 > " );
        scanf("%f", &b);
        temp = a - b;
        printf("%.1f - %.1f = %.1f",a,b,temp);
        break;

    case('*'):
        printf("\nPlease enter number 1 > " );
        scanf("%f", &a);
        printf("\nPlease enter number 2 > " );
        scanf("%f", &b);
        temp = a*b;
        printf("%.1f * %.1f = %.1f",a,b,temp);
        break;

    case('/'):              ///No modulus implimentation for our basic calc
    case('%'):
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
    counter++;
    }while(user_input!='Q' && user_input!= 'q');
}
