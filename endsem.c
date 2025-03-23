#include <stdio.h>
#include <math.h>
#include <string.h>
int main (){
  int arr[5] , i;
  printf("Enter values in array : ");
  for(int i = 0 ; i <5 ; i++){
    scanf("%d", &arr[i]);
  }
  printf("Values in array : ");
  for(i = 0 ; i < 5 ; i++) {
    printf("%d \n" , arr[i]);
  }
   return 0;
}