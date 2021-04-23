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
        int x=0,n,j,l,y,z;
        cin>>n;
        int A[n];
        for(j=0;j<n;j++)
            cin>>A[j];
        for(j=0;j<n;j++)
        {
            z=A[j];
            y=-1;
            for(l=j+1;l<n;l++)
            {
                if(A[j]>A[l]&&A[l]<z)
                {
                    y=l;
                    z=A[l];
                }
            }
            if(y!=-1)
            {
                x++;
                z=A[y];
                A[y]=A[j];
                A[j]=z;
            }
        }
        printf("Case %d: %d\n",i,x);
    }
    return 0;
}
