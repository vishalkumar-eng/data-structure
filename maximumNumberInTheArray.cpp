#include<climits>
#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"enter the size of array";
  cin>>n;
  int arr[n];
  for(int i=0;i<=n-1;i++)
  {
    cin>>arr[i];
  

  }
  int max=INT_MIN;//int max=arr[0] ye bhi sahi ho sakta hai
  for(int i=0;i<=n-1;i++)
  {
    if(max<arr[i])
    max=arr[i];
  }
  cout<<max;

}