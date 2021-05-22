#include<bits/stdc++.h>
using namespace std;
void Write(int a[][10],int raw,int col){
    for(int i=0;i<raw;i++){
        for(int j=0;j<col;j++){
           cin>>a[i][j];
        }
    }
}
void print(int a[][10],int raw,int col){
    for(int i=0;i<raw;i++){
        for(int j=0;j<col;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

//Method 2......................

// +++++++++++************* STAIRCASE_APPROACH *******(2N)+++++++++++++++++++++
void stairCase(int a[][10],int R,int C,int key){
    int i=0, j=C-1;
    while(i<R && j>=0){
        if(a[i][j]==key){
            cout<<"found at {"<<i<<" , "<<j<<" }"<<endl;
            break;
        }
        else if(a[i][j]>key){
            j--;
        }
        else{
            i++;
        }
    }
}
void transpose(int a[][10],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=i+1;j<c;j++){
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    
}
void sort(int a[][10],int r,int c){
    for(int i=0;i<r;i++){
        sort(a[i],a[i]+c);
    }
}
int main(){
    int a[10][10];
    int R,C,key;
    cin>>R>>C;
    Write(a,R,C);
    sort(a,R,C);
    transpose(a,R,C);
    sort(a,R,C);
    transpose(a,R,C);

    cout<<"print Array\n";
    print(a,R,C);
    /*for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }*/
    printf("element want to search \n");
    cin>>key;

    stairCase(a,R,C,key);
    
    #if search
    if(search(a,R,C))
        cout<<"found";
    else{
    cout<<"not found";
    }
    #endif

}