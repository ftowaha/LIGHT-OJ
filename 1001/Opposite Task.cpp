#include<bits/stdc++.h>
#include<map>
using namespace std;
int main()
{
    int n,i,a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a>10)
            printf("%d %d\n",a-10,a-(a-10));
        else printf("0 %d\n",a);
    }
    return 0;
}
