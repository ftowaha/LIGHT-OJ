#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    int n,i,j;
    cin>>n;
    string A;
    getline(cin,A);
    for(i=1;i<=n;i++)
    {
        string A1,A2,B,C;
        int k=0;
        getline(cin,A1);
        for(j=0;j<A1.size();j++)
        {
            if(A1[j]==' ')
                continue;
            else if(A1[j]>='A'&&A1[j]<='Z')
                A1[j]=A1[j]+32;
            B+=A1[j];
            k++;
        }
        sort(B.begin(),B.end());
        getline(cin,A2);
        k=0;
        for(j=0;j<A2.size();j++)
        {
            if(A2[j]==' ')
                continue;
            else if(A2[j]>='A'&&A2[j]<='Z')
                A2[j]=A2[j]+32;
            C+=A2[j];
            k++;
        }
        sort(C.begin(),C.end());
        //cout<<B<<"\t"<<C<<endl;
        if(B==C)
            printf("Case %d: Yes\n",i);
        else printf("Case %d: No\n",i);
    }
   return 0;
}
