#include <stdio.h>
int main()
{
    int x, y;
    for(x=0; y=0; ++x,y++)  //当条件判断部分为0（假）时，不会进入循环
    {
        printf("hi\n");
    }
    return 0;
}
