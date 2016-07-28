/* -------------------------------- */
/* Name: MD. Khairul Basar          */
/* Institute: HSTU                  */
/* Dept: CSE                        */
/* Email: khairul.basar93@gmail.com */
/* -------------------------------- */

#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <cstring>
#include <climits>

#include <iostream>
#include <iomanip>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <string>
#include <utility>
#include <sstream>
#include <algorithm>

#include<bits/stdc++.h>
/* all header files included */

#define LL long long
#define pii pair<int,int>

#define mod 1000000007
#define pi acos(-1.0)

#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)

#define sp printf(" ")
#define nl printf("\n")

#define tc1(x) printf("Case %d: ",x)
#define tc2(x) printf("Case #%d: ",x)

#define pr1(x) cout<<x<<"\n"
#define pr2(x,y) cout<<x<<" "<<y<<"\n"
#define pr3(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n"
/* defining macros */

using namespace std;

int dx4[]={1,-1,0,0};
int dy4[]={0,0,1,-1};
int dx8[]={1,-1,0,0,-1,1,-1,1};
int dy8[]={0,0,1,-1,1,1,-1,-1};
int dkx8[]={-1,1,-1,1,-2,-2,2,2};
int dky8[]={2,2,-2,-2,1,-1,1,-1};
/* direction array */

int main()
{
    int n,l,i,j,Min,x[1000],a,b;
    double res,Max;
    bool first,last;
    while(cin>>n>>l)
    {
        first=last=false;
        for(i=0;i<n;i++)
        {
            cin>>x[i];
            if(x[i]==0)
                first=true;
            if(x[i]==l)
                last=true;
        }
        sort(x,x+n);
        Max=-1;
        for(i=0;i<n-1;i++)
        {
            res=x[i+1]-x[i];
            if(res>Max)
                Max=res;
        }
        res=Max/2.0;
        a=x[0];
        b=l-x[n-1];
        if(!first)
        {
            if(a>res)
                res=a;
        }
        if(!last)
        {
            if(b>res)
                res=b;
        }
        printf("%.10lf",res);
        nl;
    }
    return 0;
}