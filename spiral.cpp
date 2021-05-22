#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};//},10,11,12},{13,14,15,16}};
    int r=3;int c=3;
    //cin>>r>>c;
    int sr=0;
    int er=r-1;
    int sc=0;
    int ec=c-1;
    while(sr<=er && sc<=ec){
        //1
        for(int j=sc;j<=ec;j++){
            cout<<a[sr][j]<<" ";
        }
        sr++;
        //2
        for(int j=sr;j<=er;j++){
            cout<<a[j][ec]<<" ";
        }
        ec--; 
        //3
        for(int j=ec;j>=sc;j--){
            cout<<a[er][j]<<" ";
        }
        er--;
        //4
        for(int j=er;j>=sr;j--){
            cout<<a[j][sc]<<" ";
        }
        sc++; 
    }
    return 0;
}