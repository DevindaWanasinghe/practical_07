#include<stdio.h>

int main(){
    int myAge =  25; //An int variable
    int*ptr = &myAge; // A pointer variable, with the name ptr, that stores the address of myAge

    //Output the value of myAge(25)
    printf("%d\n", myAge);

    //Output the memory address of myAge(0061FF18)
    printf("%p\n", &myAge);

    //Output the memory address of myAge with the pointer (0061FF18)
    printf("%p\n",ptr);

    return 0;

}
