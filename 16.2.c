
#include <stdio.h>
void doi_cho(int *a,int *b)
{
    int temp= *a;
    *a=*b;
    *b=temp;
}

int main()
{
    int a = 10,b=100;
  
    printf("Truoc khi hoan doi:\n");
    printf("a = %d, b = %d\n", a, b);

    doi_cho(&a, &b);

    printf("Sau khi hoan doi:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}