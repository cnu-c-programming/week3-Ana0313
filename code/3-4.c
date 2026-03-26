#include <stdio.h>
#include <stdarg.h>

int max_of(int n, ...) {
    va_list list;
    int max;

    va_start(list, n);

    max = va_arg(list, int);

    for (int i = 1; i < n; i++) {
        int num = va_arg(list, int); 
        if (num > max) {
            max = num;               
        }
    }

    va_end(list);

    return max;
}

int main() {
    printf("%d\n", max_of(4, 5, 12, 3, 9));
    printf("%d\n", max_of(6, 1, 2, 3, 4, 5, 6));
    printf("%d\n", max_of(3, 100, 200, 300));
    
    return 0;
}
