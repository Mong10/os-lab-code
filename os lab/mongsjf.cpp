/*
 tt=ct-at
 wt=tt-bt

*/
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, c, d, e, f, g, h, i, j, k, l, tm, tm1, m, n, p, o, q, r, s, t, u, v, w, x, y, z;

    cout << "Enter the number of process ";
    cin >> n;
    float at[n], bt[n], ct[n], tt[n], wt[n], s1 = 0, s2 = 0, s3 = 0;
    bool processed[n] ={false};

    for (i = 0; i < n; i++)
    {
        cout << "Arrival time and burst time of process " << i + 1 << ": ";
        cin >> at[i] >> bt[i];
    }

    tm = at[0] + bt[0];
    ct[0] = tm;
    processed[0] = true;

    for (l = 1; l < n; l++)
    {
        tm1 = 10000;
        for (i = 0; i < n; i++)
        {
            if (at[i] <= tm && !processed[i])
            {
                if (bt[i] < tm1)
                {
                    tm1 = bt[i];
                    x = i;
                }
            }
        }
        ct[x] = tm + tm1;
        processed[x] = true;
        tm = ct[x];
    }

    for (i = 0; i < n; i++)
    {
        tt[i] = ct[i] - at[i];
        wt[i] = tt[i] - bt[i];
    }

    cout << "arrival t.\t" << "burst t.\t" << "turnaround t.\t" << "waiting t.\t" << endl;
    for (i = 0; i < n; i++)
    {
        cout << at[i] << "\t\t" << bt[i] << "\t\t" << tt[i] << "\t\t" << wt[i] << endl;
    }

}
*/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,tm,tm1,x;
    cout<<"How many time of process:";
    cin>>n;
    float at[n],bt[n],ct[n],tt[n],wt[n],s1=0,s2=0,s3=0;
    bool processed[n]={false};
    for(ll i=0;i<n;i++)
    {
        cout<<"Enter the arrival and burst time:"<<i+1<<": ";
        cin>>at[i]>>bt[i];
    }
    tm=at[0]+bt[0];
    ct[0]=tm;
    processed[0]=true;
    for(ll i=1;i<n;i++)
    {
        tm1=10000;
        for(ll i=0;i<n;i++)
        {
            if(at[i]<=tm && !processed[i])
            {
                if(bt[i]<tm1)
                {
                    tm1=bt[i];
                    x=i;
                }
            }
        }
        ct[x]=tm+tm1;
        processed[x]=true;
        tm=ct[x];
    }
    for(ll i=0;i<n;i++)
    {
        tt[i]=ct[i]-at[i];
        wt[i]=tt[i]-bt[i];

    }
    cout<<"Arrival t.\t"<<"Burst t.\t"<<"turnaround t.\t"<<"waiting t.\t"<<endl;
    for(ll i=0;i<n;i++)
    {
        cout<<at[i]<<"\t\t"<<bt[i]<<"\t\t"<<tt[i]<<"\t\t"<<wt[i]<<endl;
    }
}

