#include<iostream>
using namespace std;
int max(int n, int a[]){
  int max=a[0];
  for(int i=1;i<n;i++){
    if(a[i]>max){
      max=a[i];
    }
  }
  return max;
}
int min(int n, int a[]){
  int min=a[0];
  for(int i=1;i<n;i++){
    if(a[i]<min){
      min=a[i];
    }
  }
  return min;
}
int GetSum(int n, int a[]){
  int sum=0;
  for(int i=0;i<n;i++){
    sum+=a[i];
  }
  return sum;
}
int GetAverage(int n, int a[]){
  int sum=0;
  for(int i=0;i<n;i++){
    sum+=a[i];
  }
  return sum/n;
}
int GetProduct(int n, int a[]){
  int product=1;
  for(int i=0;i<n;i++){
    product*=a[i];
  }
  return product;
}
int GetFactorial(int n){
  int fact=1;
  for(int i=1;i<=n;i++){
    fact*=i;
  }
  return fact;
}
class Boat{
  public:
    int length;
    int width;
    int height;
    Boat(int l, int w, int h){
      length=l;
      width=w;
      height=h;
    }
    void print(){
      cout<<"Length: "<<length<<endl;
      cout<<"Width: "<<width<<endl;
      cout<<"Height: "<<height<<endl;
    }
};
class SpeedBoat: public Boat{
  public:
    int speed; //speed in km/h
    SpeedBoat(int l, int w, int h, int s): Boat(l,w,h){
      speed=s;
    }
  void getSpeedinMph(){
    cout<<"Speed in mph: "<<speed*0.621371<<endl; // speed in mph
  }
    void print(){
      Boat::print();
      cout<<"Speed: "<<speed<<endl;
    }
};
void printRecursive(int n, int a[], int i){
  if(i==n){
    return;
  }
  cout<<a[i]<<" ";
  printRecursive(n,a,i+1);
}
void maxRecursive(int n, int a[], int i, int &max){
  if(i==n){
    return;
  }
  if(a[i]>max){
    max=a[i];
  }
  maxRecursive(n,a,i+1,max);
}
void toCsv(int n, int a[]){
  for(int i=0;i<n;i++){
    cout<<a[i];
    if(i<n-1){
      cout<<",";
    }
  }
  cout<<endl;
}
int main(){
  Boat b(10,20,30);
  b.print();
  cout<<endl;
  SpeedBoat sb(10,20,30,40);
  sb.print();
  cout<<endl;
  int n=10;
  int a[100]={10,20,30,40,50,60,70,80,90,100};
  cout<<max(n,a);

}
