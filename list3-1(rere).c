#include <stdio.h>
#include<limits.h>
#include<float.h>

int main()
{
    printf("long double型の最大値:%Le\n", LDBL_MAX);
    printf("long double型の最小値:%Le\n", LDBL_MIN);
    printf("long double型の精度:%Lf\n", LDBL_DIG);
    
    return 0;
}