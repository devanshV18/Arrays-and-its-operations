#include<iostream>
using namespace std;

int main(){
int A[7]={2,3,1,6,3,6,2};
int ans=0;
for(int i=0;i<7;i++){
    ans=ans^A[i];
}

cout<<ans<<endl;
}