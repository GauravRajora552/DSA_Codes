#include<bits/stdc++.h>
using namespace std;
char *mystrtok(char str[],char delimiter){
    static char*input=NULL;
    if(str!=NULL){
        input=str;
    }
    if(input==NULL){
        return NULL;
    }
    char *output=new char[strlen(input)+1];
    int i;
    for(i=0;input[i]!='\0';i++){
        if(input[i]!= delimiter){
            output[i]=input[i];
           
        }
        else{
            output[i]='\0';
            input=input+i+1;
            return output;
            
        }
        
    }
    output[i]='\0';
    input=NULL;
    return output;
    
}
int main(){
    char s[]="hello world this is km11";
    char *ptr;
    ptr=mystrtok(s,' ');
    while(ptr!=NULL){
        cout<<ptr<<endl;
        ptr=mystrtok(NULL,' ');
    }
    return 0;
}