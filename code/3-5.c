#include <stdio.h>
#include <stdarg.h>

void my_sum(char type, int n, ...) {
    va_list list;
    va_start(list, n);

    if (type == 'S') { 
        for (int i = 0; i < n; i++) {
            printf("%s", va_arg(list, char*)); 
            if (i < n - 1) {
                printf(" "); 
            }
        }
        printf("\n");
    } 
    else if (type == 'C') { 
        for (int i = 0; i < n; i++) {
            printf("%c", va_arg(list, int)); 
        }
        printf("\n");
    } 
    else if (type == 'D') { 
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += va_arg(list, int); 
        }
        printf("%d\n", sum);
    }

    va_end(list);
}

int main() {
    my_sum('S', 2, "Hello", "World");
    my_sum('C', 3, 'C', 'N', 'U');
    my_sum('D', 4, 10, 20, 30, 40);

    return 0;
}
