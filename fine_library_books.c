#include<stdio.h>

int main(){
    int BookID,DueDate,ReturnDate,days_overdue;
    printf("Enter Book ID:");
    scanf("%d",&BookID);

     printf("Enter Return Date:");
    scanf("%d",&ReturnDate);

     printf("Enter Due Date:");
    scanf("%d",&DueDate);

    days_overdue =ReturnDate-DueDate;

    if(days_overdue<=0){
        printf("No fine ,book returned on time\n");
    }

    else if(days_overdue<=7){
        printf("Fine Amount is ksh 20\n");
    }
    else if(days_overdue>=8 && days_overdue<=14){
        printf("Fine Amount is ksh 50\n");
    }
    else
        printf("Fine Amount is ksh 100\n");
return 0;

}
