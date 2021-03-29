#include <iostream>

using namespace std;

void  print(string s , string output)
{
  if(s.length() == 0)
  {
    cout<<output<<endl;
    return;
  }

  print(s.substr(1),output);
  print(s.substr(1),output+s[0]);
}

int main()
{
string s;
cin>>s;
string output = "";
print(s,output);

  return 0;
}
