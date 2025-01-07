#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void reverseString(char *input, char *output) 
{
    int length = strlen(input);
    for (int i = 0; i < length; i++) 
    {
        output[i]=input[length-1-i];
    }
}

int main()
{
    char *inputstring = (char *)malloc(1000 * sizeof(char));  
    char *reversestring = (char *)malloc(1000 * sizeof(char)); 
    printf("Nhap vao mot chuoi: ");
    fgets(inputstring,1000,stdin);
    reverseString( inputstring,reversestring);
    printf("Chuoi ban nhap la: %s",inputstring);
    printf("Chuoi dao nguoc la: %s",reversestring);
    

    return 0;
}