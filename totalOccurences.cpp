#include<iostream>
using namespace std;
int totalOccBruteForce(int arr[],int n,int key){
    int count = 0;
    for(int i=0 ; i<n ; i++){
        if(arr[i]==key){
            count++;
        }

    }
    return count;
}

int main(){
int Arr[6]={1,2,3,3,3,3};
int res = totalOccBruteForce(Arr,6,3);
cout<<"Total number of occurences of 3 is "<<res<<endl;
}