#include<iostream>
using namespace std;


int peakelement(int arr[],int n){
    int start=0;
    int end=n-1;
    int mid;
    while(start<=end){
        mid=end+(start-end)/2;//it is mandatory here
if(arr[mid-1]<=arr[mid]&& arr[mid+1]<=arr[mid]){
    return mid;
}
else if(arr[mid-1]<arr[mid]){
    end=mid-1;

}
else{
    start=mid+1;
}

    }
    return -1;
    
}
int main(){
    int n;
    cout<<"n:";
    cin>>n;
    int arr[1000];
    cout<<"elements in the array are";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    cout<<peakelement(arr,n);
    return 0;
}