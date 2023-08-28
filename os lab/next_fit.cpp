/*
#include<bits/stdc++.h>
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

     i=0;
     for(j=0;j<m;)
     {
             if(p[j]<=b[i]&&m1[i]==0)
             {
                 cout<<"process "<<p[j]<<" stored in block "<<b[i]<<endl;
                 m1[i]=-1;
                 j++;

             }
           i++;
           if(i==n)
           {
               i=i%5;
           }
     }
}
*/
#include<bits/stdc++.h>
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

     i=0;
     for(j=0;j<m;)
     {
             if(p[j]<=b[i]&&m1[i]==0)
             {
                 cout<<"process "<<p[j]<<" stored in block "<<b[i]<<endl;
                 m1[i]=-1;
                 j++;

             }
           i++;
           if(i==n)
           {
               i=i%5;
           }
     }
}
