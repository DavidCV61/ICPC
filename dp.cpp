#include <bits/stdc++.h>

using namespace std;

void bf(vector <int> &v,int index, int jumps,int n){

  

  if(index>=n-1){
    cout<<"Ultimo visitado es v["<<index<<"]="<<v[index]<<endl;
   return;

 }

  for(int i=index+1;i<min(n,index+jumps);i++){
    cout<<"v["<<i<<"]="<<v[i]<<endl;
  
      bf(v, i, v[i],10);
  }
}
  


int main(){

  vector <int> arr={1,3,5,8,9,2,6,7,6,8,9};
  bf(arr,1,arr[1],10);


    return 0;
}
