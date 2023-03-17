#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("First Call\n");
    function();
    printf("Second Call\n");
    function();
    printf("Third Call\n");
    function();
    return 0;
}
void function()
{
    int x = 20; // local variable
    static int y = 37; // static variable
    x = x + 102;
    y = y + 17;
    printf("\tLocal: %d\n\tStatic: %d\n", x, y);
}

