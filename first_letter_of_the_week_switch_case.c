#include<stdio.h>
#include<ctype.h>
int main()
{
    char first_letter , second_letter;
    printf("Enter the first letter of the day: ");
    scanf("%c", &first_letter);
    first_letter = toupper(first_letter);

    switch(first_letter){
    case 'M':
        printf("Monday");
        break;
    case 'T':
        printf("Enter second character (U for Tuesday , H for Thursday:\n ");
        scanf(" %c", &second_letter);
        second_letter=toupper(second_letter);
        if(second_letter=='U')
            printf("Tuesday");
        else if(second_letter=='H')
            printf("Thursday");
        else
            printf("Invalid Character");

        break;
    case 'W':
        printf("Wednesday");
        break;
    case 'F':
        printf("Friday");
        break;
    case 'S':
        printf("Enter second character (A for Saturday , U for Sunday:\n");
        scanf(" %c", &second_letter);
        second_letter=toupper(second_letter);
        if(second_letter=='A')
            printf("Saturday");
        else if(second_letter=='U')
            printf("Sunday");
        else
            printf("Invalid Character");
        break;
    default:
        printf("invalid character");
        break;
    return 0;
    }



}
