// Total Number of Occurence
//similar problem https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
#include <iostream>
using namespace std;

int lastOcc(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (target > arr[mid])
        {
            // Search in right
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            // search in left
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}


int firstOcc(int arr[],int size,int target){
    int start = 0;
    int end = size -1;
    int mid = (start + end)/2;
    int ans = -1;
    while (start<=end){
        if (target == arr[mid]){
            ans = mid;
            end = mid-1;
        }
        else if (target<arr[mid]){
            // search in left
            end = end -1 ;
        }
        else if (target>arr[mid]){
            // Search in right
            start = mid+1;
        }
    mid = (start+end)/2;
    }
    return ans;
}

int main()
{
    int arr[] = {2, 4, 4, 4, 4, 4, 4, 6, 8, 10};
    int size = 10;
    int target = 4;
    int totalNoOfOcc = lastOcc(arr, size, target) - firstOcc(arr, size, target) + 1;
    cout<<"The target "<<target<<" occured "<<totalNoOfOcc<<" times.";
    return 0;
}