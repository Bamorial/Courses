//Exercitiul 1
// #include<iostream>
// using namespace std;
// int a[20]={1,2,3,4,5};
// int n=5;
// void afiseaza(int i){
//   if(i<n){
//     cout<<a[i]<<" ";
//     afiseaza(i+1);
//   }
// }
// int main(){
//   afiseaza(0);
//   return 0;
// }
// Exercitiul 2
// #include<iostream>
// using namespace std;
// int n=100;
// void afiseaza(int i){
//   if(i<=n/2){
//     cout<<i*2<<" ";
//     afiseaza(i+1);
//   }
// }
// int main(){
//   afiseaza(0);
//   return 0;
// }
// Exercitiul 3
// #include<iostream>
// using namespace std;
// int Fib(int n){
//   if(n==0 || n==1){
//     return 1;
//   }
//   else{
//     return Fib(n-1)+Fib(n-2);
//   }
// }
// int main(){
//   cout<<Fib(6);
//   return 0;
// }
// #include<iostream>
// using namespace std; 
// int toBinary(int n){ 
//   int number;
//   if(n>0){
//     number=toBinary(n/2); 
//     int cifra=n%2;
//     number=number*10+cifra;
//     return number; 
//   }
//   else{
//     return 0;
//   }
// }
// int main(){
//   cout<<toBinary(7);
//   return 0;
// }
// #include<iostream>
// using namespace std; 
// int toThePower(int a, int b){
//   if(b>0){
//     int currentNumber=toThePower(a, b-1);
//     return currentNumber*a;
//
//   }
//   else{
//     return 1;
//   }
// }
//
// int main(){
//   int a=2;
//   int b=10;
//   cout<<toThePower(a,b);
//   return 0;
// }

// #include<iostream>
// using namespace std; 
// int bazaNoua=3;
// int bazaVeche=10;
// int toBinary(int n){ 
//   int number;
//   if(n>0){
//     number=toBinary(n/bazaNoua)*bazaVeche+n%bazaNoua; 
//     return number;
//   }
//   else{
//     return 0;
//   }
// }
// int main(){
//   cout<<toBinary(5);
//   return 0;
// }

// #include<iostream>
// using namespace std; 
// int a[4]={4,3,2,1};
// void interschimba(int &a, int &b){
//   int aux=a;
//   a=b;
//   b=aux;
// }
// void Sort(int n){
//   if(n==1){
//     return;
//   }
//   for(int i=0;i<n-1;i++){
//     if(a[i]>a[i+1]){
//       interschimba(a[i],a[i+1]);
//     }
//   }
//   n--;
//   Sort(n);
// }
// int main(){
//   int n=4;
//   Sort(n);
//   for(int i=0;i<n;i++){
//     cout<<a[i]<<" ";
//   }
//   return 0;
// }
// #include<iostream>
// using namespace std; 
// int a[4]={4,3,2,1};
// int n=4;
// void Maxim(int i, int &maxim){
//  if(i>=0){
//     if(a[i]>maxim){
//       maxim=a[i];
//     }
//     i--;
//     Maxim(i,maxim);
//   } 
// }
// int main(){
//   int maxim=0;
//   Maxim(n,maxim);
//   cout<<maxim;
//   return 0;
// }
// #include<iostream>
// using namespace std; 
// int Invers(int n, int invers=0){
//   if(n==0){
//     return invers;
//   }
//   else{
//     int cifra=n%10;
//     return Invers(n/10,invers*10+cifra);
//   }
// }
// int Pal(int x){
//   if(x==Invers(x)){
//     return 1;
//   }
//   else{
//     return 0;
//   }
// }
// int Search(int x, int t){
//   if(Pal(x)){
//     return x;
//   }
//   else{
//     x=Search(x+t,t);
//     return x;
//   }
// }
// int main(){
//   int x[5]={101,245,5,19};
//   int n=4;
//   for(int i=0;i<n;i++){
//     x[i]=Search(x[i],-1);
//   }
//   for(int i=0;i<n;i++){
//     cout<<x[i]<<" ";
//   }
//   return 0;
// }
// #include<iostream>
// using namespace std; 
// int a[10]={23,23,23,4,3,5,2,23,5};
// int n=9;
// int Sc(int x){
//   if(x<10) return x;
//   if(x<100) return x/10+x%10;
//   return Sc(x/10);
// }
// int Ap(int x, int i){
//   if(i>=n){
//     return 0;
//   }
//   if(a[i]==x){
//     return 1+Ap(x,i+1);
//   }
//   else
//   return Ap(x,i+1);
// }
// void Max(int i, int& maxim, int& maxCount) {
//   if (i < 0) return;
//   int contor = Ap(a[i], 0);
//   if (contor > maxCount) {
//     maxCount = contor;
//     maxim = a[i];
//   }
//
//   Max(i - 1, maxim, maxCount);
// }
// int main(){
//   int maxim=0;
//   int maxCount=0;
//   Max(n-1,maxim,maxCount);
//   for(int i=0;i<n;i++){
//     if(a[i]==maxim){
//       a[i]=Sc(a[i]);
//     }
//   }
//   for(int i=0;i<n;i++){
//     cout<<a[i]<<" ";
//   }
//   return 0;
// }
// #include<iostream>
// using namespace std; 
// int a[10]={23,23,23,4,3,5,2,23,5};
// int n=9;
// void Min(int i, int &minim){
//   if(i<0){
//     return;
//   }
//   else{
//    if(a[i]<minim){
//       minim=a[i];
//     } 
//     Min(i-1,minim);
//   }
// }
// void Del(int a[], int &n, int i){
//   if(i==n-1){
//     n--;
//     return;
//   }
//   if(i<n){
//     a[i]=a[i+1];
//     Del(a,n,i+1);
//   }

