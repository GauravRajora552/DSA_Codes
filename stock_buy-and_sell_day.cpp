#include<iostream>
using namespace std;
int buy(int arr[],int n){
    int min=arr[0];int b;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
            b=i+1;
        }
    }
    cout<<"buy "<<b<<endl;
    return 0;
}
int sell(int arr[],int n){
    int max=arr[0];int s;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            s=i+1;
        }
    }
    cout<<"sell "<<s<<endl;
    return 0;
}
int main(){
    int a[7]={3,2,7,5,1,6,10};
    int b=buy(a,7);
    int s=sell(a,7);
    
    
    return 0;
}
