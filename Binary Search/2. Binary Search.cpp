// Binary Search
#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int target)
{
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;
    while(start<=end){
        if (arr[mid] == target){
            return mid;
        }
        else if (target>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = (start+end)/2;


    }
    return -1;

}

int main()
{
    int arr[7] = {1,2,3,4,5,6,7};
    int size = 7;
    int target = 7;

    int indexOfTarget = binarySearch(arr,size,target);
    if(indexOfTarget == -1)
    {
        cout<<"Target Not Found";
    }
    else{
        cout<<"Target Found At Position "<<indexOfTarget;
    }
    return 0;
}