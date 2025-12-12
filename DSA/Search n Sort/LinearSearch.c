#include <stdio.h>
int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr);
    int target = 54;
    int searchIndex = linearSearch(arr, size, target);
    printf("The target %d is founded at index %d \n", target, searchIndex);
    return 0;
}