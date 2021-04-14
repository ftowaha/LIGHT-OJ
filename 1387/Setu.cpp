#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        printf("Case %d:\n",i);
        int a,b,j,x=0;
        string A;
        scanf("%d",&a);
        for(j=0;j<a;j++)
        {
            cin>>A;
            if(A=="donate")
            {
                cin>>b;
                x+=b;
            }
            else printf("%d\n",x);
        }
    }
    return 0;
}
