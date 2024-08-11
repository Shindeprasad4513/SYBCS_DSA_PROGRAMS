#include<iostream>
using namespace std;
class santinel
{
  public:
  int a[100],n,key;
  santinel(int a[],int n,int key)
  {
    int pos;
    this->a[n]=a[n];
    this->n=n;
    this->key=key;
    int i=0;
    a[n]=key;
    while(a[i]!=key)
    {
      pos=i;
      i++;
    }
    if(i<n)
     cout << "Key found at "<<pos+1<< endl;
    else
     cout << "Key not found" << endl;
  }
};
int main()
{
  int i,n,a[100],key;
  cout << "Enter Limit:" << endl;
  cin >> n;
  cout << "Enter Array Elements:" << endl;
  for(i=0;i<n;i++)
  {
   cin>>a[i];
  }
  cout << "Enter Key Elements:" << endl;
  cin>>key;
  santinel ob(a,n,key);
}