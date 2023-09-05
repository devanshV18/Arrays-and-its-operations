#include<iostream>
using namespace std;

int main(){

    int A[6] = {1,2,3,4,5,6};

    int target;
    cout<<"Enter the target element"<<endl;
    cin>>target;

    int i;

    for(i=0;i<6;i++){
        if(A[i]==target){
            cout<<"The target element is at the index "<<i<<endl;
            
        }

        
    }

    cout<<"Target Not Found"<<endl;

   
}