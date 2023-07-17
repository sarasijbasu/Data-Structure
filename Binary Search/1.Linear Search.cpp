// Linear Search

#include<iostream>
using namespace std;
int main()
{
    int target = 7;
    int arr[6] = {3,2,1,5,7,9};
    for (int i =0 ; i<(sizeof(arr)/sizeof(arr[0]));i++)
        {
            if (arr[i]==target)
            {
                cout<<"Found at position "<<i<<" of the array"<<endl;
            }
        }
    return 0;
}