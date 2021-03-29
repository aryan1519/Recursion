// Pair star

// Given a string, compute recursively a new string where identical chars that are adjacent in the original string are separated from each other by a "*".
// Sample Input 1 :
// hello
// Sample Output 1:
// hel*lo
// Sample Input 2 :
// xxyy
// Sample Output 2:
// x*xy*y
// Sample Input 3 :
// aaaa
// Sample Output 3:
// a*a*a*a
///////////////////////////////
#include <iostream>
#include <cstring>
using namespace std;


void pairStar(char input[])
{

  if(strlen(input) <=1)
    return ;

  pairStar(input+1);

  if(input[0] == input[1])
  {
    input[strlen(input)+1] = '\0';
    for(int i = strlen(input)-1 ; i>0 ;i--)
    {
      input[i+1] = input[i];
    }
    input[1] = '*';
  }
}


int main() {
    char input[50];
    cout<<"enter a word : ";
    cin >> input;
    cout<<endl;
    pairStar(input);
    cout<<input;
}
