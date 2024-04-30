#include <stdio.h>
#include <math.h>

void sqrt_func(){
    float num;
    printf("Enter Number: " );
    scanf("%f",&num);
    printf("%.2f\n", sqrt(num));
}

int main(){
    sqrt_func();

    return 0;
}