// }
// int main(){
//   int minim=100;
//   Min(n-1,minim);
//   cout<<minim;
//   for(int i=0;i<n;i++){
//     if(a[i]==minim){
//       Del(a,n,i);
//     }
//   }
//   for(int i=0;i<n;i++){
//     cout<<a[i]<<" ";
//   }
//   return 0;
// }


// #include<iostream>
// using namespace std; 
// int Pal (int x, int &z)
// {
//   if(x<10)
//   {
//     if(z==-1)
//     {
//       z=x;
//     }
//     else
//     {
//       z=z+x*10;
//     }
//   }
//   if(x<100)
//   {
//     if(z==-1)
//     {
//       z=x%10*10+x/10;
//       return x==z;
//     }
//     else
//     {
//       z=z+x%10*100+x/10%10*10;
//       return x%10==x/10;
//     }
//   }
//   if(x<1000)
//   {
//     if(x%10==x/100)
//     {
//       z= x%10*100+x%10;
//     return Pal(x/10%10, z);
//     }
//     else
//     {
//       return 0;
//     }
//   }
//   return 0;
// }
// int main(){
//   int invers=-1;
//   cout<<Pal(44,invers);
//   return 0;
// }

// #include <iostream>
// using namespace std;
// //inlocuieste nr de frecventa maxima cu suma primelor doua cifre
// int a[100]={23,23,23,3,2,4};
// int n=6;
// int Sc(int n)
// {
//   if(n<100)
//   {
//     return n/10+n%10;
//   }
//   return Sc(n/10);
// }
// int Ap(int x, int i)
// {
// if(i<n)
// {
//   if(x==a[i])
  
//  return 1+ Ap(x,i+1);
//  else{
//   return Ap(x,i+1);
//  }
// }
// return 0;
// }
// void Max(int i, int &x)
// {
//   if(i<n-1)
//   {
//     if(Ap(a[i],0)>Ap(a[i+1],0))
//     {
// x=a[i];
//     }
//     Max(i+1,x);
//   }
// }
// int main(){
//   int x=0;
//   Max(0,x);
//   for(int i=0;i<n;i++)
//   {
//     if(a[i]==x)
//     {
//       a[i]=Sc(x);
//     }
//   }
//   for(int i=0;i<n;i++)
//   {
//     cout<<a[i]<<" ";
//   }
//   return 0;
// }
// #include<iostream>
// using namespace std;
// int a[100]={4,4,2,6,8};
// int n=5;
// int Min(int i)
// {
//   if(i<n)
//   {
//     if(a[i]<Min(i+1))
//     return a[i];
//     else 
//     return Min(i+1);
//   }
//   return 100;
// }
// void Del(int i, int a[], int &n)
// {
//   if(i==n-1)
//   {
//     n--;
//   }
//   if(i<n)
//   {
// a[i]=a[i+1];
// Del(i+1,a,n);
//   }
// }
// int main(){
//   int minim=Min(0);
//   for(int i=0;i<n;i++)
//   {
//     if(a[i]==minim)
//     {
//       Del(i,a,n);
//     }
//   }
//   for(int i=0;i<n;i++)
//   {
//     cout<<a[i]<<" ";
//   }
//   return 0;
// }
