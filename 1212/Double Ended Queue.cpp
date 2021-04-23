#include<bits/stdc++.h>
#include<deque>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int n,m,a;
        deque<int>q;
        cin>>n>>m;
        string B;
        cout<<"Case "<<i<<":"<<endl;
        while(m--)
        {
            cin>>B;
            if(B=="pushLeft"||B=="pushRight")
            {
                cin>>a;
                if(q.size()==n)
                    cout<<"The queue is full"<<endl;
                else if(B=="pushLeft")
                {
                    cout<<"Pushed in left: "<<a<<endl;
                    q.push_front(a);
                }
                else if(B=="pushRight")
                {
                    cout<<"Pushed in right: "<<a<<endl;
                    q.push_back(a);
                }
            }
            else if(B=="popLeft"||B=="popRight")
            {
                if(q.size()==0)
                   cout<<"The queue is empty"<<endl;
                else if(B=="popLeft")
                {
                    cout<<"Popped from left: "<<q.front()<<endl;
                    q.pop_front();
                }
                else if(B=="popRight")
                {
                    cout<<"Popped from right: "<<q.back()<<endl;
                    q.pop_back();
                }
            }
        }
    }
    return 0;
}
