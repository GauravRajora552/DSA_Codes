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

void flip_90_cw(int a[][10],/*int arr[][10],*/int r,int c){
    int k=r-1,i=0;
    while(/*k>0 && i<r-1*/k>i){
        for(int j=0;j<c;j++){
            int temp=a[k][j];
            //arr[k][j]=a[i][j];
            a[k][j]=a[i][j];
            a[i][j]=temp;
        }
        k--;
        i++;
    }
}
void flip_90_acw(int a[][10],int r,int c){
    
    for(int i=0;i<r;i++){
        int k=c-1,j=0;
        while(/*k>0 && j<c-1*/k>j){
            int temp=a[i][k];
            a[i][k]=a[i][j];
            a[i][j]=temp;
            k--;
            j++;
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
int main(){
    int a[10][10];
    int arr[10][10]={0};
    int r,c;
    cin>>r>>c;
    write_element(a,r,c);
    char s[10];
    cout<<"enter choice cwf or acwf :\n";
    cin>>s;
    /*int s;
    cout<<"enter choice 0 or 1 :\n";
    cin>>s;*/
    if(s=="cwf"){
        flip_90_cw(a,r,c);
        transpose(a,r,c);
        printf("this is clockwise 90 flip\n");
        print_element(a,r,c);
    }
    else if(s=="acwf"){
        flip_90_acw(a,r,c);
        transpose(a,r,c);
        printf("this is anti_clockwise 90 flip\n");
        print_element(a,r,c);   
    }
    return 0;
}