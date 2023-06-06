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
