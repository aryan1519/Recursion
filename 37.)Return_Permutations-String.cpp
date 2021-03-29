#include <iostream>
#include <string>

using namespace std;

#include <string>
using namespace std;

int returnPermutations(string input, string output[])
{
  if(input.length() == 0)
  {
    output[0] = "";
    return 1;
  }

  string* ans = new string[1000];
  int n = returnPermutations(input.substr(1),ans);

  int j=0;
  for(int i=0;i<n;i++)
  {
    output[j] = ans[i]+input[0];
    output[j+1] = input[0]+ans[i];
    j+=2;
  }

  return 2*n;
}


int main(){
    string input;
    cin >> input;
    string output[10000];
    int count = returnPermutations(input, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }

    return 0;
}
