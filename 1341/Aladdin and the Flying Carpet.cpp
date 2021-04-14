#include<bits/stdc++.h>
#include<vector>
using namespace std;
int A[1000001];
vector<long long int>vec;
void seive()
{
    int i,j;
    A[0]=1;
    A[1]=1;
    for(i=2;i<=1000000;i+=2)
        A[i]=1;
    for(i=3;i<=1000000;i+=2)
    {
        if(A[i]==0)
        {
            for(j=i+i;j<=1000000;j+=i)
            {
                A[j]=1;
            }
        }
    }
    vec.push_back(2);
    for(i=3;i<=1000000;i+=2)
    {
        if(A[i]==0)
            vec.push_back(i);
    }

}
int main()
{
    int n,i;
    seive();
    //freopen("input.txt","r",stdin);
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        long long int x,y,z=1,j,k=0,l=1;
        scanf("%lld %lld",&x,&y);
        l=x;
        for(j=0;j<vec.size()&&vec[j]<=sqrt(x);j++)
        {
            int cnt=1;
            if(x%vec[j]==0)
            {
                while(x%vec[j]==0)
                {
                    x=x/vec[j];
                    cnt++;
                }
            }
            z*=cnt;
        }
        if(x!=1)
            z*=2;
        z=z/2;
        //cout<<z<<endl;
        x=sqrt(l);
        if(y>x||y*y==l)
            z=0;
        else
        {
             for(j=1;j<y;j++)
            {
                if(l%j==0)
                    z--;
            }
        }
        printf("Case %d: %lld\n",i,z);
    }
    return 0;
}
