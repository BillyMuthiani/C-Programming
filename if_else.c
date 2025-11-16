#include<stdio.h>
int main()
{
    int mark;
    printf("Enter your mark to display your Grade:");
    scanf("%d", &mark);
if(mark>=70&&mark<=100)
    {
        printf("A");

}
else if(mark>=60&&mark<70)
    {
    printf("B");
}
else if (mark>=50&&mark<60)
    {
    printf("C");
}
else if(mark>=40&&mark<50)
    {
    printf("D");
}
else if(mark>=0&&mark<40)
    {
    printf("E");
}
else
    {
    printf("invalid value");}
return 0;

}
