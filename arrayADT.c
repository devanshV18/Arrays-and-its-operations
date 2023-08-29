#include<stdio.h>
#include<stdlib.h>

struct Array{
    int *A;
    int size;
    int length;
};

void Display(struct Array obj){
    int i;
    printf("\nElements are\n");

    for(i=0;i<obj.length;i++){
        printf("%d",obj.A[i]);
    }
    }

int main(){

struct Array arr; // creating an object of struct array 
printf("Enter the size of the array");
scanf("%d ",&arr.size); //assigns the value of size to the size attributr=e of object arr of struct array
arr.A=(int *)malloc(arr.size*sizeof(int)); //the integer pointer A (attribute) of the object arr inside the struct array points towards allocated memory of assigned size in heap
arr.length=0;//length attribute is 0 means no elements currently.


//INSERTIng ELEMENTS

int i,n;
printf("Enter number of numbers");
scanf("%d",&n);


printf("Enter the elements");

for(i=0;i<n;i++){
    scanf("%d",&arr.A[i]);
}
arr.length=n;


//DISPLAYING 

Display(arr); //calling display function for the object arr





}