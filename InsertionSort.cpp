#include<iostream>

using namespace std;

 void insertionSort(int n, int a[]){
         int min,min_id;
     for(int i=1; i<n;i++){
          min = a[i]; min_id = i;
         for(int j=i-1;j>=0;j--){
             if(a[j]>min){
                 a[j+1] = a[j];
                 min_id = j;
             }
             else{break;}
         }
         a[min_id] = min;
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
      insertionSort(n,a);
      for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
    }
    
    return 0;
}