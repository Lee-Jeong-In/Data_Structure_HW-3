#include <stdio.h>
#include <stdlib.h>

int main()

{
    int list[5];        // list이름의 int자료형 5개로 이루어진 배열을 선언한다.
    int *plist[5];      // plist이름의 int* 자료형 5개로 이루어진 배열을 선언한다.
    
    list[0] = 10;       // list배열의 0번째에 10의 값을 넣는다.
    list[1] = 11;       // list배열의 1번째에 11의 값을 넣는다.

    plist[0] = (int*)malloc(sizeof(int));   // plist[0]에 int형 1개만큼의 바이트로 메모리 할당한다.

    printf("[----- [이정인] [2019038015] -----]\n\n");

    printf("list[0] \t= %d\n", list[0]);                // list[0]에 들어있는 값을 출력한다. 
    printf("address of list \t= %p\n", list);           // list을 출력한다. +  이때, 배열의 이름은 배열의 주소값을 나타낸다.
    printf("address of list[0] \t= %p\n", &list[0]);    // list[0]에 주소값을 출력한다.
    printf("address of list + 0 \t= %p\n", list+0);     // list+0의 값을 출력한다 + 
                                                        // (list+0)에서 이동하는 단위는 배열을 구성하는 자료형만큼 이동하므로 (list+0)는 list[0]을 의미한다. 
    printf("address of list + 1 \t= %p\n", list+1);     // list+1 부터 list+4까지 같은 원리이다.
    printf("address of list + 2 \t= %p\n", list+2);
    printf("address of list + 3 \t= %p\n", list+3);
    printf("address of list + 4 \t= %p\n", list+4);

    printf("address of list[4] \t= %p\n", &list[4]);    // &list[4]는 list+4와 같다.

    free(plist[0]);         // 할당했던 plist[0]의 메모리를 해제시켜준다.
}