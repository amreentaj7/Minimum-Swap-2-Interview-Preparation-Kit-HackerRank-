#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int minimumSwaps(vector<int> ar) {

    int i,swap_count=0,n=ar.size();
    for(i=0;i<n;i++)
    {
        if(ar[i]==(i+1))
            continue;

        swap(ar[i],ar[ar[i]-1]);
        swap_count++;
        i--;
    }
    return swap_count;

}
 int main()
{
  int n;
    cin >> n;

     vector<int> ar(n);
     for (int i = 0; i < n; i++) {
     cin>>ar[i];
     }

     int res = minimumSwaps(ar);

     cout<<res<<endl;
     return 0;
}
