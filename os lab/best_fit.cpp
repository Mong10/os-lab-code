/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l=0,m,n,o;
    cin>>n>>m;
    int b[n],p[m];
    map<int,int>m1;
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<m;i++)
    {
        cin>>p[i];
    }
    sort(b,b+n);
    for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
        {
             if(p[j]<=b[i]&&m1[i]==0)
             {
                 cout<<p[j]<<" stored in "<<b[i]<<endl;
                 m1[i]=-1;
                 break;
             }
        }
    }
}
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int b[n],p[m];
    map<int,int>m1;
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>p[i];
    }
    sort(b,b+n);
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {
            if(p[j]<=b[i] && m1[i]==0)
            {
                cout<<p[j]<<"Store in"<<b[i]<<endl;
                m1[i]=-1;
                break;
            }
        }
    }
}
