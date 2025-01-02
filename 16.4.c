#include <stdio.h>
void printArray(int *arr, int size) 
{
    for (int i = 0; i < size; i++) 
    {
        printf("Phan tu thu %d: %d\n", i+1, *(arr + i));
    }
}

int main() 
{
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Cac phan tu trong mang la:\n");
    printArray(array, size);

    return 0;
}
