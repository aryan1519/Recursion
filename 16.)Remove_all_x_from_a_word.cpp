// Remove X

// Given a string, compute recursively a new string where all 'x' chars have been removed.
// Sample Input 1 :
// xaxb
// Sample Output 1:
// ab
// Sample Input 2 :
// abc
// Sample Output 2:
// abc

#include <iostream>
#include <cstring>
using namespace std;

void removeX(char input[]) {
    // Write your code here
   if(strlen(input) == 0)
    return ;

  removeX(input+1);

  if(input[0] == 'x')
  {
    for(int i=0;i<=strlen(input);i++)
    {
      input[i] = input[i+1];
    }
  }
}


int main() {
    char input[50];
    cout<<"enter a word : ";
    cin >> input;
    cout<<endl;
    removeX(input);
    cout<<input;
}
