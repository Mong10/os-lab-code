#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,e,f,g,h,i,j,k,l,tm,tm1,m,n,p,o,q,r,s,t,u,v,w,x,y,z,min,mx,max;
    cin>>t;
    while(t--)
    {
        map<int,int>m;
        cout<<"Enter the number of process ";
        cin>>n;
        float at[n],bt[n],ct[n],tt[n],wt[n],s1=0,s2=0,s3=0;
        for(i=0;i<n;i++)
        {
           cout<<"Arrival time and burst time of process "<<i+1<<": ";
            //cout<<"process"<<i+1<<"\t";
            cin>>at[i];
            cin>>bt[i];
        }
        tm=at[0]+bt[0];
        ct[0]=tm;
        m[0]=-1;
        for(l=1;l<n;l++)
        {
            tm1=10000;
            for(i=0;i<n;i++)
            {
                if(at[i]<=tm&&m[i]!=-1)
                {
                    if(bt[i]<tm1)
                    {
                        tm1=bt[i];
                        x=i;
                    }
                }
            }
            ct[x]=tm+tm1;
            m[x]=-1;
            tm=ct[x];

        }
        for(i=0;i<n;i++)
        {
            tt[i]=ct[i]-at[i];
            wt[i]=tt[i]-bt[i];
        }
        cout<<"arrival t.\t"<<"burst t.\t"<<"turnaround t.\t"<<"waiting t.\t"<<endl;
        for(i=0;i<n;i++)
        {
           cout<<at[i]<<"\t\t"<<bt[i]<<"\t\t"<<tt[i]<<"\t\t"<<wt[i]<<endl;
        }
    }
}

