#include<iostream>
bool is_Array_sorted(int a[],int size){
    if(size==0||size==1){
        return 1;
    }

    if(a[0]>a[1]){
        return 0;
    }

    bool is_smaller_sorted=is_Array_sorted(a+1,size-1);
    if(is_smaller_sorted){
        return 1 ;
    }
    else{
        return 0;
    }
}

int main(){
using namespace std;
    int arr[20]={2,3,4,5,6};

    int n=sizeof(arr)/sizeof(int);
    


    if(is_Array_sorted(arr,n))
        cout<<"true"<<endl;
    else{
        cout<<"false"<<endl;
    }
    return 0;
}