// Find the first occurance
//similar problem https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

#include<iostream>
using namespace std;
int firstOccurence(int arr[],int size,int target){
    int start = 0;
    int end = (size) -1;
    int mid = (start+end)/2;
    int storedIndex = -1;
    while (start <= end)
    {
        if (target == arr[mid]){
            storedIndex = mid;
            end = mid-1;
        }
        else if (target > arr[mid]){
            start = mid+1;
        }
        else if (target<arr[mid])
        {
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    return storedIndex;
    
    

}


int main()
{
    int arr[] = {1,3,3,3,3,3,3,4,4,4,4,4,6,7,9};
    int target = 4;
    int size = 15;
    int firstOccIndex = firstOccurence(arr,size,target);
    cout<<"First Occurence"<<" at "<<firstOccIndex<<" Position";
    return 0;
}