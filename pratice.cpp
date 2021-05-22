/*#include<bits/stdc++.h>
//#include<algorithm>
using namespace std;
bool compare(string a,string b){
        return a > b;
    
}
void transpose(int a[][10],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=i+1;j<c;j++){
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
}
void sort(int a[][10],int r,int c){
    for(int i=0;i<r;i++){
        sort(a[i],a[i]+c);
    }
}
int main(){

    #if o
    char c[1000];
    cin.getline(c,1000,'.');
    cout<<c;
    
    
    string s3;
    getline(cin,s3);// to which string u want to write..
    cout<<s3;

    string s("hello");
    for(int i=0;i<s.length();i++)
        cout<<s[i]<<"-";
    
    string s1="hello ";
    cout<<s1;
    cout<<endl;
    string arr[]={"Apple","Aichi","Pineapple","Banananaaaa"};
     sort(arr,arr+4,compare);// sort(name_of_array,address_of_array_withEachElement)
    for(int i=0;i<4;i++){
        
        cout<<arr[i]<<" , ";
    }
    #endif 
    
    int a[10][10],s[10][10];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    /*for(int i=0;i<10;i++){
        sort(a[i],a[i]+3);
        
    }
    sort(a,3,3);
    transpose(a,3,3);
    sort(a,3,3);
    transpose(a,3,3);

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
}*/
#include<iostream>
using namespace std;


void print(int arr[][100] , int r , int c){
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void transpose(int arr[][100] , int arr1[][100] , int r , int c){
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            arr1[i][j] = arr[j][i];
        }
    }
}

int main(){
    int row , col;
    cin>>row>>col;
    int arr[100][100] , arr1[100][100];
     for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            cin>>arr[i][j];
        }
     }
     print(arr , row , col);
     transpose(arr , arr1 , row , col);
     print(arr1 , row , col);
}
