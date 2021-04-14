#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int x;
        string C;
        cin>>x>>C;
        if(C=="Alice")
        {
            if(x%3==1)
                printf("Case %d: Bob\n",i);
            else printf("Case %d: Alice\n",i);
        }
        else
        {
            if(x%3==0)
                printf("Case %d: Alice\n",i);
            else printf("Case %d: Bob\n",i);
        }
    }
    return 0;
}
