#include <iostream>
using namespace std;

//Sa se scrie o functie recursiva care calculeaza a la puterea b
int laputere( int a, int b)
{
    if(b>0)
    {
        int nrcurent=laputere(a,b-1);
        return a*nrcurent;
    }
    else
    return 1;
}
int main()
{
    int a=2, b=5;
cout<<laputere(a,b);
    return 0;
}