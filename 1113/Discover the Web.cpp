#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        printf("Case %d:\n",i);
        string A,B[100];
        B[0]="http://www.lightoj.com/";
        int n=0,m=0,k=0;
        while(1)
        {
            cin>>A;
            if(A=="QUIT")
                break;
            else if(A=="VISIT")
            {
                n++;
                if(n==0)
                    n++;
                cin>>B[n];
                cout<<B[n]<<endl;
                m=n;
                k=1;
            }
            else if(A=="BACK")
            {
                if(n==0)
                printf("Ignored\n");
                else
                {
                    n--;
                    cout<<B[n]<<endl;
                }

            }
            else if(A=="FORWARD")
            {
                if(n+1<=m)
                {
                    n++;
                    cout<<B[n]<<endl;
                }
                else
                    printf("Ignored\n");
            }
        }
    }
    return 0;
}
