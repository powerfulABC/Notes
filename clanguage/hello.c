#include <stdio.h>

// 加速exp，表现出期待exp为真
#define likely(exp) __builtin_expect(!!(exp), 1) 
#define unlikely(exp) __builtin_expect(!!(exp), 0)

int main(int argc, char *argv)
{
    int a = 3;
    if (likely(a > 0))
    {
        printf("a > 0\n");
    }

    return 0;
}