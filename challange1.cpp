#include<iostream>
int main(){
using namespace std;
    int n;
    cin >>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[n-i-1]<<" ";
    }
    return 0;
}