#include <iostream>

using namespace std;

int subsetSumToK(int input[], int n, int output[][50], int k) {

    if(n == 0)
    {
      if(k == 0)
      {
        output[0][0] = 0;
        return 1;
      }
      else
        return 0;
    }

    int smallans1[1000][50], smallans2[1000][50];

    int ans1 = subsetSumToK(input+1, n-1, smallans1, k);
    int ans2 = subsetSumToK(input+1, n-1, smallans2, k-input[0]);

    for(int i=0;i<ans1;i++)
    {
      for(int j=0;j<smallans1[i][0];j++)
      {
        output[i][j] = smallans1[i][j];
      }
    }

    for(int i=ans1;i<(ans1+ans2);i++)
    {
      output[i][0] = smallans2[i-ans1][0]+1;
      output[i][1] = input[0];
      for(int j=1;j<=smallans2[i-ans1][0];j++)
      {
        output[i][j+1] = smallans2[i-ans1][j];
      }
    }
    return ans1+ans2;
}

int main() {
  int input[20],length, output[10000][50], k;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];

  cin >> k;

  int size = subsetSumToK(input, length, output, k);

  for( int i = 0; i < size; i++) {
	for( int j = 1; j <= output[i][0]; j++) {
		cout << output[i][j] << " ";
    }
    cout << endl;
  }
}
