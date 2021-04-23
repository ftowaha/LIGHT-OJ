#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int n,m,j,a,b,k;
        string B;
        cin>>n>>m;
        int A[n];
        for(j=0;j<n;j++)
        {
            cin>>A[j];
        }
        while(m--)
        {
            cin>>B;
            if(B=="S")
            {
                cin>>a;
                for(j=0;j<n;j++)
                    A[j]+=a;
            }
            else if(B=="M")
            {
                cin>>a;
                for(j=0;j<n;j++)
                    A[j]=A[j]*a;
            }
            else if(B=="D")
            {
                cin>>a;
                for(j=0;j<n;j++)
                    A[j]=A[j]/a;
            }
            else if(B=="P")
            {
                cin>>a>>b;
                swap(A[a],A[b]);
            }
            else if(B=="R")
            {
                for(j=0,k=n-1;j<k;j++,k--)
                {
                    swap(A[j],A[k]);
                }
            }
        }
        cout<<"Case "<<i<<":"<<endl;
            for(j=0;j<n-1;j++)
            cout<<A[j]<<" ";
            cout<<A[n-1]<<endl;
    }
    return 0;
}
