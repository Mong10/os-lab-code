  /*
#include <iostream>
#include <list>
#include <unordered_map>
using namespace std;

int main()
{
    int frames, size;
    cout << "Enter the number of frames: ";
    cin >> frames;
    cout << "Enter the number of pages: ";
    cin >> size;
    list<int>lis;
    unordered_map<int, list<int>::iterator> pageMap;
    int pageFaults = 0;
    cout << "Enter the page references: ";
    for (int i = 0; i < size; i++)
    {
        int currentPage;
        cin >> currentPage;
        // Check if the page is already in the frames
        auto it = pageMap.find(currentPage);
        if (it != pageMap.end())
        {
            // Move the page to the front of the list (mark it as most recently used)
            lis.erase(it->second);
        }
        else
        {
            if (lis.size() == frames)
            {
                // Remove the least recently used page from the list and map
                int lruPage =lis.back();
                lis.pop_back();
                pageMap.erase(lruPage);
            }
            pageFaults++;
        }
        // Add the page to the front of the list and update the map
        lis.push_front(currentPage);
        pageMap[currentPage]=lis.begin();
    }
    cout << "Number of Page Faults: " << pageFaults << endl;
    return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int frame,size;
    cout<<"Enter the number of frame:";
    cin>>frame;
    cout<<"Enter the number of page:";
    cin>>size;
    list<int>lis;
    unordered_map<int,list<int>::iterator>pagemap;
    int pagefault=0;
    cout<<"Enter the page reference:";
    for(int i=0;i<size;i++)
    {
        int currentpage;
        cin>>currentpage;
        auto it=pagemap.find(currentpage);
        if(it!=pagemap.end()){
            lis.erase(it->second);
        }
        else
        {
            if(lis.size()==frame)
            {
                int lpage=lis.back();
                lis.pop_back();
                pagemap.erase(lpage);

            }
            pagefault++;
        }
        lis.push_front(currentpage);
        pagemap[currentpage]=lis.begin();
    }
  cout << "Number of Page Faults: " << pagefault << endl;
}
*/
/*
#include<bits/stdc++.h>  // বিভিন্ন গুণগুলি এবং ডেটা স্ট্রাকচার প্রদান করার জন্য একটি লাইব্রেরি যুক্ত করুন।
using namespace std;  // স্ট্যান্ডার্ড নেমসপেস ব্যবহার করুন যাতে "std::" এক্সপ্লিসিটলি ব্যবহার না করতে হয়।

int main()
{
  int frame, size;
  cout << "Enter the number of frame:";  // ফ্রেমের সংখ্যা প্রদান করুন:
  cin >> frame;  // ব্যবহৃত ফ্রেমের সংখ্যা পড়ুন:

  cout << "Enter the number of size:";  // সাইজের সংখ্যা প্রদান করুন:
  cin >> size;  // প্রদত্ত সাইজ পড়ুন:

  list<int> lis;  // ডেটা স্ট্রাকচার তৈরি করতে একটি লিঙ্ক্ড লিস্ট ব্যবহার করা হয়েছে
  unordered_map<int, list<int>::iterator> pagemap;  // পৃষ্ঠা ম্যাপ তৈরি করতে একটি অসংখ্য ম্যাপ ব্যবহার করা হয়েছে
  int pagefault = 0;  // পৃষ্ঠা ফল্ট গণনা করার জন্য একটি গণনার ভেরিয়েবল সেট করা হয়েছে

  cout << "Enter the number of page reference:";  // পৃষ্ঠা সন্দর্ভের সংখ্যা প্রদান করুন:
  for (int i = 0; i < size; i++)
  {
      int currentpage;
      cin >> currentpage;  // বর্তমান পৃষ্ঠা সন্দর্ভ পড়ুন
      auto it = pagemap.find(currentpage);  // পৃষ্ঠা ম্যাপে বর্তমান পৃষ্ঠা সন্দর্ভ পাওয়া যাক
      if (it != pagemap.end())  // যদি পাওয়া যায়:
      {
          lis.erase(it->second);  // লিঙ্ক্ড লিস্ট থেকে পৃষ্ঠা সর্দ্ধ করুন
      }
      else  // যদি না পাওয়া যায়:
      {
          if (lis.size() == frame)  // লিঙ্ক্ড লিস্টে মোট পৃষ্ঠার সংখ্যা ফ্রেমের সংখ্যার সমান হলে:
          {
              int lpage = lis.back();  // শেষে যাওয়া পৃষ্ঠা নেওয়া হয়
              lis.pop_back();  // শেষে যাওয়া পৃষ্ঠা লিঙ্ক্ড লিস্ট থেকে মুছে ফেলা হয়
              pagemap.erase(lpage);  // পৃষ্ঠা ম্যাপ থেকে শেষে যাওয়া পৃষ্ঠা সরানো হয়
          }
          pagefault++;  // পৃষ্ঠা ফল্ট কাউন্টার বৃদ্ধি করুন
      }
      lis.push_front(currentpage);  // বর্তমান পৃষ্ঠা লিঙ্ক্ড লিস্টের সামনে যোগ করুন
      pagemap[currentpage] = lis.begin();  // পৃষ্ঠা ম্যাপে বর্তমান পৃষ্ঠা সন্দর্ভ সংরক্ষণ করুন
  }

  cout << "Number of pagefault: " << pagefault << endl;  // মোট পৃষ্ঠা ফল্ট প্রদর্শন করুন
}

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int frame,size;
  cout<<"Enter the number of frame:";
  cin>>frame;
  cout<<"Enter the number of size:";
  cin>>size;
  list<int>lis;
  unordered_map<int,list<int>::iterator>pagemap;
  int pagefault=0;
  cout<<"Enter the number of page reference:";
  for(int i=0;i<size;i++)
  {
      int currentpage;
      cin>>currentpage;
      auto it=pagemap.find(currentpage);
      if(it!=pagemap.end())
      {
          lis.erase(it->second);
      }
      else
      {
          if(lis.size()==frame)
          {
              int lpage=lis.back();
              lis.pop_back();
              pagemap.erase(lpage);
          }
          pagefault++;
      }
      lis.push_front(currentpage);
      pagemap[currentpage]=lis.begin();

  }
  cout<<"Number of pagefault: "<<pagefault<<endl;
}



