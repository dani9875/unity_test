#include <stdio.h>
#include "test_component.h"

int main() {
    int c = 0;
    c = add(1, 2);
    printf("Hello, World! Result %d\n", c);
    return 0;
}
