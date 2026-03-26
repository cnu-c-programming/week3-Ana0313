#include <stdio.h>
#include <stdarg.h>

int average(int count, ...) {
    int sum = 0;
    va_list list; 

    va_start(list, count); 

    
    for (int i = 0; i < count; i++) {
        sum += va_arg(list, int); 
    }

    va_end(list); 

    return sum / count; 
}

int main() {
    printf("%d\n", average(3, 10, 20, 30));
    printf("%d\n", average(5, 10, 20, 30, 40, 50));
    return 0;
}
