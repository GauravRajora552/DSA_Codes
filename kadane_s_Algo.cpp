#include<iostream>
using namespace std;
int main(){
    int arr[20]={-4,1,3,-2,16,2,-1,-4,-7};
    int current_Sum=0;
    int max_sum_so_far=0;
    for(int i=0;i<9;i++){
        current_Sum+=arr[i];
        if(current_Sum<0){
           current_Sum=0;
        }
        else
            max_sum_so_far=max(current_Sum,max_sum_so_far);
    }
    printf("%d is the max_Sum of Subarray .",max_sum_so_far);
    return 0;
}