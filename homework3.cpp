#include <iostream>

using namespace std;

const int N = 100010;

int f[N];

// 思考  在分区间的时候，用暴力开空间来进行数组合并。

void quciksort(int f[],int l,int r){
  
  if(l>=r)  return;

  int i=l-1;   //左指针;  
  int j=r+1;   //右指针;
  int  pviot=f[l];
  while(i<j)
  {  
    do{
      i++;
    }while(f[i]<pviot);

    do{
      j--;
    }while(f[j]>pviot);     
    
    if(i<j) swap(f[i],f[j]);

  }

  quciksort(f,l,j);
  quciksort(f,j+1,r);


}

void mergesort()
{
    
}









int main()
{

 int len;
   cin>>len;
   for(int i=0;i<len;i++) cin>>f[i];

  //for(int i=0;i<len;i++) cout<<f[i]<<" ";
   
    

  
    

    
   
    
   for(int i=0;i<len;i++) cout<<f[i]<<" ";

     return 0;


}