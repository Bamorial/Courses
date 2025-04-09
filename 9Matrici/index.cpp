#include <iostream>
using namespace std;

//4. Sa se genereze o matrice patratica cu primele n*n valori prime


bool isPrim(int n){
  bool prim=true;
  for(int d=2;d<=n/2;d++){
    if(n%d==0){
      prim=false;
    }
  }
  return prim;
}

int main() {
  int a[50][70],n=10;
  int nr=1;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(isPrim(nr)){
        a[i][j]=nr;
      }    
      else{
        while(isPrim(nr)==false){
          nr++;
        }
        a[i][j]=nr;
      }
      nr++;
    }
  }


  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }



  return 0;
}
