// Geometric Sum
//
// Given k, find the geometric sum i.e.
// 1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k)
// using recursion. Return the answer.
// Sample Input :
// 3
// Sample Output :
// 1.875
///////////////////////////////////////
#include <iostream>
#include <math.h>
using namespace std;

double gsum(int n)
{
  if(n==0)
    return 1;

double small = gsum(n-1);

return (1/pow(2,n))+small;
}

int main()
{
int n{};
cout<<"enter no of terms : ";
cin>>n;
cout<<"the geometric sum is = "<<gsum(n);
  return 0;
}
