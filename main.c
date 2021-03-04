#include <stdio.h>

int Policz(int a, int b)
{
    return a*b;
}

int main() {
    printf("W drugim branchu; 2*3=%d\n",Policz(2,3));
    return 0;
}
