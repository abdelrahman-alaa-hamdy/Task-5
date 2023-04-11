#include <stdio.h>


#define my_sizeof(type) ((char *)(&type+1) - (char*)(&type))

inline size_t my_sizeof_inline(int type) {
    return (char *)(&type+1) - (char*)(&type);
}

int main() {
    int a = 5;
    double b = 2.5;

    printf("Size of int: %ld bytes\n", sizeof(a));
    printf("Size of double: %ld bytes\n", sizeof(b));

    printf("Size of int using macro: %ld bytes\n", my_sizeof(a));
    printf("Size of double using macro: %ld bytes\n", my_sizeof(b));

    printf("Size of int using inline: %ld bytes\n", my_sizeof_inline(a));
    printf("Size of double using inline: %ld bytes\n", my_sizeof_inline(b));

    return 0;
}
