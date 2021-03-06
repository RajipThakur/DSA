#include<bits/stdc++.h>
using namespace std;

struct Array{
    int A[20];
    int size;
    int length;
};

int Binarysearch(struct Array *arr,int key){
    int l,h,mid;
    l=0;
    h=arr->length-1;
    while(l<=h){
        mid=(l+h)/2;

        if(key==arr->A[mid]){
            return mid;
        }
        else if(key<arr->A[mid]){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }

    return -1;
}



int main(){

   struct Array arr;
   
   arr={{1,2,3,4,5,6},20,6};
   printf("%d",Binarysearch(&arr,6));

}