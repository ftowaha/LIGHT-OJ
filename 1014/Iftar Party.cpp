#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;
int main()
{
    long long int n,i,j;
    //freopen("input.txt","r",stdin);
    scanf("%lld",&n);
    for(j=1;j<=n;j++)
    {
        long long int x,y,a,b;
        scanf("%lld %lld",&x,&y);
        a=x-y;
        if(x==0)
            printf("Case %lld: 1",j);
       else if(a<=y)
            printf("Case %lld: impossible",j);

        else {
            vector<long long int>vec;
            map<long long int,long long int>mp;
            for(i=1;i*i<=a;i++)
            {
                if(a%i==0)
                {
                    b=a/i;
                    if(i>y&&mp[i]==0)
                    {
                        vec.push_back(i);
                        mp[i]=1;
                    }

                    if(mp[b]==0&&b>y)
                    {
                        vec.push_back(b);
                        mp[b]=1;
                    }
                }
            }
            sort(vec.begin(),vec.end());
            printf("Case %lld: ",j);
            for(i=0;i<vec.size()-1;i++)
                printf("%lld ",vec[i]);
                printf("%lld",vec[vec.size()-1]);
        }
        printf("\n");
    }
    return 0;
}
