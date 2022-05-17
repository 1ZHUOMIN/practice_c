#include <stdio.h>
void test()
{
    //int a = 1;
    static int a = 1; //使a变为静态的局部变量，也就是保存上一次得到的a
    a++;
    printf("%d\n", a);
}
int main()
{
    int i = 0;
    while(i<5)
    {
        test();
        i++;
    }
    return 0;
}
