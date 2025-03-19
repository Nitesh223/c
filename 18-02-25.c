#include <stdio.h>

int main() {
    int nums[] = {3, 4, 2, 1, 7, 6, 4, 10, 5};
    int i, j, n = 9, key;

    for (i = 0; i < n; i++) {
        j = i - 1;
        key = nums[i];
        while (j >= 0 && nums[j] > key) {
            nums[j + 1] = nums[j];
            j = j - 1;
        }
        nums[j + 1] = key;
    }

    for (i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}