#include<iostream>
using namespace std;
int main(){
    int arr[6]={2,4,6,7,3,8};
    
    int temp=arr[5];
    for(int i=4;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=temp;
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}