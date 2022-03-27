#include <stdio.h>
#define MAX_SIZE 100                // MAX_SIZE의 메크로를 만든다.

float sum(float [], int);           // 함수 sum을 선언한다.
float input[MAX_SIZE], answer;      // 전역변수 input배열과, answer를 선언한다.
int i;                              // 전역변수 i를 선언한다.

int main(void)
{
    for(i=0; i < MAX_SIZE; i++)     // for문을 사용해 input 배열의 i 번째에 i를 대입한다.
    input[i] = i;

    printf("[----- [이정인] [2019038015] -----]\n\n");

    /* for checking call by reference */
    printf("address of input = %p\n", input);       // input배열의 이름을 출력한다. + 배열의 이름은 배열의 주소값을 나타낸다.

    answer = sum(input, MAX_SIZE);                  // 변수 answer에 sum함수의 계산 결과를 대입한다. 이때 answer에는 input에 있는 값의 총합이 들어간다.
    printf("The sum is: %f\n", answer);             // input의 총합 4950을 출력한다.
}

    float sum(float list[], int n)                  // 함수sum을 정의한다. 매개변수는 배열,정수이고  리턴값은 실수이다.
{
    printf("value of list = %p\n", list);           // 매개변수로 값은 list의 값을 출력한다. + list는 input을 받았으므로 input의 주소값이 출력된다.
    printf("address of list = %p\n\n", &list);      // 매개변수 list 자체의 주소값을 출력한다, 이때는 input과 다른 주소값이 나온다.

    int i;
    float tempsum = 0;

    for(i = 0; i < n; i++)      //함수의 기능이 list가 받은 input배열의 값의 총합이다.
      tempsum += list[i];

    return tempsum;             // sum함수의 리턴값을 알려준다.
}