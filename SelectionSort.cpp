#include<iostream>

using namespace std;

 void selectionSort(int n, int a[]){
         int min_id,j,x;
   for(int i=0;i<n-1;i++){
       min_id =i;
       j=i+1;
       while(j<n){
           if(a[min_id]>a[j]){
               min_id =j;
           }
           j++;
       }
       if(min_id!=i){
          x = a[i];
          a[i] = a[min_id];
          a[min_id] = x; 
       }
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
      selectionSort(n,a);
      for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
    }
    
    return 0;
}