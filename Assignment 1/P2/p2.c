#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr1, *ptr2, *ptr3, *ptr4;
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

    free(ptr1);
    printf("Memory allocated to ptr1 has been freed\n");

    ptr4 = (int*) malloc(10 * sizeof(int));
    if (ptr4 == NULL) {
        printf("Memory allocation failed for ptr4\n");
        return 1;
    }
    printf("Memory allocated successfully for ptr4\n");

    for (i = 0; i < 10; i++) {
        *(ptr4 + i) = i + 10;
    }

    printf("Values assigned to ptr4:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", *(ptr4 + i));
    }
    printf("\n");

    free(ptr2);
    free(ptr3);
    free(ptr4);

    return 0;
}
