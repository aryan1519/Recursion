#include <iostream>
#include <cstring>
using namespace std;

//In this method were altering the string since were given a char array which will give address of first char of array.
//To not alter the string use method-2 or in main create a temp.

bool checkPalindrome(char input[]) {
    // Write your code here

    if(strlen(input) == 0)
        return true;

    if(input[0] != input[strlen(input)-1])
		return false;

    input[strlen(input)-1] = '\0';

	return checkPalindrome(input+1);

}

int main() {
    char input[50];
    cout<<"enter a word : ";
    cin >> input;

    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
}
}
/////////////////////

/*
Method-2

bool helper(string input,int start,int end)
{
  if(end==1 || end==start)
    return true;

  bool small = helper(input,start+1,end-1);

  if(input[start] == input[end])
    return small;
  else
    return false;
}

bool checkPalindrome(char input[]) {
    // Write your code here
    int length = strlen(input);
    bool ans = helper(input,0,length-1);
    return ans;
}
*/
