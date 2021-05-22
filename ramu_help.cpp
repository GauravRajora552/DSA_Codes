#include<iostream>
using namespace std;
int main(){
    int t;
    int c1,c2,c3,c4;
    int mi[20], ni[20];
    int r=0,c=0, n,m;
    printf("enter number of times u want input : \n");
    cin>>t;
    while(t--){
        
        cin>>c1>>c2>>c3>>c4;  //1,3,7,49
        
        cin>>n>>m; //2 3
        for(int i=0;i<n;i++){
            //no of ride of rickshaw 
            cin>>ni[i]; //2 5
        }
        for(int i=0;i<m;i++){
            
            cin>>mi[i]; // 4 4 4
            //no of ride of cabs
        }
        //for rickshaw
        
        for(int i=0;i<n;i++){
            
            r += min(ni[i]*c1,c2); //2+3=5
            
            }
        int p=min(r,c3);//5
    

        //for cab
        for(int i=0;i<m;i++){
            c += min(mi[i]*c1,c2);
                
            } //3+3+3=9
        int l=min(c,c3);//7
        
        //minimum fair 
        int u=l+p;//7+5=12
    
        int final_cost = min(c4,u);//12
        cout<<"\nthe minimum cost is "<<final_cost;
    }
    return 0;
}