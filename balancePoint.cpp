#include<iostream>
#include <list>
using namespace std;

list<int> balanceList;
int sum(int *a,int left,int right)
{
  int result=0;
  for(int i=left;i<=right;i++)
  {
    result+=a[i];
  }
  return result;
}

void Equ(int *a,int length)
{
  int leftRes,righRes;
  for(int i=1;i<length-1;i++)
  {
    leftRes=sum(a,0,i-1);
    righRes=sum(a,i+1,length-1);
    if(leftRes==righRes)
      balanceList.push_back(i);
  }
}

int main()
{
  int data[5]={3,5,8,-21,16};
  Equ(data,5);
  for (list<int>::iterator iter = balanceList.begin(); iter != balanceList.end(); ++iter)
    cout << *iter << " ";
  cout << endl;

  return 0;
}

