#include<stdio.h>
#include<stdlib.h>          // 이중 포인터를 사용하기 위해서 필요한 헤더파일이다.

int main()
{
    int **x;                // int 이중포인터 x를 선언한다.

    printf("[----- [이정인] [2019038015] -----]\n\n");

    printf("sizeof(x) = %lu\n", sizeof(x));         
    printf("sizeof(*x) = %lu\n", sizeof(*x));
    printf("sizeof(**x) = %lu\n", sizeof(**x));

    /* 
        포인터를 사용하기 위해서는
        포인터가 가르키는 변수의 자료형과 포인터의 자료형이 일치해야 한다.
        이중포인터는 포인터를 한번더 포인터하기 때문에
        포인터를 담는 변수가 포인터로 가르키는 변수의 자료형인 int가 되어야한다.
        따라서, x  *x  **x의 크기는  int형인 4byte가 된다.
    */

}
