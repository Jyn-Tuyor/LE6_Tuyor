#include <stdio.h>

void addition(int number_1, int number_2)
{
    printf("%d + %d = %d\n", number_1, number_2, (number_1 + number_2));
}

void subtraction(int number_1, int number_2)
{
    printf("%d - %d = %d\n", number_1, number_2, (number_1 - number_2));
}

void multiplication(int number_1, int number_2)
{
    printf("%d * %d = %d\n", number_1, number_2, (number_1 * number_2));
}

void division(int number_1, int number_2)
{
    printf("%d / %d = %d\n", number_1, number_2, (number_1 / number_2));
}

int main()
{

    int number_1;
    int number_2;
    int result = 0;
    int choice;
    while (choice != 5)
    {
        printf("\nMultiple functions to perform Arithmetic Operations\n");

        printf("Enter first number: ");
        scanf("%d", &number_1);

        printf("Enter second number: ");
        scanf("%d", &number_2);

        printf("\nChoose Operation: \n");
        printf("[1] Addition\n");
        printf("[2] Subtraction\n");
        printf("[3] Multiplication\n");
        printf("[4] Division\n");
        printf("[5] Exit\n\n");

        printf("Enter choice [1-5]: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addition(number_1, number_2);
            break;
        case 2:
            subtraction(number_1, number_2);
            break;
        case 3:
            multiplication(number_1, number_2);
            break;
        case 4:
            division(number_1, number_2);
            break;
        default:
            break;
        }
    }
    return 0;
}