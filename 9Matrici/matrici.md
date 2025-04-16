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
5. Intr-o gradina zoologica reprezentata printr-o matrice A cu n linii si m coloane. Fiecare cusca se afla intr-o pozitie din matrice si contine x animale. De exemplu daca A[2][6] = 5 inseamna ca in cusca de pe linia 2 si coloana 6 se afla 5 animale. Sa se raspunda la Q intrebari de forma i1, j1, i2, j2 unde raspunsul va fi numarul de animale din dreptunghiul din matrice cu cordonatele coltului din stanga sus i1 si j1 si cordonatele coltului din dreapta jos i2 si j2, unde i reprezinta linia si j coloana.
```cpp
#include <iostream>
using namespace std;

int main() {
    int n=5,m=4,a[50][50]={{12,54,23,67},{23,6,1,75},{53,1,2,4},{1,4,6,7},{6,8,12,16}},s=0;
    int i1=2,j1=1;
    int i2=4,j2=3;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=i1;i<=i2;i++)
    {
        for(int j=j1;j<=j2;j++)
        {
            s=s+a[i][j];
        }
    }cout<<s;

    return 0;
}
```

6. Se dă o matrice cu n linii şi m coloane şi elemente numere naturale. Să se ordoneze liniile matricei crescător după suma elementelor.
```cpp
#include<iostream>
using namespace std;

int main(){
    int n=5,m=4,a[50][50]={{12,54,23,67},{23,6,1,75},{53,1,2,4},{1,4,6,7},{6,8,12,16}};
    int v[100];
    for(int i=0;i<n;i++)
    {
        v[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        int s=0;
        for(int j=0;j<m;j++)
        {
            s=s+a[i][j];
        }
        v[i]=s;
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }cout<<endl;
    for(int i=0;i<n-1;i++)
    {
        for(int k=i+1;k<n;k++)
        {
            if(v[i]>v[k])
            {
                int aux=v[k];
                v[k]=v[i];
                v[i]=aux;
                for(int j=0;j<m;j++)
                {
                    int aux1=a[i][j];
                    a[i][j]=a[k][j];
                    a[k][j]=aux1;
                }
            }
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

7. Scrieţi un program care citeşte de la tastatură un număr natural nenul n cu exact 6 cifre şi construieşte un tablou bidimensional completat cu cifrele numărului citit.
```cpp
#include<iostream>
using namespace std;
//Scrieţi un program care citeşte de la tastatură un număr natural nenul n cu exact 6 cifre şi construieşte un tablou bidimensional completat cu cifrele numărului citit.
int main(){
    int x=1234567890;
    int n=4,m=3;
    int a[50][50];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            a[i][j]=x%10;
            x=x/10;
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

8. Se consideră o matrice pătratică cu n linii şi n coloane şi elemente numere naturale. Să se modifice matricea în felul următor: toate elementele de pe liniile care conţin valoare maximă din matrice vor fi mărite cu valoarea minimă din matrice.
```cpp
#include<iostream>
using namespace std;
//8. Se consideră o matrice pătratică cu n linii şi n coloane şi elemente numere naturale. Să se modifice matricea în felul următor: toate elementele de pe liniile care conţin valoare maximă din matrice vor fi mărite cu valoarea minimă din matrice.
int main(){
       int n=4,a[50][50]={{12,54,23,67},{23,6,1,75},{53,1,2,4},{1,4,75,7}};
       int min=9999,max=-9999;
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<n;j++)
           {
               if(a[i][j]>max)
               {
                   max=a[i][j];
               }
               if(a[i][j]<min)
               {
                   min=a[i][j];
               }
           }
       
       for(int i=0;i<n;i++)
           
       {
           int existaMax=0;
           for(int j=0;j<n;j++)
           {
               if(a[i][j]==max)
               {
                   existaMax=1;
               }
                
           }
           if(existaMax)
           {
               for(int j=0;j<n;j++)
               {
                 a[i][j]=a[i][j]+min;
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
9. Se da o matrice patratica de n*n. Sa se incrementeze toate elementele care au vecini impari
```cpp
#include<iostream>
using namespace std;

int main(){
       int n=4,a[50][50]={{12,51,23,67},{23,6,1,75},{53,1,2,4},{1,4,75,7}};
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<n;j++)
           {
               if(a[i][j-1]%2==1 && a[i][j+1]%2==1 && a[i-1][j]%2==1 && a[i+1][j]%2==1)
               {
                   a[i][j]=a[i][j]+1;
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
