//////Fibonacci Series using Recursion
//#include<bits/stdc++.h>
//using namespace std;
//
//int fib(int n)
//{
//	if (n <= 1)
//		return n;
//	return fib(n-1) + fib(n-2);
//}
//
//int main ()
//{
//	int n = 9;
//	cout << fib(n);
//	return 0;
//}
#include<stdio.h>

int Fibonacci(int);

int main()
{
   int n, i = 0, c;

   scanf("%d",&n);

   printf("Fibonacci series\n");

   for ( c = 1 ; c <= n ; c++ )
   {
      printf("%d\n", Fibonacci(i));
      i++;
   }

   return 0;
}

int Fibonacci(int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( Fibonacci(n-1) + Fibonacci(n-2) );
}
