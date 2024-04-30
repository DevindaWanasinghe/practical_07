#include <stdio.h>

int main(){
    int myNumber[4] = {5,10,15,20};

    //Change the value of the first element to 3
    *myNumber = 3;

    //Change the value of the second element to 7
    *(myNumber +1) = 7;

    printf("%d\n", *myNumber);

    printf("%d\n", *(myNumber + 1));

    return 0;
}
