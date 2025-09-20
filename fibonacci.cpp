#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i;
    int arr[1000];
    arr[0]=0;
     arr[1]=1;
     int sum=arr[0]+arr[1];
    for( i=2;i<=n-1;i++){
        arr[i]=arr[i-1]+arr[i-2];
sum+=arr[i];
    }
    cout<<"sum of fibonacci ="<<sum;
}