#include<iostream>
using namespace std;
//...........................CHE WBACCA NUMBER...................................
/*in this the given number is inverting by 9-t ;
i.e
input : 4 5 4 5
output :4 4 4 4

make the given number into smaller one without change no. of digit.
if
input : 9 9 8 1
output: 9 0 1 1
*/
#if okay
int main(){
    int a[20];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(a[0]==9)
            cout<<9<<" ";
        
    
        if(a[0]==9){
            //cout<<a[0];
            for(int i=1;i<n;i++){
                if((a[i]<9-a[i]))//4<9-4
                cout<<a[i]<<" ";
                else
                    cout<<(9-a[i])<<" ";
                }
        }

        else{
            for(int i=0;i<n;i++){
                if((a[i]<9-a[i]))//4<9-4
                    cout<<a[i]<<" ";
                else
                    cout<<(9-a[i])<<" ";
                }
   
        }
    
    return 0;
}
#endif
 
//using a character array...
int main(){
    char a[50];
    cin>>a;
    int i=0;
    if(a[i]=='9')
        i++;
    for(;a[i]!='\0';i++){
        int digit=a[i]-'0';//converting char into integer.
        if(digit>=5){
            digit=9-digit;
            a[i]=digit+'0';// Again convert integer into character..
        }     
    }
    
    cout<<a<<endl;
    return 0;
}