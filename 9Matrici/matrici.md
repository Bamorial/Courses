# Matrici

## Probleme
1. Sa se genereze o matrice la care fiecare element este egal cu produsul dintre indicele liniei si indicele coloanei
```cpp
#include <iostream>
using namespace std;

int main() {
    int a[50][70],n=5,m=7;
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<m;j++)
    {
        a[i][j]=i*j;
    }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    

    return 0;
}
```
2. Sa se afiseze indicicele liniilor care au toate elementele crescatoare si diferenta dintre ele este constanta
```cpp
#include <iostream>
using namespace std;

//2. Sa se afiseze indicicele liniilor care au toate elementele crescatoare si diferenta dintre ele este constanta


int main() {
    int a[50][70]={{1,2,3,4},{9,8,7,6},{2,4,5,6},{2,4,6,8}},n=4;
    for(int i=0;i<n;i++)
    {
        int dif;
        int dif2;
        int esteConstant=1;
        dif=a[i][1]-a[i][0];
        if(dif>0){
            for(int j=0;j<n-1;j++){
            dif2=a[i][j+1]-a[i][j];
            if(dif!=dif2)
            {
               esteConstant=0;
            }
        }
        if(esteConstant){
            cout<<i;
            cout<<endl;
        }
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
```
>output: 0 3

3. Se da o matrice, sa se afiseze inidicii elementelor prime
```cpp
#include <iostream>
using namespace std;

//3. Se da o matrice, sa se afiseze inidicii elementelor prime



int main() {
    int a[50][70]={{1,2,3,4},{9,8,7,6},{2,4,5,6},{2,4,6,8}},n=4;
    int d;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            bool prim=true;
            for(d=2;d<=a[i][j]/2;d++)
            {
                if(a[i][j]%d==0)
                {
                    prim=false;
                }
            }
            if(prim==true)
            {
                cout<<i<<" "<<j;
                cout<<endl;
            }
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
```
4. Sa se genereze o matrice patratica cu primele n*n valori prime
```cpp

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
```
