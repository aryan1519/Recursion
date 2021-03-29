// String to Integer

// Write a recursive function to convert a given string into the number it represents. That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.
// Input format :
// Numeric string (string, Eg. "1234")
// Output format :
// Corresponding integer (int, Eg. 1234)
// Sample Input 1 :
// 1231
// Sample Output 1:
// 1231
// Sample Input 2 :
// 12567
// Sample Output 2 :
// 12567
/////////////////////////////////////////////////////
#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;


int helper(char input[],int length)
{
if(length == 0)
  return (input[length]-48) ;


int small = helper(input,length-1);

int a = input[length]-48;

return small*10+a;
}

int stringToNumber(char input[]) {

return helper(input,strlen(input)-1);


}


int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
    return 0;
}
