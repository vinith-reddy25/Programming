#include<iostream>

using namespace std;

 void bubbleSort(int n, int a[]){
         bool swapped;
         int x;
     for(int i=0;i<n-1;i++){
            swapped = false;
         for(int j=0;j<(n-1-i);j++){
               if(a[j]>a[j+1]){
                    x = a[j+1]; a[j+1] = a[j]; a[j] = x;
                    swapped = true;    
               }
         }
         if(!swapped){
             break;
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
      bubbleSort(n,a);
      for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
    }
    
    return 0;
}