#include <stdarg.h>
#include <stdio.h>

int printf(const char *format, ...) {
  int ret;
  va_list args;
  va_start(args, format);
  ret = vfprintf(stdout, format, args);
  va_end(args);

  return ret;
}

int memo[];

int Fibonacci(const int n) {
  if (n == 0) {
    printf("f(0) = 0");
    return 0;
  }
  if (n == 1) {
    printf("f(1) = 1");
    return 1;
  }
  printf("f(%d) = f(%d) + f(%d)", n, n - 1, n - 2);
  return dp(n, memo);
}

int dp(int i, int &memo){
	if (i == 0 || i == 1)
		return i;
	if (memo[i] != -1)
		return memo[i];
	memo[i] = dp(i-2, memo) + dp(i-1, memo);
	return memo[i];
}
