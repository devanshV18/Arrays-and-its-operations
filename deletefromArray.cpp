#include<iostream>
using namespace std;

int main(){
    
    int A[10] = {1,2,3,4,5,6,7,8};
    //to delete third index
    int size = sizeof(A)/sizeof(A[0]); //gives 10
    int length = 8; //till index 7

    
    int delIndex,x=0,i;
    cout<<"Enter the index to be deleted"<<endl;
    cin>>delIndex;

    if(delIndex>=0 && delIndex < size){
        x=A[delIndex];

        for(i=delIndex;i<length-1;i++){
            A[i]=A[i+1];
        }
        length--;
    }
    
    for(int j=0;j<length;j++){
        cout<<A[j]<<" ";
    }


}