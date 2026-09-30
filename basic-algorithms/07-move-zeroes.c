#include <stdio.h>

void moveZeroes(int* nums, int numsSize)
{
    int j = 0;

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != 0)
        {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;

            j++;
        }
    }
}

int main()
{
    int nums[] = {0, 1, 0, 3, 12};

    int numsSize = sizeof(nums) / sizeof(nums[0]);

    moveZeroes(nums, numsSize);

    printf("After moving zeroes: ");

    for (int i = 0; i < numsSize; i++)
    {
        printf("%d ", nums[i]);
    }

    printf("\n");

    return 0;
}