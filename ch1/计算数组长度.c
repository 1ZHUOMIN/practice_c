#include <stdio.h>

int main()
{
    int res = 0;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    res = sizeof(arr)/sizeof(int);
    printf("%d\n", res);
    return 0;
}
