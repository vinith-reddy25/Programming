#include<iostream>

using namespace std;
  
 void heap(int i, int n, int a[]){
     int x,c1 = 2*i +1, c2 = 2*i+2,k=i;
     if(c1<n && a[c1]>a[k]){
          k = c1;
     }
     if(c2<n && a[c2]>a[k]){
         k = c2;
     }
     if(k!=i){
         x = a[i]; a[i] = a[k]; a[k] = x;
         heap(k,n,a);
     }

 }
  
 void heapSort(int n, int a[]){
          int x;
         for(int i = n/2-1; i>=0;i--){
             heap(i,n,a);
         }

        for(int i=1;i<n;i++){
            x = a[n-i]; a[n-i] = a[0];  a[0] = x;
            heap(0, n-i, a);
        }

 }

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);  cout.tie(0);
    int n;
    cin>>n;
    int* a = new int [n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
      heapSort(n,a);
      for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
    }
    
    return 0;
}