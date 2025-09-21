#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[6]={3,4,6,2,8,5};
    int ans =INT_MIN;
    for(int i=0;i<6;i++){
        if(arr[i]>ans)
        
        
            ans=arr[i];
        
        }
        int second=INT_MIN;
        for(int i=0;i<6;i++){
            if(arr[i]!=ans){
               second=max(second,arr[i]);
            }
          
        }
           cout<<second;
       

    
}