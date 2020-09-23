#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three numbers:");
    scanf("%d %d %d",&a,&b,&c);

    printf("a = %d\n",a);
    printf("b = %d\n",b);
    printf("c = %d\n",c);

    if(c > b && b > a)
    {
        printf("c > b > a\n");
        printf("one\n");
    }
    else if (a > b && b > c)
    {
        printf("a > b > c\n");
        printf("one\n");
    }
    else
    {
        printf("zero\n");
    }

return 0;
}