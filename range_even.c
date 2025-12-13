#include<stdio.h>

int main()
{
    int start, end;

    printf("Enter start number:");
    scanf("%d", &start);

    printf("Enter end number:");
    scanf("%d",&end);


    printf("Numbers from %d to %d:\n",start,end);

    if (start<end)
    {
        printf("Start number should be larger than end number:");
        return 1;
    }

    for(int i=start; i >=end; i--)
    {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
