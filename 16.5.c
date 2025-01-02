#include <stdio.h>
void printArray(int *arr, int size) 
{
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < size; i++) 
    {
        printf("Phan tu thu %d: %d\n", i+1, *(arr + i));
    }
}
void updateElement(int *arr, int size, int newValue, int position) 
{
    if (position >= 0 && position < size)
    {
        *(arr + position) = newValue;      
    } else 
    {
        printf("Vi tri cap nhat khong hop le!\n");
    }
}

int main() 
{
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Mang ban dau:\n");
    printArray(array, size);
    int new,position;
    printf("\nNhap phan tu moi: ");
    scanf("%d",&new);
    printf("Nhap vi tri cna them: ");
    scanf("%d",&position);
    
     updateElement(array, size, new, position);
     
    printf("\nMang sau khi them:\n");
    printArray(array, size);

    return 0;
}
