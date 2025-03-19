#include <stdio.h>
int main()
{
    int nums[] = {12,54,6,14,3,56,98,9,2};
    int n = 9;
    int i, j, min_idx, temp;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (nums[j] < nums[min_idx])
            {
                min_idx = j;
            }
        }
        temp = nums[min_idx];
        
        nums[min_idx] = nums[i];
        nums[i] = temp;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }
    return 0;
}