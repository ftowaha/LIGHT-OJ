#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int x,y,a=0;
        cin>>x;
        while(x!=0)
        {
            y=x%2;
            x=x/2;
            if(y==1)
                a++;
        }
        printf("Case %d: ",i);
        if(a%2==0)
            printf("even\n");
        else printf("odd\n");
    }
    return 0;
}
