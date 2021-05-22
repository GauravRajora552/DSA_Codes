#include<bits/stdc++.h>
using namespace std;
void write_element(int  s[][10],int R,int C){
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
           cin>>s[i][j];
        }
    }
}

void print_element(int s[][10],int R,int C){
    for(int i=0;i<C;i++){
        for (int j = 0; j <R; j++){
            cout<<s[i][j]<<" ";
        }
        cout<<endl;
    }
}

void switch_q(int a[][10],int arr[],int r,int c){
    for(int i=r-1;i>=0;i--){
        for(int j=0;j<c;j++){
            arr[i][j]=a[j][i];
        }
    }
}
int main(){
    int a[10][10];
    write(a,3,3);
    print(a,3,3);
    switch_q(a,3,3);
    print(arr,3,3);
    return 0;
}