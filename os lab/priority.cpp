/*
#include<iostream>  // ইনপুট/আউটপুট স্ট্রিম লাইব্রেরি ইমপোর্ট করুন

using namespace std;  // স্ট্যান্ডার্ড নেমসপেস ব্যবহার করুন

int main()  // মূল ফাংশন শুরু হয়
{
    int a[10], b[10], x[10];  // প্রক্রিয়ার Arrival time, Burst time, এবং সময় সংরক্ষণ করার জন্য ভেরিয়েবল ডিক্লেয়ার করুন
    int waiting[10], turnaround[10], completion[10], p[10];  // প্রক্রিয়ার Waiting time, Turnaround time, Completion time, এবং Priority সংরক্ষণ করার জন্য ভেরিয়েবল ডিক্লেয়ার করুন
    int i, j, smallest, count = 0, time, n;  // প্রয়োজনীয় ভেরিয়েবল ডিক্লেয়ার করুন
    double avg = 0, tt = 0, end;  // গড় ও সর্বমোট Turnaround time গণনা করার জন্য ভেরিয়েবল ডিক্লেয়ার করুন

    cout << "\nEnter the number of Processes: ";  // ব্যবহারকারীকে প্রক্রিয়ার সংখ্যা প্রদান করতে প্রম্পট প্রদান করুন
    cin >> n;  // প্রক্রিয়ার সংখ্যা পড়ুন

    cout << "\nEnter arrival time of process: ";
    for (i = 0; i < n; i++) {
        cin >> a[i];  // প্রক্রিয়ার Arrival time পড়ুন
    }

    cout << "\nEnter burst time of process: ";
    for (i = 0; i < n; i++) {
        cin >> b[i];  // প্রক্রিয়ার Burst time পড়ুন
    }

    cout << "\nEnter priority of process: ";
    for (i = 0; i < n; i++) {
        cin >> p[i];  // প্রক্রিয়ার Priority পড়ুন
    }
    for (i = 0; i < n; i++)
        x[i] = b[i];  // Burst time এর কপি তৈরি করুন

    p[9] = -1;  // শেষ প্রক্রিয়ার Priority পরিবর্তন করুন
    for (time = 0; count != n; time++)  // সময় এবং সম্পূর্ণ প্রক্রিয়ার সংখ্যা পরিস্থিতি পরীক্ষা করার জন্য লুপ চালান
    {
        smallest = 9;  // সবচেয়ে কৃত্রিম মান সেট করুন
        for (i = 0; i < n; i++)  // সময় এবং প্রাথমিকতা অনুসারে সব প্রক্রিয়ার জন্য পরীক্ষা করুন
        {
            if (a[i] <= time && p[i] > p[smallest] && b[i] > 0)
                smallest = i;  // সবচেয়ে উচ্চ প্রাথমিকতা প্রক্রিয়ার ইনডেক্স সংরক্ষণ করুন
        }
        b[smallest]--;  // প্রক্রিয়ার Burst time কমান

        if (b[smallest] == 0)  // যদি প্রক্রিয়ার Burst time শূন্য হয়:
        {
            count++;  // সম্পূর্ণ প্রক্রিয়ার সংখ্যা বৃদ্ধি
            end = time + 1;  // প্রক্রিয়ার সম্পূর্ণ সময় গণনা করুন
            completion[smallest] = end;  // প্রক্রিয়ার সমপূর্ণতা সময় সংরক্ষণ করুন
            waiting[smallest] = end - a[smallest] - x[smallest];  // প্রক্রিয়ার Waiting time গণনা করুন
            turnaround[smallest] = end - a[smallest];  // প্রক্রিয়ার Turnaround time গণনা করুন
        }
    }
    cout << "Process"
         << "\t" << "burst-time"
         << "\t" << "arrival-time"
         << "\t" << "waiting-time"
         << "\t" << "turnaround-time"
         << "\t" << "completion-time"
         << "\t" << "Priority" << endl;  // শিরোনাম প্রিন্ট করুন
    for (i = 0; i < n; i++) {  // প্রতিটি প্রক্রিয়ার জন্য ডেটা প্রিন্ট করুন
        cout << "p" << i + 1 << "\t\t" << x[i] << "\t\t" << a[i] << "\t\t" << waiting[i] << "\t\t" << turnaround[i] << "\t\t" << completion[i] << "\t\t" << p[i] << endl;  // প্রক্রিয়ার ডেটা প্রিন্ট করুন
        avg = avg + waiting[i];  // গড় ও সর্বমোট Waiting time যোগ করুন
        tt = tt + turnaround[i];  // সর্বমোট Turnaround time যোগ করুন
    }
    cout << "\n\nAverage waiting time =" << avg / n;  // গড় Waiting time প্রিন্ট করুন
    cout << "  Average Turnaround time =" << tt / n << endl;  // গড় Turnaround time প্রিন্ট করুন

    return 0;  // প্রোগ্রাম সম্পন্ন করুন
}

*/

#include<iostream>

using namespace std;
int main()
{
    int a[10],b[10],x[10];
    int waiting[10],turnaround[10],completion[10],p[10];
    int i,j,smallest,count=0,time,n;
    double avg=0,tt=0,end;

    cout<<"\nEnter the number of Processes: ";
    cin>>n;

    cout<<"\nEnter arrival time of process: ";
    for(i=0;i<n;i++)
    {

      cin>>a[i];
    }

    cout<<"\nEnter burst time of process: ";
    for(i=0;i<n;i++)
    {

      cin>>b[i];
    }

    cout<<"\nEnter priority of process: ";
    for(i=0;i<n;i++)
    {

      cin>>p[i];
    }
    for(i=0; i<n; i++)
        x[i]=b[i];

    p[9]=-1;
    for(time=0; count!=n; time++)
    {
        smallest=9;
        for(i=0; i<n; i++)
        {
            if(a[i]<=time && p[i]>p[smallest] && b[i]>0 )
                smallest=i;
        }
        b[smallest]--;

        if(b[smallest]==0)
        {
            count++;
            end=time+1;
            completion[smallest] = end;
            waiting[smallest] = end - a[smallest] - x[smallest];
            turnaround[smallest] = end - a[smallest];
        }
    }
     cout<<"Process"<<"\t"<< "burst-time"<<"\t"<<"arrival-time" <<"\t"<<"waiting-time" <<"\t"<<"turnaround-time"<< "\t"<<"completion-time"<<"\t"<<"Priority"<<endl;
    for(i=0; i<n; i++)
    {
         cout<<"p"<<i+1<<"\t\t"<<x[i]<<"\t\t"<<a[i]<<"\t\t"<<waiting[i]<<"\t\t"<<turnaround[i]<<"\t\t"<<completion[i]<<"\t\t"<<p[i]<<endl;
        avg = avg + waiting[i];
        tt = tt + turnaround[i];
    }
   cout<<"\n\nAverage waiting time ="<<avg/n;
    cout<<"  Average Turnaround time ="<<tt/n<<endl;
}

