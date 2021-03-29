/*
Remove Duplicates Recursively

Given a string S, remove consecutive duplicates from it recursively.
Input Format :
String S
Output Format :
Output string
Constraints :
1 <= |S| <= 10^3
where |S| represents the length of string
Sample Input 1 :
aabccba
Sample Output 1 :
abcba
Sample Input 2 :
xxxyyyzwwzzz
Sample Output 2 :
xyzwz
*/

#include <iostream>
#include <cstring>

using namespace std;

#include <cstring>
void removeConsecutiveDuplicates(char *input) {


if(strlen(input) == 0 || strlen(input) == 1 )
  return;

removeConsecutiveDuplicates(input+1);

if(input[0] == input[1])
{
	for(int i=1;i<(strlen(input));i++)
    {
        input[i-1] = input[i];
    }
    input[strlen(input)-1] = '\0';
}

}

int main() {
    char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}
