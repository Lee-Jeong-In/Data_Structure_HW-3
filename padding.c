 #include <stdio.h>

struct student {                        // 여러개의 자료형을 묶어놓은 구조체 struct를 선언한다.
char lastName[13]; /* 13 bytes */
int studentId; /* 4 bytes */
short grade; /* 2 bytes */
};

int main()
{
    printf("[----- [이정인] [2019038015] -----]\n\n");

    struct student pst;             // 사용자가 지정한 자료형 student를 사용한 pst변수를 선언한다.

    printf("size of student = %ld\n", sizeof(struct student));      // student 자료형의 크기를 출력한다.
    printf("size of int = %ld\n", sizeof(int));                     // int 자료형의 크기를 출력한다.
    printf("size of short = %ld\n", sizeof(short));                 // short 자료형의 크기를 출력한다.

    /* 
       자료형 student의 크기는 24 바이트가 나온다.   
       student를 구성하는 자료형들의 크기를 전부 더하면 19바이트인데,
       student의 크기가 24 바이트라는 것은 5바이트가 구조체를 구성하면서 
       padding되었다는 것을 알 수 있다.
    */

    return 0;
}