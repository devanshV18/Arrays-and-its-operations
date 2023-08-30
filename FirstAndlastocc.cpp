#include<iostream>
using namespace std;
int FirstOcc(int arr[],int n,int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s) / 2;
    int ans=-1;

    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }

        else if(arr[mid]<key){
            s=mid+1;
        }

        else{
            e=mid-1;
        }
        mid = s + (e-s) / 2;
    }

    return ans;
}

int LastOcc(int arr[],int n,int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s) / 2;
    int ans=-1;

    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }

        else if(arr[mid]<key){
            s=mid+1;
        }

        else{
            e=mid-1;
        }
        mid = s + (e-s) / 2;
    }
    
    return ans;
}
int main(){
int A[6] = {1,2,3,4,5,2};
int res1=FirstOcc(A,6,2);
int res2=LastOcc(A,6,2);
cout<<res1<<endl;
cout<<res2<<endl;
cout<<"First Occurence of 2 is "<<res1<<endl;
cout<<"Last Occurence of 2 is "<<res2<<endl;

}

