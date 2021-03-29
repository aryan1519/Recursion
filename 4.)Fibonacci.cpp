#include <iostream>
using namespace std;

int Fibonacci(int n)
{
  if(n==0)
    return 0;
  if(n==1)
    return 1;

  int small1 = Fibonacci(n-1);
  int small2 = Fibonacci(n-2);

  return small1+small2;
}

int main()
{
int n{};
cout<<"Which term of the Fibonacci series do you want (starting index = 0)?"<<endl;
cin>>n;

cout<<Fibonacci(n);

}
