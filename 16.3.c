
#include <stdio.h>
int tong(int *x,int *y)
{
    int sum=*x+*y;
    return sum;
}

int main()
{
    int a = 10,b=100;
    int sum=tong(&a,&b);
    printf("Tong cua 2 so la: %d",sum);

    return 0;
}