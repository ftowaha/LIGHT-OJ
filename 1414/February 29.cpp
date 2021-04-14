#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    int ii,tt;
    scanf("%d",&tt);
    for(ii=1;ii<=tt;ii++)
    {
        int a1,b1,a2,b2,x1,x2,x3,x;
        string A,B;
        cin>>A;
        scanf("%d,%d",&a1,&b1);
        cin>>B;
        scanf("%d,%d",&a2,&b2);
        if(A=="January")
            b1=b1;
        else if(A=="February")
            b1=b1;
        else b1++;
        if(B=="January")
            b2--;
        else if(B=="February"&&a2!=29)
            b2--;
        x1=b1%4;
        if(x1!=0)
            x1=b1+(4-x1);
        else x1=b1;
        x2=b1%100;
        if(x2!=0)
            x2=b1+(100-x2);
        else x2=b1;
        x3=b1%400;
        if(x3!=0)
            x3=b1+(400-x3);
        else x3=b1;
       if(x1<=b2)
       {
           x1=((b2-x1)/4)+1;
       }
       else x1=0;
       if(x2<=b2)
       {
           x2=((b2-x2)/100)+1;
       }
       else x2=0;
       if(x3<=b2)
       {
           x3=((b2-x3)/400)+1;
       }
       else x3=0;
       x=x1-x2+x3;
       printf("Case %d: %d\n",ii,x);
    }
    return 0;
}
