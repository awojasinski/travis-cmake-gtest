#include <stdio.h>

#include "bar.h"
#include "foo.h"


int main(void) {

    int a = foo_a(10);
    int b = bar_a(10, 20);

    printf("Hello world!\n");

    printf("foo_a(10) = %d\n", a);
    printf("bar_a(10, 20) = %d\n", b);

    return 0;
}