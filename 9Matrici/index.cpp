// #include <iostream>
// using namespace std;
//
// //4. Sa se genereze o matrice patratica cu primele n*n valori prime
//
//
// bool isPrim(int n){
//   bool prim=true;
//   for(int d=2;d<=n/2;d++){
//     if(n%d==0){
//       prim=false;
//     }
//   }
//   return prim;
// }
//
// int main() {
//   int a[50][70],n=10;
//   int nr=1;
//   for(int i=0;i<n;i++)
//   {
//     for(int j=0;j<n;j++)
//     {
//       if(isPrim(nr)){
//         a[i][j]=nr;
//       }    
//       else{
//         while(isPrim(nr)==false){
//           nr++;
//         }
//         a[i][j]=nr;
//       }
//       nr++;
//     }
//   }
//
//
//   for(int i=0;i<n;i++)
//   {
//     for(int j=0;j<n;j++)
//     {
//       cout<<a[i][j]<<" ";
//     }
//     cout<<endl;
//   }
//
//
//
//   return 0;
// }
//


#include <iostream>
#include <math.h>

using namespace std;

int main() {
    char a[100][100]={" "};
    int n=50;
    int m=100;
    int pi=3.14;
    double unitate=360/n;
    for(int j=0;j<n;j++)
    {
         int deplasament=round(10*sin(j*unitate*pi/180));
        a[n/2-deplasament][j]='*';
    }
    for(int i=0; i<n;i++){
        for (int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
