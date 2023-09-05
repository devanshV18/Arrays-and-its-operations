#include<iostream>
using namespace std;

void swapAlt(int arr[],int n){
    int i;
    for(i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
int A[6] = {1,3,2,7,11,8};
swapAlt(A,6);

for(int j=0;j<6;j++){
    cout<<A[j]<<" ";
}

}