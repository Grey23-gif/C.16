#include <stdio.h>
void printArray(int *arr, int size) 
{
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < size; i++) 
    {
        printf("Phan tu thu %d: %d\n", i+1, *(arr + i));
    }
}
void sap_xep_mang(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++) 
    {
        for (int j = i + 1; j < size; j++) 
        {
            if (arr[i] > arr[j]) 
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}


int main() 
{
    int array[] = {1,3,7,9,10,6,2,7,8,11,66,44};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Mang ban dau:\n");
    printArray(array, size);
    sap_xep_mang(array,size);
     printf("Mang sau khi sap xep:\n");
    printArray(array, size);
    
    return 0;
}
