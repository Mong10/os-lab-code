/*
#include <iostream>
#include <queue>

using namespace std;

int main() {
    int frames, size;

    cout << "Enter the number of frames: ";
    cin >> frames;

    cout << "Enter the number of pages: ";
    cin >> size;

    queue<int> fifoQueue;
    int pageFaults = 0;

    int currentPage;
    cout << "Enter the page references: ";
    for (int i = 0; i < size; i++) {
        cin >> currentPage;

        // Check if the page is already in the queue
        bool pageExists = false;
        queue<int> tempQueue = fifoQueue;

        while(!tempQueue.empty()){
            if (tempQueue.front()==currentPage) {
                pageExists = true;
                break;
            }
            tempQueue.pop();
        }

        // If page is not in the queue, add it
        if (!pageExists) {
            if (fifoQueue.size() == frames) {
                fifoQueue.pop(); // Remove the oldest page from the queue
            }
            fifoQueue.push(currentPage);
            pageFaults++;
        }
    }

    cout << "Number of Page Faults: " << pageFaults << endl;

    return 0;
}
*/
/*
#include <iostream>

using namespace std;

int main() {
    int frames, size;

    cout << "Enter the number of frames: ";
    cin >> frames;

    cout << "Enter the number of pages: ";
    cin >> size;

    int fifoQueue[frames];
    int oldestPageIndex = 0; // Index of the oldest page in the array
    int pageFaults = 0;

    for (int i = 0; i < frames; i++) {
        fifoQueue[i] = -1; // Initialize all pages in the array as -1 (assuming -1 is not a valid page)
    }

    int currentPage;
    cout << "Enter the page references: ";
    for (int i = 0; i < size; i++) {
        cin >> currentPage;

        // Check if the page is already in the queue
        bool pageExists = false;
        for (int j = 0; j < frames; j++) {
            if (fifoQueue[j] == currentPage) {
                pageExists = true;
                break;
            }
        }

        // If page is not in the queue, add it
        if (!pageExists) {
            fifoQueue[oldestPageIndex] = currentPage; // Replace the oldest page with the new page
            oldestPageIndex = (oldestPageIndex + 1) % frames; // Move the oldestPageIndex circularly
            pageFaults++;
        }
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
    int fifoqueue[frame];
    int oldestPageIndex=0;
    int pagefault=0;
    for(int i=0;i<frame;i++)
    {
        fifoqueue[i]=-1;
    }
    int currentPage;
    cout<<"Enter the page referenec:";
    for(int i=0;i<size;i++)
    {
    cin>>currentPage;
    bool pageExist=false;
    for(int j=0;j<frame;j++)
    {
        if(fifoqueue[j]==currentPage)
        {
            pageExist=true;
            break;
        }
    }
    if(!pageExist)
    {
        fifoqueue[oldestPageIndex]=currentPage;
        oldestPageIndex=(oldestPageIndex+1)%frame;
        pagefault++;
    }
    }
    cout<<"Number of page fault:"<<pagefault<<endl;
}
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int frame,size;
  cout<<"Enter the number of frame:";
  cin>>frame;
  cout<<"Enter the number of page:";
  cin>>size;
  int fifoqueue[frame];
  int pagefault=0;
  int oldestpageIndex=0;
  for(int i=0;i<frame;i++)
  {
      fifoqueue[i]=-1;
  }
  int currentpage;
  cout<<"Enter the number of page reference:";
  for(int i=0;i<size;i++)
  {
      cin>>currentpage;
      bool pageExist=false;
      for(int j=0;j<frame;j++)
      {
          if(fifoqueue[j]==currentpage)
          {
              pageExist=true;
              break;
          }
      }
      if(!pageExist)
      {
          fifoqueue[oldestpageIndex]=currentpage;
          oldestpageIndex=(oldestpageIndex+1)%frame;
          pagefault++;
      }
  }
  cout<<"Enter the number of pagefault:"<<pagefault<<endl;
}

