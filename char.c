#include <stdio.h>

int main()
{
    char small;
    
    printf("アルファベットの小文字を入力してください>>>");
    scanf("%c", &small);
    
    printf("小文字は%c 大文字は%c\n", small, small-32);

    return 0;
}