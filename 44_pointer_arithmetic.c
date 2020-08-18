#include <stdio.h>

int main(void)
{
    int i = 34;
    int *ptr_to_int = &i;
    printf("\nThe value of pointer is %u.\n", ptr_to_int);
    ptr_to_int++; // Adding 4 bytes to the address by 1 increment, because integer in 64-bit archeitecture is 4 bytes.
    printf("The value of pointer is %u.\n\n", ptr_to_int);

    char j = 'A';
    char *ptr_to_char = &j;
    printf("\nThe value of pointer is %u.\n", ptr_to_char);
    ptr_to_char++; // Increment of address by 1 byte because char takes 1 byte.
    printf("The value of pointer is %u.\n\n", ptr_to_char);

    float k = 3.4;
    float *ptr_to_float = &k;
    printf("\nThe value of pointer is %u.\n", ptr_to_float);
    ptr_to_float++; // float also takes 4 bytes.
    printf("The value of pointer is %u.\n\n", ptr_to_float);
    
    return 0;
}