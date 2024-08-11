#include<iostream>
using namespace std;
class Binary
{
   public:int a[100],n,key;
  int Binary_num(int a[],int n,int key)
   {
    this->a[n]=a[n];
    this->n=n;
    this->key=key;
    int top=0,bottom=n-1,mid;
    while(top<=bottom)
    {
     mid=(top+bottom)/2;
     if(key==a[mid])
      {
        cout<<"Key Found At "<<mid+1;
        return mid;
        break;
      }
      else if(key<a[mid])
      {
       bottom=mid-1;
      }
      else
      {
       top=mid+1;
      }
    } 
    cout << "Key not Found"<<endl;
   return -1;
   }
};
int main()
{
  int i,a[100],key,n;
  cout << "Enter Limit:" << endl;
  cin>>n;
  cout << "Enter array Elements:" << endl;
  for(i=0;i<n;i++)
   {
     cin >> a[i];
   }
   cout << "Enter Key To Search:" << endl;
   cin>>key;
   Binary ob;
   ob.Binary_num(a,n,key);
}