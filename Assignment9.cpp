//Question 1 
class Solution {
public:
    bool isPowerOfTwo(int n) {
     if(n==0)
       return false;
     return (n==1 or (n%2==0 and isPowerOfTwo(n/2)));   
    }
};


//Question 2

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


//Question 3
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

//Question 4
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



