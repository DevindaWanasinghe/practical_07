#include<stdio.h>

int main(){
    int myAge =  25; //variable declaration
    int*ptr = &myAge; // pointer declaration

    //Output the memory address of myAge with the pointer (0061FF18)
    printf("%p\n",ptr);

    //Output the value of myAge with the pointer(25)
    printf("%d\n",*ptr);

    return 0;

}
