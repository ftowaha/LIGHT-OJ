#include<bits/stdc++.h>
#include<vector>
using namespace std;
bool A[10000001];
vector<int>vec;
int main()
{
    int i,j,n;
    A[0]=true;
    A[1]=true;
    for(i=2;i<10000001;i++)
    {
        if(A[i]==false)
        {
            for(j=i+i;j<10000001;j+=i)
            {
                A[j]=true;
            }
        }
    }
    int k=0;
    for(i=2;i<10000001;i++)
    {
        if(A[i]==false)
        {
            vec.push_back(i);
        }
    }
    //freopen("input.txt","r",stdin);
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int m,x=0,a=0,b=0;
        scanf("%d",&m);
        while(1)
        {
            b=m-vec[a];
            if(A[b]==false && vec[a]<=b)
                x++;
            else if(vec[a]>b)
                break;
            a++;
        }
        printf("Case %d: %d\n",i,x);
    }
    return 0;
}
