#include <iostream>

using namespace std;

int subset(int input[], int n, int output[][20]) {
  if(n == 0)
    {
      output[0][0] = 0;
      return 1;
    }

    int count = subset(input+1,n-1,output);

    int k = count;
    for(int i=0;i<count;i++)
    {
      output[k][0] = output[i][0]+1;
      output[k][1] = input[0];
      for(int j=1;j<=output[i][0];j++)
      {
        output[k][j+1] = output[i][j];
      }
      k++;
    }
return k;
}

int main() {
  int input[20],length, output[35000][20];
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];

  int size = subset(input, length, output);

  for( int i = 0; i < size; i++) {
	for( int j = 1; j <= output[i][0]; j++) {
		cout << output[i][j] << " ";
    }
    cout << endl;
  }
}
