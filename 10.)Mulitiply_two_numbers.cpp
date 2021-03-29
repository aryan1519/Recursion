// Multiplication (Recursive)

// Given two integers m & n, calculate and return their multiplication using recursion. You can only use subtraction and addition for your calculation. No other operators are allowed.
// Input format : m and n (in different lines)
//
// Sample Input :
// 3
// 5
// Sample Output -
// 15
/////////////////////////////////////////
#include <iostream>

using namespace std;

int multiply(int m,int n)
{
  if(n==0)
    return 0;

    int small = multiply(m,n-1);

  return m+small;
}

int main()
{
int m{},n{};
cout<<"enter the first number : ";
cin>>m;
cout<<endl;
cout<<"enter the second number : ";
cin>>n;
cout<<endl;
cout<<"the product is : "<<multiply(m,n);
}
