#include <stdio.h>
#include <stdlib.h>

void main()

{
    int list[5];                                // list이름의 int자료형 5개로 이루어진 배열을 선언한다.
    int *plist[5] = {NULL,};                    // plist이름의 int* 자료형 5개로 이루어진 배열을 선언한다.

    plist[0] = (int *)malloc(sizeof(int));      // plist[0]에 int형 1개만큼의 바이트로 메모리 할당한다.

    list[0] = 1;                                // list배열의 0번째에 1의 값을 넣는다.
    list[1] = 100;                              // list배열의 1번째에 100의 값을 넣는다.

    *plist[0] = 200;                            // plist[0]이 가르키는 변수에 200의 값을 넣는다.

    printf("[----- [이정인] [2019038015] -----]\n\n");
    
    printf("value of list[0] = %d\n", list[0]);                 // list[0]에 들어있는 값을 출력한다.
    printf("address of list[0] = %p\n", &list[0]);              // list[0]에 주소값을 출력한다.
    printf("value of list = %p\n", list);                       // list의 값을 출력한다 + 배열의 이름은 주소값이므로 %p로 출력한다.
    printf("address of list (&list) = %p\n", &list);            // &list의 값을 출력한다 + &list는 list의 주소값을 출력한다.

    printf("----------------------------------------\n\n");
    printf("value of list[1] = %d\n", list[1]);                 // list[1]에 들어있는 값을 출력한다. 
    printf("address of list[1] = %p\n", &list[1]);              // list[1]에 주소값을 출력한다.
    printf("value of *(list+1) = %d\n", *(list + 1));           // *(list+1)의 값을 출력한다 + 
                                                                // (list+1)에서 이동하는 단위는 배열을 구성하는 자료형만큼 이동하므로 (list+1)는 list[1]을 의미하고, 
                                                                // *(list+1)은 list[1]의 값을 나타낸다.
    printf("address of list+1 = %p\n", list+1);                 // list+1의 값을 출력한다 + list+1는 list+1의 주소값을 출력한다.

    printf("----------------------------------------\n\n");
    printf("value of *plist[0] = %d\n", *plist[0]);             // plist[0]이 가르키는 변수의 값을 출력한다.
    printf("&plist[0] = %p\n", &plist[0]);                      // plist[0]의 주소를 출력한다.
    printf("&plist = %p\n", &plist);                            // &plist을 출력한다. &plist == plist의 주소
    printf("plist = %p\n", plist);                              // plist를 출력한다. + 배열의 이름은 배열의 주소이다.
    printf("plist[0] = %p\n", plist[0]);                        // plist[0]의 값을 출력한다.

                                                                // plist[1]~plist[4]는 NULL로 설정했기 때문에 값은 NULL로 처리된다.
    printf("plist[1] = %p\n", plist[1]);                        // plist[1]의 값을 출력한다.
    printf("plist[2] = %p\n", plist[2]);                        // plist[2]의 값을 출력한다.
    printf("plist[3] = %p\n", plist[3]);                        // plist[3]의 값을 출력한다.
    printf("plist[4] = %p\n", plist[4]);                        // plist[4]의 값을 출력한다.

    free(plist[0]);                         // 할당했던 plist[0]의 메모리를 해제시켜준다.
}