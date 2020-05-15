/*You are given length of n sides, you need to answer whether it is possible to make n sided convex polygon with it.

Input : -

First line contains ,no .of testcases.

For each test case , first line consist of single integer ,second line consist of  spaced integers, size of each side.

Output : -

For each test case print "Yes" if it is possible to make polygon or else "No" if it is not possible.*/

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
cin.tie(0);
ios_base::sync_with_stdio(0);
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
sort(arr,arr+n);
if(arr[n-1]>=sum-arr[n-1])printf("No\n");
else printf("Yes\n");
}
return 0;
}
