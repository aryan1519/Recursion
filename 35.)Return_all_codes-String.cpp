#include <iostream>
using namespace std;


int getCodes(string input, string output[10000])
{
  if(input.length() == 0)
  {
      return 0;
  }

  string small1[10000];
  int ans1 = getCodes(input.substr(1),small1);
  string small2[10000];
  int ans2 = getCodes(input.substr(2),small2);

  int dig1 = input[0] - '0';
  char d1 = (dig1+'a' -1);
  for(int i=0;i<ans1;i++)
  {
    output[i] = d1+small1[i];
  }

  // char c1 = input[0];
  // char c2 = input[1];
  // int di1 = c1-'0';
  // int di2 = c2 - '0';
  // int num = (di1*10)+di2;
  // char d2 = num+'a'-1;
  // int k=0;
  // for(int i=ans1;i<(ans1+ans2);i++)
  // {
  //   output[i] = d1+small2[k];
  //   k++;
  // }
  // return (ans1+ans2);
  return ans1;
}


int main(){
    string input;
    cin >> input;

    string output[10000];
    int count = getCodes(input, output);
    for(int i = 0; i < count && i < 10000; i++)
        cout << output[i] << endl;
    return 0;
}
