#include <stdio.h> 
#include <limits.h> 
#include <float.h> 

int main()
{
    char c = 'i'
    printf("%d\n", c > 96 && c < 123);
    printf("%d\n", c > 64 && c < 91);
    printf("%d\n", c > 47 && c < 58);
    printf("%d\n", c == 9 || c == 10 || c == 32);
    return 0;
}
