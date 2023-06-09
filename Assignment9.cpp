//----------------------------------------Question 1 
class Solution {
public:
    bool isPowerOfTwo(int n) {
     if(n==0)
       return false;
     return (n==1 or (n%2==0 and isPowerOfTwo(n/2)));   
    }
};


//-----------------------------------------Question 2

#include<bits/stdc++.h>
using namespace std;
int sumofnatural(int n)
{
    if(n==0)
      return 0;
    return n+sumofnatural(n-1);
    
}
int main()
{
    int n;
    cin>>n;
    cout<<sumofnatural(n);
}


//------------------------------------------Question 3
int fact(int n)
{
    if(n==0)
      return 1;
    return n*fact(n-1);
    
}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n);
}


//-------------------------------------------Question 4

#include<bits/stdc++.h>
using namespace std;

int getexponent(int n,int p)
{
    if(n==0 or n==1)
    {
        return n;
    }
    if(p==0)
    {
        return 1;
    }
    return n*getexponent(n,p-1);
}

int main()
{
    int n,p;
    cin>>n;
    cin>>p;
    int ans=getexponent(n,p);
    cout<<ans;
}


//--------------------------------------------Question 5

#include<bits/stdc++.h>
using namespace std;

int getmaximum(vector<int>& arr,int n)
{
    if(n==0)
    {
        return arr[n];
    }
    return max(arr[n],getmaximum(arr,n-1));
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
    
    int ans=getmaximum(arr,n-1);
    cout<<ans;
}

//---------------------------------------------Question 6

#include<bits/stdc++.h>
using namespace std;
int getnthterm(int a,int n,int d)
{
    if(n==1)
    {
        return a;
    }
    return d+getnthterm(a,n-1,d);
}
int main()
{
    int a,d,n;
    cin>>a>>d>>n;
    
    cout<<getnthterm(a,n,d);
}


//-------------------------------------------Question 7
#include<bits/stdc++.h>
using namespace std;

void permute(string &a,int l,int r)
{
    if(l==r)
      cout<<a<<",";
    for(int i=l;i<=r;i++)
    {
        swap(a[l],a[i]);
        permute(a,l+1,r);
        swap(a[l],a[i]);
    }
}

int main()
{
   string s;
   cin>>s;
   permute(s,0,s.size()-1);
}



//-------------------------------------------Question 8

#include<bits/stdc++.h>
using namespace std;

int productarr(vector<int>&arr,int n)
{
    if(n==0)
    {
        return arr[0];
    }
    return arr[n]*productarr(arr,n-1);
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int getproduct=productarr(arr,n-1);
    cout<<getproduct;
}
