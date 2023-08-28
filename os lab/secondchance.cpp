  #include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter number of page & reference string : ";
    int n, i, j, hit = 0, miss = 0;
    cin >> n;
    int arr[n + 5], frame[n + 5];
    for (i = 1; i <= n; i++)
    {
        cin >> arr[i];
        frame[i] = -1;
    }
    map<int, int> cnt, bit;
    for (i = 1; i <= n; i++)
    {
        int flag = 0, neg = 0;
        for (j = 1; j <= 3; j++)
        {
            if (frame[j] == arr[i])
            {
                flag = 1;
                hit++;
                bit[arr[i]] = 1;
                break;
            }
            else if (frame[j] == -1)
            {
                neg = j;
                break;
            }
        }
        if (neg && flag == 0)
        {
            frame[neg] = arr[i];
            miss++;
        }
        if (neg == 0 && flag == 0)
        {
            miss++;
            vector<pair<int, int>> v;
            for (j = 1; j <= 3; j++)
            {
                v.push_back({-cnt[frame[j]], j});
            }
            int paisi = 0;
            sort(v.begin(), v.end());
            for (auto it : v)
            {
                if (bit[frame[it.second]] == 0)
                {
                    paisi = it.second;
                    break;
                }
                else
                {
                    bit[frame[it.second]] = 0;
                }
            }
            if (paisi)
            {
                cnt[frame[paisi]] = 0;
                frame[paisi] = arr[i];
            }
            else
            {
            if(!vis[i] && arrival[i] <= curr)
            {
                vis[i] = 1;
                q.push(i);
            }
        }
        if(burst[node])
        {
            q.push(node);
        }
    }
}

