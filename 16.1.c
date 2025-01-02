
#include <stdio.h>

int main()
{
    int a = 10;
    int *ptr = &a;
    
    printf("C1:");
    printf("\nGai tri cua a: %d",a );
    printf("\nDia chi cua a: %p",(void*)&a);
    
    printf("\nC2:");
    printf("\nGai tri cua a qua con tro: %d",*ptr );
    printf("\nDia chi cua a qua con tro: %p",(void*)ptr);

    return 0;
}