#include<iostream>
using namespace std;
int main(){

    //constant reference  of non-constant value
    int a=10;//it is only accessesable for read only no write.
    int const& j=a;
    a++;
    //j++;//not bez its now a constant only read
    std::cout<<j<<std::endl;
    #ifndef okay
    //reference of a constant value
    int const l=10;//read only
    //int& k=l;//not access to write mode.
    #endif

    #ifdef lol
    // constant reference of constant interger
    int const p=10;
    int const& o=p;
    p++;
    o++;
    #endif
    
    
    //constant pointer.
    //constant reference of non constant int
    int g=10;
    int const *q=&g;
    g++;
    //(*q)++;
    cout<<*q<<endl;

}
