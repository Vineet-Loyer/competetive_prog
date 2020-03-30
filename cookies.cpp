/*
Olga came to visit the twins Anna and Maria and saw that they have many cookies. The cookies are distributed into bags. As there are many cookies, Olga decided that it's no big deal if she steals a bag. However, she doesn't want the sisters to quarrel because of nothing when they divide the cookies. That's why Olga wants to steal a bag with cookies so that the number of cookies in the remaining bags was even, that is, so that Anna and Maria could evenly divide it into two (even 0 remaining cookies will do, just as any other even number). How many ways there are to steal exactly one cookie bag so that the total number of cookies in the remaining bags was even?

Input
The first line contains the only integer n (1 ≤ n ≤ 100) — the number of cookie bags Anna and Maria have. The second line contains n integers ai (1 ≤ ai ≤ 100) — the number of cookies in the i-th bag.

Output
Print in the only line the only number — the sought number of ways. If there are no such ways print 0.
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
 
    int arr[n];
    int sum=0;
    int counteven=0;
    int countodd=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum=sum+arr[i];
        if(arr[i]%2==0)counteven++;
        else countodd++;
    }
    if(sum%2==0)cout<<counteven<<endl;
    else cout<<countodd<<endl;
}
