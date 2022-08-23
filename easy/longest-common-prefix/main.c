#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * longestCommonPrefix(char ** strs, int strsSize) {
  unsigned long min = strlen(strs[0]);
  char *result;
  int i = 0;
  int j = 0;
  unsigned long k = 0;

  if (strsSize == 0)
    return ("");
  else if (strsSize == 1)
    return (strs[0]);
  else {
    while (i < strsSize)
    {
      if (strlen(strs[i]) < min)
        min = strlen(strs[i]);
      i++;
    }

    result = (char *)calloc(min + 1, sizeof(char));

    while (k < min)
    {
      j = 0;
      while (j < strsSize)
      {
        if (strs[0][k] != strs[j][k])
          return (result);
        j++;
      }
      result[k] = strs[0][k];
      k++;
    }
  }
  return (result);
}

int main(void) {
  char **input;
  input = (char **)calloc(2, sizeof(char *));

  input[0] = "ab";
  input[1] = "a";

  printf("%s", longestCommonPrefix(input, 2));
}
