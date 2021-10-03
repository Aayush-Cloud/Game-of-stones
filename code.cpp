#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
long DP[101];
bool dp(long x)
{
	if (DP[x]!=-1) return DP[x];
	bool res=!dp(x-2);
	if (x>3) res=res|(!dp(x-3));
	if (x>5) res=res|(!dp(x-5));
	DP[x]=res;
	return res;
}
int main()
{
	long nTest,n;
	memset(DP,-1,sizeof(DP));
	DP[1]=0;
	DP[2]=DP[3]=DP[5]=1;
	scanf("%ld",&nTest);
	while (nTest--)
	{
		scanf("%ld",&n);
		puts(dp(n)?"First":"Second");
	}
}
     