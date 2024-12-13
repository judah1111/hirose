#include<stdio.h>
#include<string.h>
#define MAX 50

int main(void)
{
    char str[MAX];
    int j = 0, k = 0, l = 0, m = 0;
    
    printf("Enter your password:");
    scanf("%s", str);
    
    if (strlen(str) < 8){
        printf("Recommend more than 8 characters.\n");
        
        return 0;
    }
    else{
        for (int i = 0; str[i] != '\0'; i++){
            if (str[i] >= 'A' && str[i] <= 'Z'){
                j++;
            }
            else if (str[i] >= 'a' && str[i] <= 'z'){
                k++;
            }
            else if (str[i] >= '0' && str[i] <= '9'){
                l++;
            }
            else{
                m++;
            }
        }
        if (j > 0 && k > 0 && l > 0 && m == 0){
            printf("Your password is strong.\n");
        }
        else if (m > 0){
            printf("Use only upper and lower case numbers.\n");
        }
        else{
            printf("Combine upper and lower case numbers.\n");
        }
    }

    return 0;
}