#include <stdio.h>
void printArray(int *arr, int size) 
{
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < size; i++) 
    {
        printf("Phan tu thu %d: %d\n", i+1, *(arr + i));
    }
}
void search_array(int *arr,int size,int search)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==search)
        {
            printf("Phan tu ban can tim o vi tri: %d",i+1);
        }
    }
}


int main() 
{
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Mang ban dau:\n");
    printArray(array, size);
    int search;
    printf("\nNhap phan tu muon tim : ");
    scanf("%d",&search);
    search_array(array,size,search);
    
    return 0;
}
