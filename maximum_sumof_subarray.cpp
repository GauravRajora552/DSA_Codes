#include<iostream>
using namespace std;

void input_array(int arr[],int n){
    cout<<"enter input element in array: \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    
}
int main(){
    cout<<"enter n:  ";
    int n;
    cin>>n;
    int arr[n];
    input_array(arr,n);
    int current_sum=0;
    int max=0;
    int left=-1;
    int right=-1;
    //printf("the subarray is as follow\n");
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            current_sum=0;
            for(int k=i;k<=j;k++){
                //printf("%d ,",arr[k]);
                current_sum+=arr[k];
                
            }
            //updating maximum_sum
            if(max<current_sum){
                max=current_sum;
                left = i;
                right = j;
            }
        }
    }
    
    printf("the maximum sum of given array is  %d \n",max);
    //To print which subarray has maximum sum;
    for(int k=left;k<right+1;k++){
        cout<<arr[k]<<",";
        }
    return 0;
}