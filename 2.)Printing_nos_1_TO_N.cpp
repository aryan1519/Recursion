// Print Numbers

// Given the code to print number from 1 to n in increasing order recursively. But it contains few bugs, that you need to rectify such that all the test cases should pass.
// Input Format :
// Integer n
// Output Format :
// Numbers from 1 to n (separated by space)
// Constraints :
// 1 <= n <= 10000
// Sample Input :
//  6
// Sample Output :
// 1 2 3 4 5 6
//////////////////////////
#include <iostream>
using namespace std;

void print(int n){
    if(n == 0){
     return;
    }
    print(n-1);

    cout<<n<<" ";
}

int main(){
    int n;
    cin >> n;

    print(n);
}
