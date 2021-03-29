// Replace pi (recursive)

// Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".
// Sample Input 1 :
// xpix
// Sample Output :
// x3.14x
// Sample Input 2 :
// pipi
// Sample Output :
// 3.143.14

#include <iostream>
#include <cstring>
using namespace std;


void replacePi(char input[])
{
if(strlen(input) == 0 || strlen(input)==1)
  return;

replacePi(input+1);

if(input[0] == 'p' && input[1] == 'i')
  {

    input[strlen(input)+2] = '\0';


    for(int i = strlen(input) ; i>1; i--)
    {
      input[i+2] = input[i] ;
    }

    input[0] = '3';
    input[1] = '.';
    input[2] = '1';
    input[3] = '4';
  }
}

int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}
