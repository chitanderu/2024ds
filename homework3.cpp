#include <iostream>

using namespace std;

const int N = 100010;

int f[N];

int temp[N];

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

void merge_sort(int nums[],int l,int r)
{      
    if(l>=r)  return;
     

    int mid=l+r>>1;
     merge_sort(nums, l, mid), merge_sort(nums, mid + 1, r);




    //int temp[l-r+1];
    int i=l;
    int j=mid+1;
    int k=0;
    
    while(i<=mid && j<=r)
    {
       if(nums[i]<=nums[j])
         temp[k++]=nums[i++];
       else
         temp[k++]=nums[j++];
     }

     while(i<=mid) temp[k++]=nums[i++];
     while(j<=r)   temp[k++]=nums[j++];

     for(int i=l,j=0;i<=r;i++,j++) nums[i]=temp[j] ;


    
    return;

    
}


void merge_sort1(int f[],int left,int right)
{   
   if(left>=right) return;
   int mid=left+right>>1;

   merge_sort1(f,left,mid);

   merge_sort1(f,mid+1,right);
   
   int i=left;
   int j=mid+1;
   int k=0;

   while(i<=mid && j<=right)
   {   
      if(f[i]<=f[j])
        temp[k++]=f[i++];
      else
        temp[k++]=f[j++];

           
     while(i<=mid)  temp[k++]=f[i++];
     while(j<=right)    temp[k++]=f[j++];
       
   
    
   }
    
    for(int i=left,j=0;i<=right;i++,j++) f[i]=temp[j] ;
   
    return ;
}








int main()
{

 int len;
   cin>>len;
   for(int i=0;i<len;i++) cin>>f[i];

  //for(int i=0;i<len;i++) cout<<f[i]<<" ";
   
    
 
    //quciksort(f,0,len-1); 
    merge_sort1(f,0,len-1);

    
   
    
   for(int i=0;i<len;i++) cout<<f[i]<<" ";


   

     return 0;


}