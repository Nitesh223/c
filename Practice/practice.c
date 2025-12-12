# include<stdio.h>
int main(){
 int temp ;
 int first = 0;
 int second = 1;
 int n = 5;
  int nums[5] = {14,58,23,56,49};
 for (int i = 1 ; i < n ; i++){
    if(nums[i] > nums[first] ){
        first = i;
    }
 }
if (first != 0){
    temp = nums[0];
    nums[0] = nums[first];
    nums[first] = temp;
}
for (int i = 2 ; i < n ; i++){
    if (nums[i] > nums[second] || nums[i] < nums[first]){
        second = i;
    }
}
printf("second largest is %d" , nums[second]);
    return 0;
}