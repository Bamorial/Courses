

#include <iostream>
#include <math.h>
#include <cstring>


using namespace std;

int main() {
    // char a[200][200]={" "};
    // int n=50;
    // int m=50;
    // int pi=3.14;
    // double unitate=360/n;
    // for(int j=0;j<n;j++)
    // {
    //      int deplasament=round(10*sin(j*unitate*pi/180));
    //     a[n/2-deplasament][j]='*';
    // }
    // for(int i=0; i<n;i++){
    //     for (int j=0;j<m;j++){
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // return 0;
    // char sir[]="buna;ziua";
    // char sep[]=";";
    // char * p=strtok(sir,sep);
    // while(p!=NULL)
    // {
    //     cout<<p<<endl;
    //     p=strtok(NULL,sep);
    // }
    // citeste un sir de caractere de la tastatura si afiseaza cate vocale contine
    // char sir[100];
    // cin.getline(sir,100);
    // int ct=0;
    // for(int i=0;i<strlen(sir);i++)
    // {
    //     if(sir[i]== 'a' || sir[i]== 'e' || sir[i]=='i' || sir[i]=='o' || sir[i]=='u')
    //     {
    //         ct++;
    //     }

    // }
    // cout<<ct;
    // sa se inverseze un sir de caractere 
    // char sir[]="buna ziua";
    // char sirinvers[10];
    // int lungime=strlen(sir);
    // for(int i=lungime-1;i>=0;i--)  //8...0
    // {
    //     sirinvers[i]=sir[lungime-1-i];
    // }
    // cout<<sirinvers;

    // sa se elimine spatiile duble
    //input: ana are  mere
    //output: ana are mere
    // char sir[]="ana are  mere";
    // int j=0;
    // int i=0;
    // while(sir[i]!='\0')
    // {
    //     sir[j]=sir[i];
    //     if(sir[i]==' '){
    //         while(sir[i+1]==' '){
    //             i++;
    //         }
    //     }
    //     j++;
    //     i++;
    // }
    // sir[j]='\0';
    // cout<<sir;
    // sa se determine cuvantul cel mai lung dintr un sir de caractere
//     char sir[]="ana are mere";
//     char sep[]=" ";
//     char * p=strtok(sir,sep);
// char longest[256];
//     while(p!=NULL)
//     {
// if(strlen(p)>strlen(longest))
// {
//     strcpy(longest,p);
// }
// p=strtok(NULL,sep);
//     }
//     cout<<longest;
// }
// sa numaram aparitiile unui cuvant dintr o propozitie
// char sir[]="ana are are mere are pere are are";
// char cuvant[]="are";
// char sep[]=" ";
// char * p=strtok(sir,sep);
// int ct=0;
// while(p!=NULL)
// {
//     if(strcmp(p,cuvant)==0)
//     {
// ct++;
//     }
//     p=strtok(NULL,sep);
// }
// cout<<ct;
// sa se afiseze cuvintele de lungime de pare

char sir[]="buna seara";
char sep[]=" ";
char * p=strtok(sir,sep);
while(p!=NULL)
{
    if(strlen(p)%2==0)
    {
        cout<<p<<endl;
    }
    p=strtok(NULL,sep);
}


}
