#include <stdio.h>
#include <stdlib.h>
void nhapmang(int *arr,int n)
{
    
    for(int i=0;i<n;i++)
    {
        printf("Nhap phan tu thu %d: ",i+1);
        scanf("%d",&arr[i]);
    }
}
void hoandoi(int **arr,int *n,int array,int vitri)
{
    for (int i =*n; i >= vitri - 1; i--) 
    {
        (*arr)[i+1] = (*arr)[i];
    }
    (*arr)[vitri-1] = array;
    (*n)++;
}

int main()
{
   int *arr;
   int n=0;
   int array,vitri;
   printf("Nhap so luong phan tu mang: ");
    arr = (int *)malloc(n * sizeof(int));
   scanf("%d",&n);
   nhapmang( arr, n);
   printf("Nhap phan tu can them: ");
    scanf("%d",&array);
    printf("Nhap vi tri can them: ");
    scanf("%d",&vitri);
   hoandoi(&arr, &n, array, vitri);
   printf("Mang sau khi them: ");
   for(int i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
    free(arr);
    return 0;
}