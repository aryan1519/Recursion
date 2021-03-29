#include <iostream>
#include <string>

using namespace std;

int keypad(int num, string output[],string options[])
{
  if(num == 0)
  {
    output[0] = "";
    return 1;
  }

  int smallnum = num/10;
  string smallans[500];

  int smallcount = keypad(smallnum,smallans,options);

  int k = 0;

  string last = options[num%10];

  for(int i=0;i<smallcount;i++)
  {
    for(int j=0;j<last.length();j++)
    {
      output[k] = smallans[i]+last[j];
      k++;
    }
  }
  return k;
}

int keypad(int num, string output[])
{
  string options[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

  return keypad(num,output,options);
}

int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}
