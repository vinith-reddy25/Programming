#include<iostream>

using namespace std;

 void merge(int l, int mid, int h, int a[]){
   int l1[mid+1-l], l2[h-mid];

   for(int i=0;i<mid+1-l;i++){
       l1[i] = a[l+i];
   }
   for(int i=0;i<h-mid;i++){
       l2[i] = a[mid+1+i];
   }
   int li=0,lj=0,k=0;
     while(li<mid+1-l && lj<h-mid){
      if(l1[li]<=l2[lj]){
          a[l+k] = l1[li];
          li++;
      }
      else {
          a[l+k] = l2[lj];
          lj++;
      }
       k++;
   }
   while(li<mid+1-l){
       a[l+k] = l1[li];
       k++; li++;
   }
   while(lj<h-mid){
       a[l+k] = l2[lj];
       lj++; k++;
   }

 }

 void mergeSort(int l, int h, int a[]){
     if(h>l){
         int mid = (l+h)/2;
           mergeSort(l,mid,a);
           mergeSort(mid+1,h,a);
           merge(l,mid,h,a);
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
      mergeSort(0,n-1,a);
      for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
    }
    
    return 0;
}