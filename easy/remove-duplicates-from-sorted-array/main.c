#include <stdlib.h>
#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) {
  if (numsSize == 0)
    return (0);
  
  int count = 1;
  int j = 0;
  
  for (int i = 0; i < numsSize - 1; ++i)  {
      if (nums[i] != nums[i + 1]) {
          count++;
          nums[i + 1 - j] = nums[i + 1];
      }
      else j++;
  }
  return count;
}

int main(void) {
  int nums[11] = {0,0,1,1,1,2,2,3,3,4};
  int total = 10;

  removeDuplicates(nums, total);
}