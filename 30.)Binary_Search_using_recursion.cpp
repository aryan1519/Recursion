#include <iostream>

using namespace std;

int binarySearch(int input[], int size, int element) {
    // Write your code here
    if(size == 0)
     return -1;

     if(input[0] == element &&  input[1]!= element)
       return 0;


     int ans = binarySearch(input+1,size-1,element);

     if(ans !=-1)
       return (ans+1);
     else
       return -1;
}



int main() {
    int input[100000],length,element, ans;
    cin >> length;
    for(int i =0;i<length;i++)
    {
        cin >> input[i];;
    }

    cin>>element;
    ans = binarySearch(input, length, element);
    cout<< ans << endl;
}
