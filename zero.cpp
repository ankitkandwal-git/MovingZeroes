#include<bits/stdc++.h>
using namespace std;

void movingZero(int arr[],int n){
    vector<int> v;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            v.push_back(arr[i]);
        }
    }
    int j=0;
    for(auto k:v){
        arr[j] = k;
        j++;
    }
    for(int i=v.size(); i<n; i++){
        arr[i] = 0;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    movingZero(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}