// Sum of Array

// Given an array of length N, you need to find and return the sum of all elements of the array.
// Do this recursively.
// Input Format :
// Line 1 : An Integer N i.e. size of array
// Line 2 : N integers which are elements of the array, separated by spaces
// Output Format :
// Sum
// Constraints :
// 1 <= N <= 10^3
// Sample Input :
// 3
// 9 8 9
// Sample Output :
// 26
//////////////////////////
#include <iostream>

using namespace std;

int sum(int arr[],int size)
{
if(size == 0)
  return 0;

int small = sum(arr+1,size-1);

return arr[0]+small;
}

int main()
{
  int size{};
  cout<<"enter size of the array"<<endl;
  cin>>size;
  cout<<"enter the elements : ";
  int arr[size];
  for(int i=0;i<size;i++)
  {
    cin>>arr[i];
  }
  cout<<sum(arr,size);


  return 0;
}
