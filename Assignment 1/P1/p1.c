#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr1, *ptr2, *ptr3;
    int i;

    
    ptr1 = (int*) malloc(5 * sizeof(int));
    if (ptr1 == NULL) {
        printf("Memory allocation failed for ptr1\n");
        return 1;
    }
    printf("Memory allocated successfully for ptr1\n");

    
    for (i = 0; i < 5; i++) {
        *(ptr1 + i) = i + 1;
    }

    
    printf("Values assigned to ptr1:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", *(ptr1 + i));
    }
    printf("\n");

    
    ptr2 = (int*) calloc(4, sizeof(int));
    if (ptr2 == NULL) {
        printf("Memory allocation failed for ptr2\n");
        return 1;
    }
    printf("Memory allocated successfully for ptr2\n");

    
    for (i = 0; i < 4; i++) {
        *(ptr2 + i) = i * 2;
    }

   
    printf("Values assigned to ptr2:\n");
    for (i = 0; i < 4; i++) {
        printf("%d ", *(ptr2 + i));
    }
    printf("\n");

   
    ptr3 = (int*) realloc(ptr1, 7 * sizeof(int));
    if (ptr3 == NULL) {
        printf("Memory reallocation failed for ptr1\n");
        return 1;
    }
    printf("Memory reallocated successfully for ptr1\n");

    *(ptr3 + 5) = 6;
    *(ptr3 + 6) = 7;

    printf("Values assigned to ptr3:\n");
    for (i = 0; i < 7; i++) {
        printf("%d ", *(ptr3 + i));
    }
    printf("\n");

    free(ptr1);
    free(ptr2);
    free(ptr3);

    return 0;
}
