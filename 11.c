#include <stdio.h>

int main(){
    int myNumber[4] = {5,10,15,20};

    // Get the value of the second element in myNumbers (10)
    printf("%d\n", *(myNumber + 1));

    // Get the value of the third element in myNumbers (15)
    printf("%d", *(myNumber + 2));

    return 0;
}
