#include<stdio.h>
int main()
{
    int a,b;
    while(1)
    {
    scanf("%d%d",&a,&b);
    a^=b;
    printf("%d\n",a);
    }
    return 0;
}
