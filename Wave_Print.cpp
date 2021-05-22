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
            cout<<s[j][i]<<" ";
        }
        cout<<endl;
    }
}

void wave_Print(int s[][10],int R,int C){
    for(int i=0;i<C;i++){
        if(i%2==0){
            for(int j=0;j<R;j++){
                cout<<s[j][i]<<" ";
            }
            
        }
        else{
            for(int j=R-1;j>=0;j--){
                cout<<s[j][i]<<" ";
            }
            
        }
        
        }
} 

int main(){
    int R,C;
    cin>>R>>C;
    int s[10][10];
   cout<<"enter element"<<endl;
    write_element(s,R,C);
    cout<<"Print Transpoes Array";
    print_element(s,R,C);
    cout<<"Print as wave : "<<endl;
    wave_Print(s,R,C);
    

    return 0;
}