#include<iostream>
using namespace std;

void append(int arr[],int val,int length,int size){
    if(length>=size){
        cout<<"Not Possible, Index exceedes limit";
    }
    else{
        arr[length]=val;
        length++;
    }
}

void insert(int arr[],int index,int value,int length){
    int k;
    for(k=length;k>index;k--){
        arr[k]=arr[k-1];
    }
    arr[index]=value;
    length++;
}

int main(){
int A[10];
cout<<"Enter len"<<endl;
int len;
cin>>len;

int i;
for(i=0;i<len;i++){
    cout<<"Element no. "<<i<<endl;
    cin>>A[i];

}

insert(A,4,69,len);
cout<<len<<endl;

}