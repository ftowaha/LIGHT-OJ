#include<bits/stdc++.h>
#include<vector>
using namespace std;
int A[1000008];
long long int i,j,n,s,a,x,y;
vector<int>vec;
void sive()
{
    int k=0;
    A[0]=1;
    A[1]=1;
    for(i=2;i<=1000007;i++)
    {
        if(A[i]==0)
        {
            for(j=i*2;j<=1000007;j=j+i)
                A[j]=1;
        }
    }
    for(i=0;i<=1000007;i++)
    {
        if(A[i]==0)
        {
            vec.push_back(i);
        }
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    sive();
    scanf("%lld",&n);
    for(j=1;j<=n;j++)
    {
        scanf("%lld",&x);
        s=1;
        for(i=0;i<vec.size()&&vec[i]<=sqrt(x);i++)
        {
            a=1;
            while(x%vec[i]==0)
            {
                a++;
                x=x/vec[i];
            }
            s=s*a;
        }
        if(x!=1)
            s=s*2;
        printf("Case %lld: %lld\n",j,s-1);
    }
    return 0;
}
