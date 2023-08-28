#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of processes: ";
    cin >> n;

    int arrivalTime[n], burstTime[n];
    int completionTime[n], turnaroundTime[n], waitingTime[n];


    for (int i = 0; i < n; i++) {
       cout << "Enter arrival time and burst time for process"<<i+1<<":"<< endl;
      cin >> arrivalTime[i]>> burstTime[i];

    }

    completionTime[0] = arrivalTime[0] + burstTime[0];
    turnaroundTime[0] = completionTime[0] - arrivalTime[0];
    waitingTime[0] = 0;

    for (int i = 1; i < n; i++) {
        completionTime[i] = max(arrivalTime[i], completionTime[i - 1]) + burstTime[i];
        turnaroundTime[i] = completionTime[i] - arrivalTime[i];
        waitingTime[i] = turnaroundTime[i] - burstTime[i];
    }

    cout << "Process\tArrival Time\tBurst Time\tCompletion Time\tTurnaround Time\tWaiting Time" << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << "\t" << arrivalTime[i] << "\t\t" << burstTime[i] << "\t\t" << completionTime[i] << "\t\t" << turnaroundTime[i] << "\t\t" << waitingTime[i] << endl;
    }

    return 0;
}
