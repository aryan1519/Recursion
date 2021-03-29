#include <iostream>
#include <string>
// #include <algorithm>
using namespace std;

void keypad(int num, string output,string options[])
{
if(num == 0)
  {
    cout<<output<<endl;
    return ;
  }
string last = options[num%10];
for(int i=0;i<last.length();i++)
{
  keypad(num/10,last[i]+output,options);
}

}

void printKeypad(int num)
{
  string options[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
  string output = "";
  keypad(num,output,options);
}

int main(){
    int num;
    cin >> num;

    printKeypad(num);

    return 0;
}
