// input: arr[] = {16, 17, 4, 3, 5, 2}, 
// Output: 17 5 2
// Input: arr[] = {1, 2, 3, 4, 5, 2}, 
// Output: 5 2
// @geeks for geeks

#include <bits/stdc++.h>
using namespace std;

int main() {
int n;
cin >> n;
int arr[n];
for (int i = 0; i < n; i++)
{
cin >> arr[i];
}
for (int i = 0; i < n-1; i++)
{
     for (int j = i+1; j < n; j++)
     {
          if (arr[i] > arr[j])
          {
              arr[i]=arr[j];
              n--;
              
          }
     }
}
for (int i = 0; i < n; i++)
{
     cout << arr[i] << endl;
}
 
return 0;
}