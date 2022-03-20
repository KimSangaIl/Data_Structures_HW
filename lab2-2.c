#include <stdio.h>
int main()
{
    printf("[----- [Kim Sangil] [2019038041] -----]\n");
    
    int i;      //int형 변수 선언
    int *ptr;   //int형 포인터 변수 선언
    int **dptr; //int형 이중 포인터 변수 선언
    i = 1234;   //변수 i의 값을 1234로 초기화

    printf("[checking values before ptr = &i] \n");
    printf("value of i == %d\n", i);        //변수 i의 값을 출력
    printf("address of i == %p\n", &i);     //변수 i의 주소 값을 출력
    printf("value of ptr == %p\n", ptr);    //초기화 되지 않은 변수 ptr의 값을 출력
    printf("address of ptr == %p\n", &ptr); //변수 ptr의 주소 값을 출력

    ptr = &i; /* ptr is now holding the address of i */
    printf("\n[checking values after ptr = &i] \n");

    printf("value of i == %d\n", i);        //변수 i의 값을 출력
    printf("address of i == %p\n", &i);     //변수 i의 주소 값을 출력
    printf("value of ptr == %p\n", ptr);    //변수 i의 주소 값으로 초기화된 변수인 ptr의 값을 출력
    printf("address of ptr == %p\n", &ptr); //변수 ptr의 주소 값을 출력
    printf("value of *ptr == %d\n", *ptr);  //ptr의 값을 주소 값으로 갖는 변수인 i의 값을 출력

    dptr = &ptr; /* dptr is now holding the address of ptr */

    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i);            //변수 i의 값을 출력
    printf("address of i == %p\n", &i);         //변수 i의 주소 값을 출력
    printf("value of ptr == %p\n", ptr);        //변수 i의 주소 값으로 초기화된 변수인 ptr의 값을 출력
    printf("address of ptr == %p\n", &ptr);     //변수 ptr의 주소 값을 출력
    printf("value of *ptr == %d\n", *ptr);      //ptr의 값을 주소 값으로 갖는 변수인 i의 값을 출력
    printf("value of dptr == %p\n", dptr);      //변수 ptr의 주소 값으로 초기화된 변수인 dptr의 값을 출력
    printf("address of dptr == %p\n", &dptr);   //변수 dptr의 주소 값을 출력
    printf("value of *dptr == %p\n", *dptr);    //dptr의 값을 주소 값으로 갖는 변수인 ptr의 값을 출력
    printf("value of **dptr == %d\n", **dptr);  //*dptr의 값(ptr의 값)을 주소 값으로 갖는 변수인 i의 값을 출력

    *ptr = 7777; /* changing the value of *ptr */

    printf("\n[after *ptr = 7777] \n");         //ptr이 가리키는 변수 i의 값이 7777로 초기화 됨
    printf("value of i == %d\n", i);            //변수 i의 값을 출력
    printf("value of *ptr == %d\n", *ptr);      //ptr의 값을 주소 값으로 갖는 변수인 i의 값을 출력
    printf("value of **dptr == %d\n", **dptr);  //*dptr의 값(ptr의 값)을 주소 값으로 갖는 변수인 i의 값을 출력

    **dptr = 8888; /* changing the value of **dptr */

    printf("\n[after **dptr = 8888] \n");       //dptr이 이중으로 가리키는 변수 i의 값이 8888로 초기화 됨
    printf("value of i == %d\n", i);            //변수 i의 값을 출력
    printf("value of *ptr == %d\n", *ptr);      //ptr의 값을 주소 값으로 갖는 변수인 i의 값을 출력
    printf("value of **dptr == %d\n", **dptr);  //*dptr의 값(ptr의 값)을 주소 값으로 갖는 변수인 i의 값을 출력

    return 0;
}