/* Given an array of integers, determine if any integer appears at least twice within the array. 
If such a duplicate exists, return true. If every element in the array is unique, return false.
Example: nums = [3, 2, 3, 9]　→ 　true
         nums = [1, 2, 3, 4]　→　 false */

#include<bits/stdc++.h>
using namespace std;

string checkDup(vector<int> arr)
{
    //Unordered map is used to keep track of the count:
    unordered_map<int,int> map;
    for(int i=0;i<arr.size();i++)
        map[arr[i]]++;

    for(auto elem:map)
    {
        int count=elem.second;
        if(count>=2)
            return "true";
    }
    return "false";
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
        cout<<checkDup(arr)<<endl;
    }
    return 0;
}
