// Sum of digits (recursive)

// Write a recursive function that returns the sum of the digits of a given integer.
// Sample Input :
// 12345
// Sample Output :
// 15
/////////////////////////////
#include <iostream>

using namespace std;

int sum(int n)
{
  if(n == 0)
    return 0;

  return (n%10)+sum(n/10);
}

int main()
{
int n{};
cout<<"enter a number : ";
cin>>n;
cout<<"the sum of digits is = "<<sum(n);
  return 0;
}
