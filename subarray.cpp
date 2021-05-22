#include<iostream>
int main(){
using namespace std;
    int n,max_sum=0;
    cin>>n;
    int arr[20];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //generation of subarrays;
    for(int i=0;i<n;i++){
        
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                int current_sum=0;
                current_sum+=arr[k];
                cout<<current_sum<<",";
            }

            cout<<endl;
        }
    }
    return 0;
}