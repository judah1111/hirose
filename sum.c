#include <stdio.h>

int main()
{
    int k, l, sum;
    
    printf("Please enter two numbers.>>>");
    scanf("%d %d", &k, &l);
    sum = k + l;
    printf("%d + %d = %d", k, l, sum);
    
    return 0;
}