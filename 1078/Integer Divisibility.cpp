#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int n,x,k=0,y=0;
        scanf("%d %d",&n,&x);
        k+=x;
        while(1)
        {
            k=k%n;
            y++;
            if(k==0)
                break;
            k=(k*10)+x;

        }
        printf("Case %d: %d\n",i,y);
    }


    return 0;
}
