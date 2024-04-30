#include<stdio.h>

int main(){
    int matrix[2][3]= {{1,2,3}, {4,5,6} };
    matrix[0][0] =10;
    printf("%d", matrix[0][0]);

    return 0;
}
