# Functii recursive

## Introducere
**Recursivitatea** reprezintă proprietatea unor noțiuni de a se defini prin ele însele.
<br>
Exemple:
<br>
- factorialul unui număr: N!=N⋅(N−1)!;
- ridicarea la putere: an=a⋅an−1;
- termenul unei progresii aritmetice: an = an−1+r;
- șirul lui Fibonacci: Fn=Fn−1+Fn−2;


## Structura

- Condite de oprire

```cpp
void recursiv(int i)
  {
    if(i>0){

    // ruleaza ceva

    }
    else{

      return; //opreste

    }
  }
  ```
- Apel la ea insasi

```cpp
void recursiv(int i)
  {
    if(i>0){

      recursiv(i-1);

    }
    else{

      return; //opreste

    }
  }
```
> observam ca apelul se face cu o alta valoare pentru a evita buclele infinite
## Algoritmi 

Algoritm de maxim recursiv
```cpp
#include<iostream>
using namespace std; 
int a[4]={4,3,2,1};
int n=4;
void Maxim(int i, int &maxim){
 if(i>=0){
    if(a[i]>maxim){
      maxim=a[i];
    }
    i--;
    Maxim(i,maxim);
  } 
}
int main(){
  int maxim=0;
  Maxim(n,maxim);
  cout<<maxim;
  return 0;
}
```

Bubble Sort Recursiv
```cpp
#include<iostream>
using namespace std; 
int a[4]={4,3,2,1};
void interschimba(int &a, int &b){
  int aux=a;
  a=b;
  b=aux;
}
void Sort(int n){
  if(n==1){
    return;
  }
  for(int i=0;i<n-1;i++){
    if(a[i]>a[i+1]){
      interschimba(a[i],a[i+1]);
    }
  }
  n--;
  Sort(n);
}
int main(){
  int n=4;
  Sort(n);
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  return 0;
}
```
Verificare Palindrom
```cpp
#include<iostream>
using namespace std; 
int Invers(int n, int invers=0){
  if(n==0){
    return invers;
  }
  else{
    int cifra=n%10;
    return Invers(n/10,invers*10+cifra);
  }
}
int main(){
  int numar=1014;
  if(numar==Invers(numar)){
    cout<<"Este palindrom";
  }
  else{
    cout<<"Nu este palindrom";
  }
  return 0;
}
```
## Probleme
  Sa se scrie o functie recursiva care afiseaza crescator toate valorile dintr-un vector.

```cpp
#include<iostream>
using namespace std;
int a[20]={1,2,3,4,5};
int n=5;
void afiseaza(int i){
  if(i < n)
    {
    cout<<a[i]<<" ";
    afiseaza(i+1);
  }
}
int main(){
  afiseaza(0);
  return 0;
}
```
Sa se scrie primele 100 de numere pare
```cpp
#include<iostream>
using namespace std;
int n=100;
void afiseaza(int i){
  if(i<=n/2){
    cout<<i*2<<" ";
    afiseaza(i+1);
  }
}
int main(){
  afiseaza(0);
  return 0;
}
```
Sa se scrie al n element din sirul lui Fibonacci
```cpp

#include<iostream>
using namespace std;
int Fib(int n){
  if(n==0 || n==1){
    return 1;
  }
  else{
    return Fib(n-1)+Fib(n-2);
  }
}
int main(){
  cout<<Fib(6);
  return 0;
}
```
Se da un numar n in baza 10, sa se scrie n in baza 2 folosind o functie recursiva

```cpp

#include<iostream>
using namespace std; 
int toBinary(int n){ 
  int number;
  if(n>0){
    number=toBinary(n/2)*10+n%2; 
    return number;
  }
  else{
    return 0;
  }
}
int main(){
  cout<<toBinary(7);
  return 0;
}
```
>output: 111

Sa se scrie o functie recursiva care calculeaza a la puterea b
```cpp

#include<iostream>
using namespace std; 
int toThePower(int a, int b){
  if(b>0){
    int currentNumber= a * toThePower(a, b-1);
    return currentNumber;
  }
  else{
    return 1;
  }
}

int main(){
  int a=2;
  int b=10;
  cout<<toThePower(a,b);
  return 0;
}
```
> output: 1024

