#include <stdio.h>
#include <math.h>

#define PI 3.14159


int main(void){
    
    float radius;
    float area;

    printf("\nArea of a Circle Calculator");
    printf("\n===========================\n");
    
    scanf("%f",&radius);

    area = PI * pow(radius,2);

    printf("\nCircumference = %.2f\n\n",area);


}