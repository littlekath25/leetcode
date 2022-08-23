#include <stdio.h>
#include <stdlib.h>

int romanToInt(char *s) {
  int conv[100];
  int result = 0;
  int i = 0;

  conv['I'] = 1;
  conv['V'] = 5;
  conv['X'] = 10;
  conv['L'] = 50;
  conv['C'] = 100;
  conv['D'] = 500;
  conv['M'] = 1000;
  
  while (s[i])
  {
    if (conv[s[i]] < conv[s[i + 1]] && s[i + 1])
      result -= conv[s[i]];
    else
      result += conv[s[i]];
    i++;
  }
  return (result);
}

int main(void) {
  printf("3: %i\n", romanToInt("III"));
  printf("4: %i\n", romanToInt("IV"));
  printf("55: %i\n", romanToInt("LV"));
  printf("1994: %i\n", romanToInt("MCMXCIV"));
}
