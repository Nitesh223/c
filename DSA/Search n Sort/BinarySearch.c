#include<stdio.h>

int BinarySearch(int arr[] , int size , int target){
int low , mid , high;
low = 0 ;
high = size-1;
while (low <= high ){
mid = (low + high)/2;
if(arr[mid] == target){
    return mid;
}
if (target > arr[mid]){
    low = mid+ 1;
}
if (target < arr[mid] ){
    high = mid - 1;
}
}
return -1;
}

int main (){
    int arr[] = {10,20,30,40,50,60};
    int size = sizeof(arr);
    int target = 70;
    int searchIndex = BinarySearch(arr , size , target);
    printf("The target %d is founded at index %d \n " , target ,searchIndex );
    return 0;
}