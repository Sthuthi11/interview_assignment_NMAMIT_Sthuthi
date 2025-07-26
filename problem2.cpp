/* Given an array of integers, you need to rearrange it such that all zeroes are shifted to the end of the array
The relative order of the non-zero elements must remain unchanged. 
This operation must be performed in-place, without creating a new copy of the array.
Example: nums = [0, 1, 0, 4, 21]
[0, 1, 0, 4, 21]　➝　[1, 4, 21, 0, 0] */

#include<bits/stdc++.h>
using namespace std;

void shiftZeroes(vector<int> &arr)
{
    int left=0;
    for(int right=0;right<arr.size();right++)
    {
        if(arr[right]!=0)
        {
            swap(arr[left],arr[right]);
            left++;
        }
    }
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        shiftZeroes(arr);
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
}