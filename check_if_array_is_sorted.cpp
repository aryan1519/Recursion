#include <iostream>

using namespace std;

bool is_sorted(int arr[],int size)
{
if(size == 0 || size==1)      //base case
  return true;

if(arr[0]>arr[1])             //base case
  return false;

bool is_small_sorted = is_sorted(arr+1,size-1);

  if(is_small_sorted)
    return true;
  else
    return false;

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
  if (is_sorted(arr,size))
    cout<<"the array is sorted";
  else
    cout<<"the array is not sorted";

  return 0;
}
