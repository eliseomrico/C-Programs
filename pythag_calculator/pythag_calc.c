#include <stdio.h>
#include <math.h>

int main(void){
    
    float a;
    float b;
    double c;

    printf("Pythagorean Calculator");
    printf("\n\nPlease enter a value for side a: ");
    scanf("%f", &a);
    
    printf("\n\nPlease enter a value for side b: ");
    scanf("%f", &b);

    c = (pow(a,2)+ pow(b,2));

    printf("%.2f\n\n",c);

}