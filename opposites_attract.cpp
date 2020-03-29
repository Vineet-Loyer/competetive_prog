/*
Everybody knows that opposites attract. That is the key principle of the "Perfect Matching" dating agency. The "Perfect Matching" matchmakers have classified each registered customer by his interests and assigned to the i-th client number ti ( - 10 ≤ ti ≤ 10). Of course, one number can be assigned to any number of customers.

"Perfect Matching" wants to advertise its services and publish the number of opposite couples, that is, the couples who have opposite values of t. Each couple consists of exactly two clients. The customer can be included in a couple an arbitrary number of times. Help the agency and write the program that will find the sought number by the given sequence t1, t2, ..., tn. For example, if t = (1,  - 1, 1,  - 1), then any two elements ti and tj form a couple if i and j have different parity. Consequently, in this case the sought number equals 4.

Of course, a client can't form a couple with him/herself.

Input
The first line of the input data contains an integer n (1 ≤ n ≤ 105) which represents the number of registered clients of the "Couple Matching". The second line contains a sequence of integers t1, t2, ..., tn ( - 10 ≤ ti ≤ 10), ti — is the parameter of the i-th customer that has been assigned to the customer by the result of the analysis of his interests.

Output
Print the number of couples of customs with opposite t. The opposite number for x is number  - x (0 is opposite to itself). Couples that only differ in the clients' order are considered the same.

Note that the answer to the problem can be large enough, so you must use the 64-bit integer type for calculations. Please, do not use the %lld specificator to read or write 64-bit integers in С++. It is preferred to use cin, cout streams or the %I64d specificator.
*/
#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
 
int main()
{
	int n,i,j;
	int a;
	double b[21];
	double sum;
	sum=0;
	scanf("%d",&n);
	for(i=0;i<21;i++)
	{
		b[i]=0;
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		b[a+10]++;
	}
	for(i=0;i<10;i++)
	{
		sum+=b[i]*b[20-i];
	}
	sum+=b[10]*(b[10]-1)/2;
 
	printf("%.0lf\n",sum);
	
	return 0;
}
