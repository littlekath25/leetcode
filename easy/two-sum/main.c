#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int *returnValues = calloc(*returnSize,  sizeof(int));
    int i = 0;
    int j = 0;

    while (i < (numsSize))
    {
        j = i + 1;
        while (j < (numsSize))
        {
          if (nums[i] + nums[j] == target)
          {
              returnValues[0] = i;
              returnValues[1] = j;
              break ;
          }
          j++;
        }
        i++;
    }
    return (returnValues);
}

int main(void) {
  int nums[3] = {3,2,4};
  int size = 2;
  int *result = NULL;

  result = twoSum(nums, 3, 6, &size);
  printf("THE RESULT: %i %i\n", result[0], result[1]);
  if (result)
    free(result);
}
