#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)


void switched();

int main()
{

    switched();

    return 0;
}

void switched()
{
    int a = 200;
    int b = 100;

    char c = 0;

    while (c != 'e')
    {
        printf("\npress '+' to add\npress '-' to minus\npress '*' to multiply\npress '/' to divide\npress 'e' to exit:\n");
        c = getch();

        switch (c)
        {
        case '+': printf("\n%d + %d = %d\n", a, b, a + b);
            break;
        case '-': printf("\n%d - %d = %d\n", a, b, a - b);
            break;
        case '*': printf("\n%d * %d = %d\n", a, b, a * b);
            break;
        case '/': printf("\n%d / %d = %d\n", a, b, a / b);
            break;
        case 'e': c = 'e';
            break;


        default:
            printf("please enter a valid char\n");
            break;
        }

    }
}