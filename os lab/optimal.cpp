/*#include <bits/stdc++.h>
using namespace std;

int main() {
    int frames, size;
    cout<<"Enter the number of frames: ";
    cin>>frames;
    cout<<"Enter the number of pages: ";
    cin>>size;
    vector<int>pages(size);
    cout<< "Enter the page references: ";
    for(int i = 0; i < size; i++) {
        cin >> pages[i];
    }
    vector<int> frameSet;
    int pageFaults = 0;
    for (int i = 0; i < size; i++) {
        int currentPage = pages[i];
        if(find(frameSet.begin(),frameSet.end(),currentPage)==frameSet.end()) {
            if (frameSet.size()<frames) {
                frameSet.push_back(currentPage);
            } else {
                vector<int>futureIndexes(frames, size);
                for (int j = i + 1; j < size; j++) {
                    auto it = find(frameSet.begin(), frameSet.end(), pages[j]);
                    if (it != frameSet.end()) {
                        int index = distance(frameSet.begin(), it);
                        futureIndexes[index] = j;
                    }
                }
                int farthestIndex = max_element(futureIndexes.begin(), futureIndexes.end()) - futureIndexes.begin();
                frameSet[farthestIndex] = currentPage;
            }
            pageFaults++;
        }
    }
    cout << "Number of Page Faults: " << pageFaults << endl;
    return 0;
}
*/
/*
#include<bits/stdc++.h>  // Including a library that provides various useful functions and data structures.
using namespace std;  // Using the standard namespace to avoid explicit use of "std::".

int main() {
    int frame, size;  // Declaring variables to store the number of frames and size of the input.

    cout << "Enter the number of frame:";  // Prompting the user to input the number of frames.
    cin >> frame;  // Reading the number of frames from the user.

    cout << "Enter the number of size:";  // Prompting the user to input the size of the page reference sequence.
    cin >> size;  // Reading the size of the page reference sequence.

    vector<int> page(size);  // Creating a vector to store the page reference sequence.

    cout << "Enter the number of page reference:";  // Prompting the user to input the page reference values.
    for (int i = 0; i < size; i++) {
        cin >> page[i];  // Reading each page reference value from the user and storing it in the vector.
    }

    vector<int> framset;  // Creating a vector to represent the current set of frames.
    int pagefault = 0;  // Initializing a counter to keep track of the number of page faults.

    for (int i = 0; i < size; i++) {  // Looping through each page reference in the sequence.
        int currentpage = page[i];  // Getting the current page reference value.

        // Checking if the current page is not already in the frame set.
        if (find(framset.begin(), framset.end(), currentpage) == framset.end()) {
            // If there's space in the frame set, add the current page.
            if (framset.size() < frame) {
                framset.push_back(currentpage);  // Adding the current page to the frame set.
            } else {
                // If there's no space, find the future indexes of the pages in the frame set.
                vector<int> futureIndex(frame, size);  // Initializing with a default large value.

                // Loop through the remaining page references to find future indexes.
                for (int j = i + 1; j < size; j++) {
                    auto it = find(framset.begin(), framset.end(), page[j]);
                    if (it != framset.end()) {
                        int index = distance(framset.begin(), it);  // Calculating the index of the page in the frame set.
                        futureIndex[index] = j;  // Storing the future index of the page.
                    }
                }

                // Finding the page index with the maximum future index.
                int futureIndex1 = max_element(futureIndex.begin(), futureIndex.end()) - futureIndex.begin();

                // Replacing the page with the highest future index with the current page.
                framset[futureIndex1] = currentpage;
            }

            pagefault++;  // Incrementing the page fault counter.
        }
    }

    cout << "Number of pagefault:" << pagefault << endl;  // Displaying the total number of page faults.

    return 0;  // Indicating successful completion of the program.
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
    vector<int>page(size);
    cout<<"Enter the number of page reference:";
    for(int i=0;i<size;i++)
    {
        cin>>page[i];
    }
    vector<int>framset;
    int pagefault=0;
    for(int i=0;i<size;i++)
    {
        int currentpage=page[i];
        if(find(framset.begin(),framset.end(),currentpage)==framset.end())
        {
            if(framset.size()<frame)
            {
                framset.push_back(currentpage);
            }
            else{
                vector<int>futureIndex(frame,size);
                for(int j=i+1;j<size;j++)
                {
                    auto it=find(framset.begin(),framset.end(),page[j]);
                    if(it!=framset.end())
                    {
                        int index=distance(framset.begin(),it);
                        futureIndex[index]=j;
                    }
                }
                int futureIndex1=max_element(futureIndex.begin(),futureIndex.end())-futureIndex.begin();
                framset[futureIndex1]=currentpage;
            }
            pagefault++;
        }
    }
    cout<<"Number of pagefault:"<<pagefault<<endl;
}
