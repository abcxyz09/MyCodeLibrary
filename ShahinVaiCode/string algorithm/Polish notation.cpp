#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<functional>
#include<math.h>
#include<assert.h>
#include<stdarg.h>
#include<time.h>
#include<limits.h>
#include<ctype.h>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>
#include<iostream>
#include<sstream>
using namespace std;

// #defines
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)
#define SZ(x) ((int)(x).size())
#define ALL(x) (x).begin(),(x).end()
#define LPI(i,n) for(int i=0;i<(n);i++)
#define LPI1(i,a,b) for(int i=(a);i<=(b);i++)
#define LPIL(i,x) for(int i=0;x[i];i++)
#define LPD(i,n) for(int i=(n)-1;i>=0;i--)
#define LPD1(i,a,b) for(int i=(a);i>=(b);i--)
#define I(x) scanf("%d",&x)
#define RI(x) int x;I(x)
#define II(x,y) scanf("%d%d",&x,&y)
#define RII(x,y) int x,y;II(x,y)
#define III(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define RIII(x,y,z) int x,y,z;III(x,y,z)
#define RS(x) scanf("%s",x)
#define PI(x) printf("%d\n",x)
#define PIS(x) printf("%d ",x)
#define CASET int ___T,cas=1;scanf("%d ",&___T);while(___T--)
#define CASEN0(n) int cas=1;while(scanf("%d",&n)!=EOF&&n)
#define CASEN(n) int cas=1;while(scanf("%d",&n)!=EOF)
#define MP make_pair
#define PB push_back
#define MS0(x) memset(x,0,sizeof(x))
#define MS1(x) memset(x,-1,sizeof(x))
#define SEP(x) ((x)?'\n':' ')
#define F first
#define S second
#ifdef ONLINE_JUDGE
#define FILEIO(x) freopen(#x ".in","r",stdin);freopen(#x ".out","w",stdout);
#define FILEIOS freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#else
#define FILEIO(x) ;
#define FILEIOS ;
#endif
typedef pair<int,int> PII;
typedef long long LL;
typedef unsigned long long ULL;
const double eps = 1e-9;
const double pi = acos(-1.0);
const int maxn = (int)1e5 + 10;
const int mod = (int)1e9;
int main(){
    char smb[200],t,str[1000];
    int i,n;
    vector<char>stack;
    vector<char>Exp;
    smb['(']=0; smb['+']=1; smb['-']=1; smb['*']=3;
    smb['/']=3; smb['^']=5; smb[')']=0;

scanf("%s",str);
n=strlen(str);

for(i=0;i<n;i++)
{
    if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z')
    Exp.push_back(str[i]);
    else
    {
        if(stack.empty()||str[i]=='(')
        stack.push_back(str[i]);
        else if(str[i]==')')
        {
            t=stack.back();
            stack.pop_back();
            while(t!='(')
            {
                Exp.push_back(t);
                t=stack.back();
                stack.pop_back();
            }
        }
        else
        {
            t=stack.back();
            while(!stack.empty()&&smb[t]>=smb[str[i]])
            {
                Exp.push_back(t);
                stack.pop_back();
                t=stack.back();
            }
            stack.push_back(str[i]);
        }
    }
}
  while(!stack.empty())
    {
        t=stack.back();
        Exp.push_back(t);
        stack.pop_back();
    }
n=Exp.size();
for(i=0;i<n;i++)
cout<<Exp[i];
cout<<endl;
return 0;
}
