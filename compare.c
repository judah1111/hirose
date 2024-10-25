#include <stdio.h>

int main()
{
    int k, l, a, b;
    
    printf("Please enter two numbers.>>>");
    scanf("%d %d", &k, &l);
    if (k > l)
    {
        a = k - l;
        printf("%d is %d larger than %d.\n", k, a, l);
    }
    else if (k < l)
    {
        b = l - k;
        printf("%d is %d larger than %d.\n", l, b, k);
    }
    else
    {
        printf("Two numbers are equal.\n");
    }
    
    return 0;
}