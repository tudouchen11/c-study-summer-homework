#include <stdio.h>
int main()
{
    int a = 10;
    int *p = &a;
    printf("变量数值：%d\n",a);
    printf("指针访问数值：%d\n",*p);
    return 0;
}
