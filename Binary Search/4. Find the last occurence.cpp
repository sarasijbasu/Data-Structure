// Last occurence
//similar problem https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
#include<iostream>
using namespace std;

int lastOccurence(int arr[],int size,int target){
    int start = 0;
    int end = size -1 ; 
    int mid = (start+end)/2;
    int ans = -1;

    while (start<=end){
        if (arr[mid] == target){
            ans = mid;
            start = mid+1;
        }
        else if (target>arr[mid]){
            start = mid+1;
        }
        else if (target<arr[mid]){
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    return ans;
}


int main()
{
    int arr[10] = {2,4,4,4,4,4,4,6,8,10};
    int size = 10;
    int target = 4;
    int lastIndex = lastOccurence(arr,size,target);
    cout<<"Last Occurence At Position "<<lastIndex<<endl;
    return 0;
}