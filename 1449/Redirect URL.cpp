#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        string A;
        cin>>A;
        for(j=0;j<A.size();j++)
        {
            if(A[j]==':')
                break;
        }
        printf("Case %d: https:",i);
        for(j=j+1;j<A.size();j++)
        {
            cout<<A[j];
        }
        cout<<endl;
    }
    return 0;
}
