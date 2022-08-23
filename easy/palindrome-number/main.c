#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) {  
  if (x < 0)
    return (false);

  long reversed = 0;
  long remainder = 0;
  int old_number = x;

  while (x > 0)
  {
    remainder = x % 10;
    reversed = reversed * 10 + remainder;
    x /= 10;
  }

  return (old_number == reversed);
}

int main(void) {
  printf("TRUE: %d\n", isPalindrome(121));
  printf("TRUE: %d\n", isPalindrome(992299));
  printf("TRUE: %d\n", isPalindrome(0));

  printf("FALSE: %d\n", isPalindrome(-121));
  printf("FALSE: %d\n", isPalindrome(9223));
  printf("FALSE: %d\n", isPalindrome(10));
}