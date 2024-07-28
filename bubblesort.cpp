#include<bits/stdc++.h>
using namespace std;
const int N = 1010, MOD = 100000007;
int len;
int f2[N];

void swap1(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
// void swap(int& a, int& b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }
void sortbubble(int a[])
{
  for(int i=1;i<=len-1;i++)
  {  
    for(int j=1;j<=len-1;j++)
       {  if(a[j]<a[j+1])
            {
                swap1(a[j],a[j+1]);
            }
     

       }


  }



}

int main()
{  cin>>len;
   for(int i=1;i<=len;i++)
        {
          
           cin>>f2[i];


        }

    sortbubble(f2)    ;
    for(int i=1;i<=len;i++)
        {
          
          cout<<f2[i]<<" ";


        }


    
    
   return 0;
}