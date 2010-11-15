#include<iostream>
#include <list>
using namespace std;

int sum(int *a,int left,int right)
{
  int result=0;
  for(int i=left;i<=right;i++)
  {
    result+=a[i];
  }
  return result;
}

int Equ(int *a,int length)
{
  int leftRes,righRes;
  for(int i=1;i<length-1;i++)
  {
    leftRes=sum(a,0,i-1);
    righRes=sum(a,i+1,length-1);
    if(leftRes==righRes)
      return i;
  }
}

int main()
{
  int data[5]={3,5,8,-21,16};
  cout<<Equ(data,5)<<endl;
  return 0;
}

