#include<iostream>
using namespace std;
int sqrt(int n){
    int start=0;
        int end=n;
        int mid;
        
        while(start<=end){

            int mid =start + (end-start)/2;
        if(mid*mid==n){
            return mid;
           
        }
        else if(mid*mid<n){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
       
      
    }
      return -1;
   
}

int main(){
    
    
    int n;
    cout<<"n:";
    cin>>n;
    
    
        
        
      cout<<sqrt(n);
        return 0;
    }

