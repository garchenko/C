#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;
    *p = *p + 5;
    printf("%d", x);
    return 0;
}
