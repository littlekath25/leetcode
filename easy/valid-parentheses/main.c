#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool isValid(char *s) {
  int len = strlen(s);
  char *stack = (char *)calloc(sizeof(char), len + 1);
  int index = 0;
  int i = 0;

  while (s[i])
  {
    if (s[i] == '(' || s[i] == '{' || s[i] == '[')
    {
      stack[index] = s[i];
      index++;
    }
    else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
    {
      if (stack[index] != s[i])
        return (false);
      else
      {
        stack[index] = '\0';
        index--;
      }
    }
    else
      return (false);
    i++;
  }
  return (true);
}

int main(void) {
  printf("RESULT: %d", isValid("()"));
  printf("RESULT: %d", isValid("()[]{}"));
  printf("RESULT: %d", isValid("([{}])"));
  printf("RESULT: %d", isValid("(]"));
}
