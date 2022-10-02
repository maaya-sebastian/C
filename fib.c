// a c program to find the fibonacci series upto desired sequence.
#include <stdio.h>
int main()
{
  int i, n;
  int t1 = 0, t2 = 1;
  int d = t1 + t2;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  printf("Fibonacci Series:\n%d\n%d\n", t1, t2);
  for (i = 3; i <= n; ++i)
  {
    printf("%d\n", d);
    t1 = t2;
    t2 = d;
    d = t1 + t2;
  }
  return 0;
}

/*(in linux terminal)
for compilation : cc fib.c
for execution : ./a.out

OUTPUT :
Enter the number of elements: 6
Fibonacci Series:
0
1
1
2
3
5
*/
