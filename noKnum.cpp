#include<bits/stdc++.h>
using namespace std;
const int N = 1010, MOD = 100000007;

int f[N];
int k;

int quicksort(int f[] ,int l,int r,int k)
{  

    if(l>=r) return f[l];
    int left=l-1;
    int right=r+1;
    int pviot=l+r>>1;

    while(left<right)
     {
        do{ left++;}while(f[left]<f[pviot]);


        do{  right--;}while(f[right]>f[pviot]);
      

      if(left<right) swap(f[left],f[right]);
    

     }

      int sl=right-l+1;
      if(k<=sl)
       return quicksort(f,l,right,k);
      
      
      return quicksort(f,right+1,r,k-sl);
     



   
}






int main()
{   int n, k;
    scanf("%d%d", &n, &k);

    for (int i = 0; i < n; i ++ ) scanf("%d", &f[i]);

    cout << quicksort(f,0, n - 1, k) << endl;

    return 0;




}