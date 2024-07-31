
//写出归并排序和快速排序的两个函数  并且测试样例
#include<bits/stdc++.h>
using namespace std;
const int N = 100010, MOD = 100000007;

int f[N];

 

void quciksort(int f[],int l,int r)
{
    if(l>=r) return ;

    int i=l-1; int j=r+1; int x=f[(l+r)/2];
    
  
    while(i<j)

    {  do i++; while(f[i]<x);
       

       do j--; while(f[j]>x);

       if(i<j) swap(f[i],f[j]);

    

    }
    quciksort(f,l,j);
    quciksort(f,j+1,r);

}


int main()
{  int len;
   cin>>len;
   for(int i=0;i<len;i++) cin>>f[i];

  //for(int i=0;i<len;i++) cout<<f[i]<<" ";
   
    

   quciksort(f,0,len-1);
    

    
   
    
   for(int i=0;i<len;i++) cout<<f[i]<<" ";

     return 0;


}