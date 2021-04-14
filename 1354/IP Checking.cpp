#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int j=1;j<=n;j++)
    {
        int A[4]={0,0,0,0},i,k=0,B[10];
        string ip,ip1,ip2,x;
        cin>>x>>ip;
        for(i=0;i<x.size();i++)
        {
            if(x[i]=='.')
            {
                k++;
                continue;
            }
            A[k]=A[k]*10+(x[i]-'0');

        }
        for(i=0;i<4;i++)
        {
            k=0;
            while(A[i]!=0)
            {
                B[k]=A[i]%2;
                k++;
                A[i]=A[i]/2;
            }
            for(k=k-1;k>=0;k--)
            {
                ip1+=B[k]+'0';
            }
            if(i!=3)
            ip1+='.';
        }
        k=0;
        for(i=0;i<ip.size();i++)
        {
            if(k==0&&ip[i]=='0')
                continue;
            else if(ip[i]=='.')
            {
                k=0;
                ip2+='.';
                continue;
            }
            else k=1;
            ip2+=ip[i];
        }
        //cout<<ip2<<endl;
        if(ip2==ip1)
            printf("Case %d: Yes\n",j);
        else printf("Case %d: No\n",j);
    }
    return 0;
}
