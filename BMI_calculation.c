#include<stdio.h>
#include <math.h>

void BMI_Calculation(float weight, float height){
    float BMI;
     BMI = weight/pow(height,2);

    printf("Your Body Mass Index is:%f\n",BMI);


    if(BMI<18.5){
        printf("Underweight\n");
    }
    else if(BMI>=18.5 && BMI<=24.9){
        printf("Normal Weight\n");
    }
    else if(BMI>=25 && BMI<=29.9){
        printf("Overweight\n");
    }
    else
        printf("Obesity\n");

}

int main(){
    float weight, height;

    printf("Enter your weight(in kilograms):");
    scanf("%f",&weight);

    printf("Enter your height(in metres):");
    scanf("%f",&height);




    BMI_Calculation(weight,height);


return 0;


}
