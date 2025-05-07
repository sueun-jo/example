#include <stdio.h>

typedef struct div{
    int q; //몫 
    int r; //나머지
} Div;

extern Div IntDiv(int num1, int num2);

int main(void){
    Div val = IntDiv (5,2);
    printf("몫: %d \n", val.q);
    printf("나머지 : %d \n", val.r);
    return 0;
}