/*In a parallel universe, there are not just two charges like positive and negative, but there are  charges represented by   english alphabets.

Charges have a property of killing each other or in other words neutralizing each other if they are of same charge and next to each other.

You are given a string  where each  represents a charge, where .

You need to output  of final string followed by string after which no neutralizing is possible.*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,p=0;
cin>>n;
char arr[n],np=0;
for(int i=0;i<n;i++)
{
cin>>arr[i];
if(arr[i]==arr[i-1] && i>0)
{i=i-2;
n=n-2;
}
}
cout<<n<<"\n";
for(int i=0;i<n;i++)
cout<<arr[i];
return 0;
}
