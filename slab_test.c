#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char* argv[]) {
    char* m1 = (char*)my_malloc(30);
    printf(1, "m1 virtual address:; %p\n", m1);
    m1[0] = 'A';
    printf(1, "m1[0] data: %c\n\n", m1[0]);

    char* m2 = (char*)my_malloc(29);
    printf(1, "m2 virtual address:; %p\n", m2);
    m2[0] = 'A';
    printf(1, "m2[0] data: %c\n\n", m2[0]);

    char* m3 = (char*)my_malloc(28);
    printf(1, "m3 virtual address:; %p\n", m3);
    m3[0] = 'A';
    printf(1, "m3[0] data: %c\n\n", m3[0]);

    char* m4 = (char*)my_malloc(27);
    printf(1, "m4 virtual address:; %p\n", m4);
    m4[0] = 'A';
    printf(1, "m4[0] data: %c\n\n", m4[0]);

    my_free(m1);
    my_free(m2);
    my_free(m3);
    my_free(m4);
    exit();
}