Sa se scrie o functie recursiva care trece un numar dintr-o baza in alta
```cpp
#include<iostream>
using namespace std; 
int bazaNoua=3;
int bazaVeche=10;
int toBase(int n){ 
  int number;
  if(n>0){
    number=toBase(n/bazaNoua)*bazaVeche+n%bazaNoua; 
    return number;
  }
  else{
    return 0;
  }
}
int main(){
  cout<<toBase(5);
  return 0;
}
```
                     
Sa se scrie termenul n al unei progresii aritmetice an = an-1 + r
```cpp
#include <iostream>
using namespace std;
int r=3;
int st=5;
int progresiearit(int n)
{
    if(n>0)
    {
       return r+progresiearit(n-1);
    }
    else 
        return st;
}
int main() {
   
cout<<progresiearit(3);
    return 0;
}
```
Sa se scrie termenii unei progresii geometrice an = an-1 * q
```cpp
#include <iostream>
using namespace std;
int r=3;
int st=1;
int progresiearit(int n)
{
    if(n>0)
    {
       return r*progresiearit(n-1);
    }
    else 
        return st;
}
int main() {
   
cout<<progresiearit(3);
    return 0;
}
```
Cel mai aproiat palindrom (7.)
```cpp
#include<iostream>
using namespace std; 
int Invers(int n, int &invers){
  if(n==0){
    return invers;
  }
  else{
    int cifra=n%10;
    return Invers(n/10,invers*10+cifra);
  }
}
int Pal(int x){
  if(x==Invers(x)){
    return 1;
  }
  else{
    return 0;
  }
}
int Search(int x, int t){
  if(Pal(x)){
    return x;
  }
  else{
    x=Search(x+t,t);
    return x;
  }
}
int main(){
  int x[5]={101,245,5,19};
  int n=4;
  for(int i=0;i<n;i++){
    x[i]=Search(x[i],-1);
  }
  for(int i=0;i<n;i++){
    cout<<x[i]<<" ";
  }
  return 0;
}
```
Problema 8 (Inlocuieste nr de frecventa maxima cu suma primelor doua cifre)
```cpp
#include <iostream>
using namespace std;
//inlocuieste nr de frecventa maxima cu suma primelor doua cifre
int a[100]={23,23,23,3,2,4};
int n=6;
int Sc(int n)
{
  if(n<100)
  {
    return n/10+n%10;
  }
  return Sc(n/10);
}
int Ap(int x, int i)
{
if(i<n)
{
  if(x==a[i])
  
 return 1+ Ap(x,i+1);
 else{
  return Ap(x,i+1);
 }
}
return 0;
}
void Max(int i, int &x)
{
  if(i<n-1)
  {
    if(Ap(a[i],0)>Ap(a[i+1],0))
    {
x=a[i];
    }
    Max(i+1,x);
  }
}
int main(){
  int x=0;
  Max(0,x);
  for(int i=0;i<n;i++)
  {
    if(a[i]==x)
    {
      a[i]=Sc(x);
    }
  }
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
  return 0;
}
```
Problema 9 Sa se stearga valoarile minime
```cpp
#include<iostream>
using namespace std; 
int a[10]={23,23,23,4,3,5,2,23,5};
int n=9;
void Min(int i, int &minim){
  if(i<0){
    return;
  }
  else{
   if(a[i]<minim){
      minim=a[i];
    } 
    Min(i-1,minim);
  }
}
void Del(int a[], int &n, int i){
  if(i==n-1){
    n--;
    return;
  }
  if(i<n){
    a[i]=a[i+1];
    Del(a,n,i+1);
  }

}
int main(){
  int minim=100;
  Min(n-1,minim);
  cout<<minim;
  for(int i=0;i<n;i++){
    if(a[i]==minim){
      Del(a,n,i);
    }
  }
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  return 0;
}

```
