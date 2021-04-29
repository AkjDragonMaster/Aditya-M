#include <stdio.h>

int main()
{
    for(char ch = 65; ch <= 122;ch++){
        if(ch <= 90 || ch >= 97){
            printf("%c \n", ch);
        }
    }

    return 0;
}

