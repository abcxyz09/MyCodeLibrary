#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int N,a[105];

void doit()
{
	scanf("%d",&N);
	int m=0,g=0;
	for (int i=1,x; i<=N; i++) scanf("%d",&x),g=__gcd(g,x),m=max(m,x);
	puts((m/g-N)&1?"Alice":"Bob");
}

int main()
{
	doit();
	return 0;
}
