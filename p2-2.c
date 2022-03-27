#include <stdio.h>

void print1 (int *ptr, int rows);       // print1함수을 선언한다.

int main()
{
    int one[] = {0, 1, 2, 3, 4};        // 배열 one을 값과 함께 선언한다.

    printf("[----- [이정인] [2019038015] -----]\n\n");

    printf("one = %p\n", one);              // 배열 one의 값을 출력한다 + 배열의 이름은 배열의 주소이다.
    printf("&one = %p\n", &one);            // 배열 one의 주소값을 출력한다.
    printf("&one[0] = %p\n", &one[0]);      // 배열 one[0]의 주소값을 출력한다. + 배열의 시작 주소와 같다.
    printf("\n");

    print1(&one[0], 5);                     // 함수 print1을 호출하여 수행하면 이때, 배열 one의 내용이 출력된다.

    return 0;
}

void print1 (int *ptr, int rows)        // 함수 print1는 매개변수로 포인터 자료형과 int자료형을 받는다.
{
    /* print out a one-dimensional array using a pointer */

    int i;
    printf ("Address \t Contents\n");

    for (i = 0; i < rows; i++)                       //함수의 기능을 설명하는 부분이다.
       printf("%p \t %5d\n", ptr + i, *(ptr + i));   // 매개변수로 받은 ptr이 가르키는 배열의 내용를 출력하는 기능을 한다.
    printf("\n");
}