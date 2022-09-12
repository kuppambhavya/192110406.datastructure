#include<stdio.h>
void fib(int a, int b, int sum, int N)
{
if (N != 0) {
printf(" %d", a);
sum = a + b;
a = b;
b = sum;
N--;
fib(a, b, sum, N);
}
}
int main()
{
int N = 10;
fib(0, 1, 0, N);
return 0;
}
