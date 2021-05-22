#include<iostream>
using namespace std;
int main(){
    int arr[100]={-4,1,3,-2,6,2,-1,-4,-7};
    int n=sizeof(arr)/sizeof(int);
    int cum_sum[100]={0};
    int current_sum=0;
    int max=0;
    int left=-1;
    int right=-1;

    cum_sum[0]=arr[0];
    for(int i=1;i<n;i++){
        cum_sum[i]=cum_sum[i-1]+arr[i];
    }
    
    for (int i = 0; i <n; i++){
        current_sum=0;
        for(int j=i;j<n;j++){
            current_sum=cum_sum[j]-cum_sum[i-1];
        
        if(max<current_sum)
            {
            max=current_sum;
            left=i;
            right=j;
            }
        }
    }
    cout<<max<<endl;
    for(int i=left;i<= right;i++){
        cout<<arr[i]<<",";
    }
    
    return 0;
}