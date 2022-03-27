#include <stdio.h>

struct student1 {       //struct 구조체를 구성하고 선언한다.
    char lastName;
    int studentId;
    char grade;
};

typedef struct {        // typedef 구조체를 구성하고 선언한다.
    char lastName;
    int studentId;
    char grade;
} student2;

                        // typedef와 struct의 차이점은 alias(여기서는 student2)의 유무이다.

int main() {

    struct student1 st1 = {'A', 100, 'A'};                  // 자료형이 student인 st1을 선언한다.
                                                            // 하지만 이때, student1앞에 struct를 꼭사용 해줘야 한다.

    printf("[----- [이정인] [2019038015] -----]\n\n");

    printf("st1.lastName = %c\n", st1.lastName);            // 선언한 변수 st1의 하위 변수로 접근하기 위해선 .연산자를 사용해서 접근한다.
    printf("st1.studentId = %d\n", st1.studentId);          // 이하 동일
    printf("st1.grade = %c\n", st1.grade);                  // 이하 동일

    student2 st2 = {'B', 200, 'B'};                         // alias인 student2 바로 자료형으로 사용할 수 있다.

    printf("\nst2.lastName = %c\n", st2.lastName);          // struct와 똑같이 하위 변수로 접근하기 위해서는 .연산자를 사용한다.
    printf("st2.studentId = %d\n", st2.studentId);          // 이하 동일
    printf("st2.grade = %c\n", st2.grade);                  // 이하 동일

    student2 st3;                                           // 자료형 student2를 사용해 st3를 만들어 준다.

    st3 = st2;                                              // 만들어진 str3에 str2를 복사한다.

    printf("\nst3.lastName = %c\n", st3.lastName);          // str3의 내용을 출력해본다.
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade = %c\n", st3.grade);

    // /* equality test */                                  
    // if(st3 == st2) /* not working */                        // st3과 st2는 구조체 형식으로 되어있다.
    //   printf("equal\n");                                    // 따라서 변수 st3와 st2의 내용적인 부분을 비교하기 위해선
    // else                                                    // 포인터 형식이 있어야 한다.
    //   printf("not equal\n");

    return 0;
}