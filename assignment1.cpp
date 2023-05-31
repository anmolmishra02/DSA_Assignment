/*Q1 
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.
**Example:**
Input: nums = [2,7,11,15], target = 9
Output0 [0,1]

**Explanation:** Because nums[0] + nums[1] == 9, we return [0, 1][

Note : The below solution will work on unsorted arrays as well
*/

#include<bits/stdc++.h>
using namespace std;

pair<int,int> getsum(vector<int>&nums,int target)
{
pair<int,int> ans={-1,-1};    
    unordered_map<int,int> mp;
    for(int i=0;i<nums.size();i++)
    {
        if(mp.find(target-nums[i])!=mp.end())
        {
           ans.first=i;
           ans.second=mp[target-nums[i]];
           return ans;
        }
        mp.insert(nums[i],i);
    }
    
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int> nums(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    int target;
    cin>>target;
    pair<int,int> ans=getsum(nums,target);
    cout<<ans.first<<","<<ans.second;
    return 0;
}

/* TC : O(N)
SC : O(N) for unordered map
*/



/*
====================================================================================================================================

 Q2*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int  n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int val;
    cin>>val;
    int left=0;
    int right=n-1;
    while(left<right)
    {
        if(arr[left]==val and arr[right]!=val)
        {
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        else if(arr[left]!=val and arr[left]!=val)
        {
            left++;
        }
        else if (arr[left]==val and arr[right]==val)
        {
            right--;
        }
       else
       {left++;
       right--;
       }
    }
    if(arr[left]==val)
    {
        cout<< left;
    }
    else 
    {
    cout<<left+1;    
    }

}




/*
===========================================================================================================================
Q3 */

#include<bits/stdc++.h>
using namespace std;

int getindex(vector<int>&arr,int target)
{
    int left=0;
    int right=arr.size()-1;
    int mid;
    while(left<right)
    {
        mid=(left+(right-left)/2);
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(arr[mid]>target)
        {
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
    }
    if(arr[left]>target)
    {
        return left;
    }
    return left+1;
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int ans=getindex(arr,target);
    cout<<ans;
    return 0;
}



/*====================================================================================================================
Q4 */

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i=digits.size()-1;
        while(i>=0 and digits[i]==9)
        {
            i--;
        }
        if(i==-1)
        {
            vector<int> result(digits.size()+1,0);
            result[0]=1;
            return result;
        }

        vector<int> result(digits.size(),0);
        result[i]=digits[i]+1;
        for(int j=0;j<i;j++)
        {
            result[j]=digits[j];
        }

     return result;
    }
};





/*======================================================================================================================
Q6 */


#include<bits/stdc++.h>
using namespace std;

bool duplicate(vector<int>& arr, int n)
{
    unordered_set<int> visited;
    for(auto num:arr)
    {
        if(visited.count(num))
        {
            return true;
        }
        visited.insert(num);
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool isduplicate=duplicate(arr,n);
    cout<<isduplicate;
    return 0;
}



/*==============================================================================================================================
Q8*/

#include<bits/stdc++.h>
using namespace std;

vector<int> getmissingnum(vector<int>&arr)
{
    /* sorting the array in case it is not sorted 
    since numbers starts from 1 and goes till n so 1 can't be the duplicate number as in our question it is mentioned that numbers present from 1 to n so 0 can't be the missing one*/
    sort(arr.begin(),arr.end());
    int missing;
    int duplicate;
    for(int i=1;i<arr.size();i++)
    {
        if(arr[i]==arr[i-1]) 
        {
            if((arr[i]+1)!=arr[i+1])
               {
                   missing=arr[i]+1;
               }
               else
               {
                   missing=arr[i]-1;
               }
               duplicate=arr[i];
               break;
        }
    }
    vector<int> ans(2,0);
    ans[0]=duplicate;
    ans[1]=missing;
    return ans;
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int> ans=getmissingnum(arr);
    cout<<ans[0]<<","<<ans[1];
    return 0;
}