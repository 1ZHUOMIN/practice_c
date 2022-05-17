#include <stdio.h>
int main()
{
    int a = 0; //0
    int b = 5; //非0
    int c = a&&b;
    int d = a||b;
    printf("%d\n%d\n", c, d);
    return 0;
} 
