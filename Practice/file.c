#include <stdio.h>

int findSecondLargest(int arr[], int size);

int main() {
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int second = findSecondLargest(arr, size);
    printf("Second largest is %d\n", second);
    return 0;
}

int findSecondLargest(int arr[], int size) {
    int first, second, i, b;
    first = arr[0];
    second = arr[1];
    if (second > first) {
        b = first;
        first = second;
        second = b;
    }
    for (i = 2; i < size; i++) {
        
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second) {
            second = arr[i];
        }
    }
    return second;
}