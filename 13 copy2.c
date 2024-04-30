#include<stdio.h>


int main()
{
   int num1=10;
   int num2=20;
   int *num11,c;
   num11=&num1;
   c=num2;
   num2=*num11;
   num1=c;

   printf("1.%d\n",num1);
   printf("2.%d\n",num2);



    return 0;
}
