#include<iostream>
using namespace std;
int main(){
    int l[7]={3,1,4,8,7,2,5};

    #if ok
    int p=0;int cp=0;int max_p=0;
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if(l[i]-l[j]>0){
                p=l[i]-l[j];

            }
            else{
                p=l[j]-l[i];
            }
            if(cp<p){
                cp=p;
            }
        
        
        }
        if(max_p<cp){
            max_p=cp;
        }
    }
    cout<<"max profit is : "<<max_p;
    #endif

    //METHOD ------------2:

    
    //____________________________time--complexity is O(n)________________________________________

    //Create an auxillary array;

    int aux[7]={0};
    aux[6]=l[6];
    for(int i=5;i>=0;i--){
        if(l[i]>aux[i+1]){
            aux[i]=l[i];
        }
        else{
            aux[i]=aux[i+1];
        }
    }
//...............This step is called PRE-COMPUTATION.......................

    // 
    int a;int max=0;
    for(int i=0;i<7;i++){
        a=aux[0]-l[i];
        if(max<a){
            max=a;
        }
    }
    cout<<max<<endl;

    return 0;
}