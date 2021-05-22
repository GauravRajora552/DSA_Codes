 #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int x,y,s=0;
    cout<<"enter x,y"<<endl;
    cin>>x>>y;

    int* arr[x];

    while(x--){
        cout<<"enter k"<<endl;
        int k;
        cin>>k;
        
        cout<<"enter element"<<endl;
        for(int i=0;i<k;i++){
            cin>>arr[s][i];

        }
        s++;
    }

    while(y--){
        cout<<"enter a,b"<<endl;
        int a,b;
        cin>>a>>b;
        cout<<arr[a][b]<<endl;
    }
    return 0;
    
}
