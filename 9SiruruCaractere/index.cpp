#include<iostream>
using namespace std;
int main(){
  char s[10];
  //cin>>s;
  //cout<<s;// din cauza cin>>s, se afiseaza totul pana la spatiu
  cin.getline(s,10);
  cout<<isdigit(s[0]);
  return 0;
}
