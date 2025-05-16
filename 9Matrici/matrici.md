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

6. Se dă o matrice cu n linii şi m coloane şi elemente numere naturale. Să se ordoneze liniile matricei crescător după suma elementelor.

7. Scrieţi un program care citeşte de la tastatură un număr natural nenul n cu exact 6 cifre şi construieşte un tablou bidimensional completat cu cifrele numărului citit.

8. Se consideră o matrice pătratică cu n linii şi n coloane şi elemente numere naturale. Să se modifice matricea în felul următor: toate elementele de pe liniile care conţin valoare maximă din matrice vor fi mărite cu valoarea minimă din matrice.

9. Sa se scrie transpusa unei matrici 
10. Sa se scrie o varianta optimizata a maximului de pe diagonala principala
```cpp
#include <iostream>
using namespace std;
int main() {
    int a[50][50]={{1,2,3},{4,5,6},{7,8,9}};
    int n=3;
    int max=a[0][n-1];
    for(int i=0;i<n;i++)
    {
        if(a[i][i]>max)
        {
            max=a[i][i];
        }
    }
    cout<<max;
    return 0;
}
```
11. Sa se scrie o varianta optimizata a maximului de pe diagonala secundara 
```cpp
#include <iostream>
using namespace std;
int main() {
    int a[50][50]={{1,2,3},{4,5,6},{7,8,9}};
    int n=3;
    int max=a[0][n-1];
    for(int i=0;i<n;i++)
    {
        if(a[i][n-1-i]>max)
        {
            max=a[i][n-1-i];
        }
    }
    cout<<max;
    return 0;
}
```
12. Sa se interschimbe linia care contine valoarea maxima cu linia care contine valoarea minima 
```cpp
#include <iostream>
using namespace std;
//interschimbam linia cu max si linia cu min
int main() {
    int a[50][50]={{1,2,3},{4,5,6},{7,8,9}};
    int n=3;
    int lmin=0,lmax=0;
    int max=a[0][0];
    int min=a[0][0];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
        if(a[i][j]>max)
        {
            max=a[i][j];
            lmax=i;
        }
        if(a[i][j]<min)
        {
            min=a[i][j];
            lmin=i;
        }
        }
    }
    for(int k=0;k<n;k++)
    {
        int aux=a[lmin][k];
        a[lmin][k]=a[lmax][k];
        a[lmax][k]=aux;
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
13. Sa se identifice linia cu diferenta constanta dintre elemente si sa se elimine
```cpp
#include <iostream>
using namespace std;
int main() {
    int a[50][50]={{1,2,3},{4,7,6},{7,11,9}};
    int n=3,m=3;
    int dif=0;
    int lin=0;
    for(int i=0;i<n;i++)
    {
        bool difc=true;
        int dif1=a[i][0]-a[i][1];
        for(int j=0;j<m-1;j++)
        {
            dif=a[i][j]-a[i][j+1];
            if(dif1!=dif)
            {
               difc=false;
            }
            
        }
        if(difc)
        {
            lin=i;
        }
    }
    for(int i=lin;i<n-1;i++)
    {
        for(int k=i+1;k<n;k++)
        {
            for(int j=0;j<m;j++)
            {
                int aux=a[i][j];
                a[i][j]=a[k][j];
                a[i][k]=aux;
            }
        }
        n--;
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
14. Sa se identifice elemntul de frecventa maxima
```cpp
#include <iostream>
using namespace std;
int main() {
    
    int a[50][50]={{1,2,2},{3,2,6},{3,9,2}};
    int n=3;
    int v[10]={0};
    int max=v[0];
    int frmax=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            v[a[i][j]]++;
        }
    }
    for(int i=0;i<10;i++)
    {
        if(v[i]>max)
        {
            max=v[i];
            frmax=i;
        }
    }
    cout<<frmax;

    return 0;
}
```
9. Sa se determine varfurile de pe oricare linie
10. Gigel are o livadă împărțită în n*m sectoare, dispuse pe n linii, numeroate de la 1 la n și m coloane, numerotate de la 1 la m. În fiecare sector se află un cireș, care conține o cantitate de cireșe cunoscută. Gigel va culege toate cireșele din cireșii dispuși într-o zonă dreptunghiulară din livadă. El poate să aleagă între k zone și dorește să culeagă cât mai multe cireșe.
11. Se dă o matrice cu n linii și m coloane și elemente numere naturale. Să se determine câte dintre elementele situate pe coloane cu indici impari sunt prime
12. Într-o matrice în care elementele sunt aranjate crescător pe anumite linii şi descrescător pe altele, trebuie găsită linia şi coloana pe care se află un anumit element.