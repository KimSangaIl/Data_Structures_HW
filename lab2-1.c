#include <stdio.h>
int main()
{
    printf("[----- [Kim Sangil] [2019038041] -----]\n");
    
    char charType;      //char형 변수 선언
    int integerType;    //int형 변수 선언
    float floatType;    //float형 변수 선언
    double doubleType;  //double형 변수 선언

    printf("Size of char: %ld byte\n",sizeof(charType));      //char형 변수의 크기 출력
    printf("Size of int: %ld bytes\n",sizeof(integerType));   //int형 변수의 크기 출력
    printf("Size of float: %ld bytes\n",sizeof(floatType));   //float형 변수의 크기 출력
    printf("Size of double: %ld bytes\n",sizeof(doubleType)); //double형 변수의 크기 출력

    printf("-----------------------------------------\n");

    printf("Size of char: %ld byte\n",sizeof(char));          //자료형 char의 크기 출력
    printf("Size of int: %ld bytes\n",sizeof(int));           //자료형 int의 크기 출력
    printf("Size of float: %ld bytes\n",sizeof(float));       //자료형 float의 크기 출력
    printf("Size of double: %ld bytes\n",sizeof(double));     //자료형 double의 크기 출력

    printf("-----------------------------------------\n");

    printf("Size of char*: %ld byte\n",sizeof(char*));        //char형 포인터의 크기 출력
    printf("Size of int*: %ld bytes\n",sizeof(int*));         //int형 포인터의 크기 출력
    printf("Size of float*: %ld bytes\n",sizeof(float*));     //float형 포인터의 크기 출력
    printf("Size of double*: %ld bytes\n",sizeof(double*));   //double형 포인터의 크기 출력
    //포인터는 주소 값을 저장하기 때문에 모든 포인터 크기는 동일하다.
    return 0;
}