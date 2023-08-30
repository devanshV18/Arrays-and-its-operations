#include<iostream>
using namespace std;
int max(int arr[],int n){
    int max,i;
    max = arr[0];
    for(i=1;i<=n-1;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    return max;


}
int main(){

int A[8] = {8,3,9,15,6,10,7,2};
int result = max(A,8);
cout<<result<<endl;

}