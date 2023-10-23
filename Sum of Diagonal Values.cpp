#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,m;
    cin>>n>>m;
  int matrix[n][m];
  int sum_left =0, sum_right = 0;

  for(int i=0; i<n ; i++){
    for(int j=0; j<m; j++){
      cin >> matrix[i][j];
      if(i==j)
        sum_left += matrix[i][j];
      if((i+j) == n-1)
      {
        if(i==j) continue;
        sum_right += matrix[i][j];
      }
    }
  }

  cout << sum_left + sum_right << endl;

  return 0;
}
