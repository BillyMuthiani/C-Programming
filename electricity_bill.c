#include<stdio.h>

int main(){
    int CustomerID,UnitConsumed;
    float totalbill,surcharge,charges_per_unit;
    char CustomerName[50];

    printf("Enter Customer ID:");
    scanf("%d",&CustomerID);

    printf("Enter Customer Name:");
    scanf("%s",&CustomerName);

    printf("Enter Units Consumed:");
    scanf("%d",&UnitConsumed);

    if(UnitConsumed<=199){
        charges_per_unit=1.20;
    }
    else if(UnitConsumed>=200 && UnitConsumed<400){
        charges_per_unit=1.50;
    }
    else if(UnitConsumed>=400 && UnitConsumed<600){
        charges_per_unit=1.80;
    }
    else
        charges_per_unit=2.00;

    totalbill=UnitConsumed * charges_per_unit;

    if(totalbill>400){
        surcharge=totalbill * 0.15;
    }
    else
        surcharge=0;

    totalbill+=surcharge;

    if(totalbill<100){
        totalbill=100;
    }

    printf("\nCustomer ID:%d\nCustomer Name:%s\nUnits consumed:%d\nCharges per unit:%.2f\nSurcharge:%.2f\nTotal bill:%.2f\n",CustomerID,CustomerName,UnitConsumed,charges_per_unit,surcharge,totalbill);

return 0;




}
