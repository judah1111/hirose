#include <stdio.h>
#include<limits.h>
#include<float.h>

int main()
{
    printf("long double型の最大値:%d\n", LDBL_MAX);
    printf("long double型の最小値:%g\n", LDBL_MIN);
    printf("long double型の精度:%d\n", LDBL_DIG);
    printf("long long int型の最大値:%d\n", LLONG_MAX);
    printf("long long int型の最小値:%d\n", LLONG_MIN);
    
    return 0;
}