#include<iostream>
using namespace std;

int main(){

int A[5] = {1,2,3,4,5};
int len = 5; // can be deduced using size of function or can be taken as a input from user.
int temp;
for(int i =0,j=len-1;i<j;i++,j--){
temp=A[i];
A[i]=A[j];
A[j]=temp;

}

for(int k =0;k<len;k++){
    cout<<A[k]<<" ";
}
}