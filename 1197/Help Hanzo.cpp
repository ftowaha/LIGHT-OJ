#include<bits/stdc++.h>
#include<vector>
using namespace std;
bool A[100000];
vector<long long int>vec;
void seive()
{
    long long int i,j;
    for(i=4;i<100000;i+=2)
    {
        A[i]=true;
    }
    for(i=3;i<100000;i+=2)
    {
        if(A[i]==false)
        {
            for(j=i+i;j<100000;j+=i)
            {
                A[j]=true;
            }
        }
    }
    vec.push_back(2);
    for(i=3;i<100000;i+=2)
    {
        if(A[i]==false)
            vec.push_back(i);
    }
}
int main()
{
    seive();
    int i,n;
    //freopen("input.txt","r",stdin);
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        long long int x,y,z=0,k,l,j;
        bool B[100001]={0};
        scanf("%lld %lld",&x,&y);
        if(x==1)
            x++;
        for(k=0;vec[k]<=sqrt(y);k++)
        {
            j=x;
            j=j%vec[k];
            if(j==0)
                j=x;
            else j=x+(vec[k]-j);
            if(j%vec[k]==0)
            {
                for(l=j;l<=y;l+=vec[k])
                {
                    if(l!=vec[k])
                    B[l-x]=true;
                }
            }
        }
        for(k=x;k<=y;k++)
        {
            if(B[k-x]==false)
                z++;
        }
        printf("Case %d: %lld\n",i,z);
    }
    return 0;
}
