#include<iostream>
using namespace std;
int peakIndexBruteForce(int arr[],int n){
    
    for(int i =0 ; i<n ; i++){
        
        if(arr[i+1]<arr[i] && arr[i-1]<arr[i]){
            return i;
        }
    }
}
int main(){
int peak[6] ={0,1,3,2,1,0};
int res = peakIndexBruteForce(peak,6);
cout<<"The Peak Index of this array is "<<res<<endl;
}