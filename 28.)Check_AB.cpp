#include <iostream>
#include <cstring>

using namespace std;

bool check(char input[])
{
if(strlen(input) == 0)
  return true;

if(input[0] == 'a')
  return check(input+1);
else
  {
    if(input[1] == 'b')
      return check(input+2);
    else
      return false;
  }

}


bool checkAB(char input[])
{
  if(strlen(input) == 0 || input[0] != 'a')
    return false;

  return check(input+1);

}





int main() {
    char input[100];
    bool ans;
    cin >> input;
    ans=checkAB(input);
    if(ans)
        cout<< "true" << endl;
    else
        cout<< "false" << endl;
}
