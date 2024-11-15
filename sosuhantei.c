#include <stdio.h>

int main(void)
{
    int i;
    
    printf("Please enter a number:");
    scanf("%d", &i);
    
    if (i == 1){
        printf("Not a prime number.\n");
    }
    else if (i == 2){
        printf("A prime number.");
    }
    else if (i % 2 == 0){
        printf("Not a prime number.\n");
    }
    else{
        for (int k = i; k <= 0; k -= 2){
            if (i % k -2 == 0){
                printf("Not a prime number.\n");
                return 0;
            }
            else{
                break;
            }
        }
        printf("A prime number.\n");
    }
    
    return 0;
}