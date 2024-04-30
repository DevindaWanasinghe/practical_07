#include<stdio.h>
#include<math.h>

int main(){
    float num1;
    printf("Enter Your Number: ");
    scanf("%f",&num1);
    printf("Nearest Upwards Integer: %f\n", ceil(num1));
    printf("Nearest Downwards Integer: %f\n", floor(num1));

    return 0;
}
