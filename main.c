#include <stdio.h>

int Policz(int a, int b)
{
    return (a+b)*(a-b);
}

int main() {
    printf("W trzecim branchu; (2+3)*(2-3)=%d\n",Policz(2,3));
    return 0;
}
