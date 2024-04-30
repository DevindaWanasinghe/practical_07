#include<stdio.h>
#include<math.h>

int main(){
    float num1, answer;
    int num2;
    printf("Enter your number and power: ");
    scanf("%f %d", &num1, &num2);

    answer = pow(num1, num2);

    printf(" You Entered Value of %.2f and power of %.d answer is: %.2f\n ",num1,num2,answer);

    return 0;

}
