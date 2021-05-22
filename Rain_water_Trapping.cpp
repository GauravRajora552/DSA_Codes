#include<bits/stdc++.h>
using namespace std;
//*********************RAIN_WATER_TRAPPING*********************
int main(){
    int height_building[10]={0,2,1,3,0,1,2,1,2,1};
    int left_most_max[10]={0};
    int right_most_max[10]={0};
    left_most_max[0]=height_building[0];
    right_most_max[9]=height_building[9];
    for(int i=1;i<10;i++){
        if(left_most_max[i-1]<height_building[i]){
            left_most_max[i]=height_building[i];
        }
        else{
            left_most_max[i]=left_most_max[i-1];
        }
        
    }
    for(int i=8;i>=0;i--){
        if(right_most_max[i+1]<height_building[i])
            right_most_max[i]=height_building[i];
        else
        {
            right_most_max[i]=right_most_max[i+1];
        }
        
    }   
    int volume_store=0;
    for(int i=0;i<10;i++){
        
        volume_store+=(min(left_most_max[i],right_most_max[i])-height_building[i]);
    }
    cout<<"Total water Trapped is : "<<volume_store<<" units";
    return 0;
}