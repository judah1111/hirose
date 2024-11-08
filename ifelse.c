#include <stdio.h>

int main()
{
    int a, b;
    
    printf("Please enter two numbers:");
    scanf("%d %d", &a, &b);
    
    if(a > b)
    {
        printf("%dは%dより%d大きい\n", a, b, a-b);
    }
    else if(b > a)
    {
        printf("%dは%dより%d大きい\n", b, a, b-a);
    }
    else
    {
        printf("%dと%dは等しい\n", a, b);
    }
    
    return 0;
}