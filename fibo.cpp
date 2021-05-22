#include<iostream>
using namespace std;

#ifndef okay
int fibo(int l){

    //NOTE THAT WE CAN MUTLIPLE BASE CASES
    if(l==0){
        return 0;
    }
    if(l==1)
        return 1;

    int smallout1=fibo(l-1);
    int smallout2=fibo(l-2);
    return(smallout1+smallout2);//0+1+1+2+3+5+8+13........
}
int main(){
    int no_of_term;
    cin>>no_of_term;
    cout<<"The fibonacci series is as follow :\n";
    for(int i=0;i<no_of_term;i++){
        int c=fibo(i);
        cout<<" "<<c<<" ";
    }
    cout<<"\n"<<fibo(8)<<endl;
}
#endif

