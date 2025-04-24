
#include <stdio.h>

int main()
{
    int num1 = 12;
    int num2 = 12;
    
    printf("num1: %d\n", num1);
    printf("num1++: %d\n", num1++); //후위 증가
    printf("num1: %d\n", num1); //증가 된 값 

    printf("num2: %d\n", num2);
    printf("++num2: %d\n", ++num2);
    printf("num2: %d", num2);
   
    return 0;
}


