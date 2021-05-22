#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    char a[3][3];
    while(t--){
        
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin >> a[i][j];
            }
        }
        /*for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<a[i][j];
            }
            cout<<endl;
        }
    }*/

    return 0;
}