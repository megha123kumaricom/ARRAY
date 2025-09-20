#include<iostream>
using namespace std;
int main(){
    int arr[6]={3,2,7,5,4,8};
    for(int i=4;i>=0;i--){
        bool swapped=0;
        for(int j=0;j<=i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=1;
            }
        }

    }
    for(int i=0;i<=5;i++){
        cout<<arr[i]<<endl;
    }
}