# Siruri de caractere
Sirurile de caractere reprezentate ca tablouri unidimensionale cu elemente de tip char.

Aceste șiruri se mai numesc null-terminated byte string (NTBS). În reprezentarea internă, după ultimul caracter (byte, octet) valid din șir se află caracterul '\0' – caracterul cu codul ASCII 0, numit și caracter nul.

Astfel, pentru reprezentarea în C/C++ a cuvântului copil, care are 5 caractere, se vor folosi 6 octeți, cu valorile: 'c', 'o', 'p', 'i', 'l', '\0'.

```cpp
char s[11] = "copil"; // se folosesc doar 6 caractere
char t[]="copil"; // se aloca automat 6 octeti pentru sirul t: cele 5 litere si caracterul nul \0
char x[6]={'c','o','p','i','l','\0'}; // initializarea este similara cu cea a unui tablou oarecare - sirurile de caractere sunt tablouri
char z[]={'c','o','p','i','l','\0'}; // se aloca automat 6 octeti pentru sir
```

## Afisare
```cpp
cout<<s<<endl;
```

## Citire 
```cpp
cin>>s; // pentru un singur cuvant
```
```cpp
cin.getline(variabila, lungime); //pentru un sir de mai multe caractere
```
## Prelucrare
```cpp
char a[10]="buna ziua";
a[1]="o";
cout<<a;
// bona ziua
```
## Functii pentru caractere
**isalnum** - Determina daca un caracter este alfanumeric
```cpp
isalnum(char ch)
```
**isalpha** - Determina daca un caracter este alfabetic
```cpp
isalpha(char ch)
```
**isdigit** - Determina daca un caracter este cifra 
```cpp
isdigit(char ch)
```

**isupper** - Determina daca un caracter este litera mare 
```cpp
isupper(char ch)
```
**islower** - Determina daca un caracter este litera mica 
```cpp
islower(char ch)
```
**toupper** - Transforma in litera mare
```cpp
toupper(char c)
```
- echivalent cu
```cpp
char('a'-32) //'A'
```


**tolower** - Transforma in litera mica 
```cpp
tolower(char c)
```
- echivalent cu
```cpp
char('A'+32) //'a'
```

**casting** - transforma un int in char
```cpp
char(int i)=> char(65)=>'A'
```
## Functii pentru siruri de caractere
**strlen** - returneaza lungimea sirului de caractere
```cpp
strlen("hello");//5
```
**strcpy** - copiaza continutul sirului src (sursa) in sirul dest (destinatie)
```cpp
strcpy(char* dest, char* src) 
```
> functia returneaza adresa dest

**strncpy** - copiaza continutul pana la al n caracter sirului src (sursa) in sirul dest (destinatie)
```cpp
strncpy(char* dest, char* src, int n) 
```
**strcat** - concateneaza 2 siruri de caractere. 
```cpp
strcat(char *dest, char* src)
```
**strchr** - returenaza adresa primei aparitii a unui caracter i intr-un sir str. Daca nu exista caracterul in sir, aceasta functie returneaza NULL
```cpp
strchr(char * str, char i)
```
**strstr** - cauta sirul t in sirul s
```cpp
strstr(char * s, char * t)
```
**strcmp** - compara lexicografic cele doua siruri de caractere:
* s < t => -1
* s > t => 1
* s = t => 0
```cpp
strcmp(char * s, char * t)
```
**strtok** - extrage cate un subsir de caractere delimitat de caractere din sirul sep (separator)
```cpp
char *strtok( char *str, const char *sep );
```
Functia se apeleaza in 2 moduri:
* primul apel are ca parametrul sirul din care se extrage si sirul de separatori
* urmatoarele apeluri au ca prim parametru NULL
```cpp
char sep[]=" .,";
char * p = strtok(s , sep);
while(p != NULL)
{
    cout << p << endl;
    p = strtok(NULL , sep);
}
```
# Probleme
1. Sa se afiseze tabela ASCII
```cpp
#include <iostream>
#include <math.h>
#include <cstring>


using namespace std;

int main() {
    for(int i=0;i<256;i++)
    {
        cout<<i<<" "<<char(i)<<endl;
    }
}
```
2. Sa se determine daca un sir de caractere e palindrom
```cpp
#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;
int main() {
  char cuv[]="ana";
  char inv[100];
  int j=0;
  for(int i=strlen(cuv)-1;i>=0;i--)
  {
    inv[j]=cuv[i];
    j++;
  }
  inv[j]='\0';
cout<<inv<<" ";
if(strcmp(inv,cuv)==0)
{
    cout<<"este palindrom";
}
else{
    cout<<"nu este palindrom";
}
}
```
3. Se dau mai multe propozitii. Dupa fiecare punct, urmatorul caracter sa se scrie cu litera mare
```cpp
#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;
int main() {
    char sir[]="afara este soare si frumos.azi e luni.merg la scoala";
    for(int i=0;i<strlen(sir);i++)
    {
        if(sir[i]=='.')
        {
            sir[i+1]=toupper(sir[i+1]);
        }
    }
   cout<<sir;
}
```
4. Sa se scrie cu litera mare fiecare cuvant din propozitie
```cpp
#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;
int main() {
    char sir[]="afara este soare si frumos azi e luni merg la scoala";
  for(int i=0;i<strlen(sir);i++)
  {
    if(sir[i]==' ')
    {
        sir[i+1]=toupper(sir[i+1]);
        //sir[i+1]=sir[i+1]-32;
    }
  }
sir[0]=toupper(sir[0]);
//sir[0]=sir[0]-32;

  cout<<sir;
}
```
5. Sa se scrie toate prefixele unui cuvant dat. Ex: bac => b , ba, bac
```cpp
#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;
int main() {
    char sir[]="bac";
for(int i=0;i<strlen(sir);i++)
{
    for(int j=0;j<=i;j++)
    {
        cout<<sir[j];
    }
    cout<<endl;
}
}
```

6. Sa se elimine toate vocalele din sir. sir: Ana are mere => n r mr
```cpp
#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;
int esteVocala(char i){
i=tolower(i);
if(i=='a' || i=='e' || i=='o' || i=='u' || i=='i')
{
    return 1;
}
else
return 0;
}
int main() {
    char sir[]="ana are mere";
    char sir1[100];
    int j=0;
for(int i=0;i<strlen(sir);i++)
{
    if(!esteVocala(sir[i]))
    {
sir1[j]=sir[i];
j++;
    }
}
sir1[j]='\0';
cout<<sir1;
}
```
7. Gasiti al catelea cuvant este cel de lungime maxima
ex: ana are mere, output: 3
```cpp
#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;
int esteVocala(char i){
i=tolower(i);
if(i=='a' || i=='e' || i=='o' || i=='u' || i=='i')
{
    return 1;
}
else
return 0;
}
int Maxim(int a[], int n){
    int max=a[0];
    int poz=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
        max=a[i];
        poz=i;
        }
    }
    return poz;
}
int main() {
    char sir[]="afara este soare si poimaine este joi";
    int ct=0;
    int cuv[100];
    int j=0;
    for(int i=0;i<strlen(sir);i++)
    {
if(sir[i]!=' ')
ct++;
else
{
cuv[j]=ct;
j++;
ct=0;
}
    }
    cuv[j]=ct;
    j++;
cout<<Maxim(cuv,j)+1;
}
```

8. Cifrul lui Cezar. a -> a+offset
```cpp
void codare(char v[],int k)
{
    k=k%('z'-'a');
    for(int i=0;i<strlen(v);i++)
    {
        if(isalpha(v[i]))
        {
             v[i]=v[i]+k;
             if(v[i]>'z')
                {
                int dif=v[i]-'z'-1;
                v[i]='a'+dif;
                 }
        }
    }
}
void decodare(char v[],int k)
{
    
    k=k%('z'-'a');
    for(int i=0;i<strlen(v);i++)
    {
        if(isalpha(v[i]))
         {   
             v[i]=tolower(v[i]);
            v[i]=v[i]-k;
            if(v[i]<'a')
            {
                int dif='a'-v[i]-1;
                v[i]='z'-dif;
            }
         }
    }
}
```

9.Într-un text, de cel mult 100 de caractere, cuvintele sunt formate din litere ale alfabetului englez și sunt separate prin spații. Scrieți un program C/C++ care citește de la tastatură un text de tipul precizat mai sus și afișează pe ecran mesajul DA și un număr natural n, separate printr-un spațiu, dacă toate cuvintele din text au câte n litere, sau mesajul NU în cazul în care nu toate cuvintele au același număr de litere.
```cpp
int main()
{
char sir[]="ana are mere";
int ct=0;
int a[100];
int j=0;
bool suntEgale=true;
for(int i=0;i<strlen(sir);i++)
{
    if(sir[i]!=' ')
    {
        ct++;
    }
    else
    {
        a[j]=ct;
        j++;
        ct=0;
    }

}
a[j]=ct;
for(int i=0;i<=j;i++)
{
    if(a[0]!=a[i])
    suntEgale=false;
}
if(suntEgale)
{
    cout<<"da";

}
else
{
    cout<<"nu";
}
}
```
10.Se dă un șir de caractere. Să se determine câte vocale din șir sunt cuprinse între două consoane.
```cpp
#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;
int esteVocala(char i)
{
    i = tolower(i);
    if (i == 'a' || i == 'e' || i == 'o' || i == 'u' || i == 'i')
    {
        return 1;
    }
    else
        return 0;
}

int main()
{
char sir[]="abecedar";
int ct=0;
for(int i=1;i<strlen(sir)-1;i++)
{
    
    if(esteVocala(sir[i]) && !esteVocala(sir[i-1]) && !esteVocala(sir[i+1]))
    {
ct++;
    }
    
}
cout<<ct;
}
```

11.Să se înlocuiasca cu cifra 5 ultima literă a fiecărui cuvânt 
```cpp
int main()
{
char sir[]="ana are";
for(int i=0;i<strlen(sir);i++)
{
    if(sir[i]==' ')
    {
        sir[i-1]='5';
    }

}
sir[strlen(sir)-1]='5';
cout<<sir;
}
```
12.Limba păsărească este foarte simplă; și asemănătoare cu limba română! Un text scris în română se traduce în păsărește astfel: după fiecare vocală se inserează litera p și vocala respectivă.
Se dă o propoziție scrisă în limba română. Să se traducă în păsărească.
```cpp
#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;
int esteVocala(char i)
{
    i = tolower(i);
    if (i == 'a' || i == 'e' || i == 'o' || i == 'u' || i == 'i')
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
char sir[]="acest text este in romana";
char sirp[100];
int j=0;
for(int i=0;i<strlen(sir);i++)
{
if(esteVocala(sir[i]))
{
    sirp[j++]=sir[i];
    sirp[j++]='p';
    sirp[j++]=sir[i];
}
else
sirp[j++]=sir[i];
}
sirp[j]='\0';
cout<<sirp;
}
```
13. Se citeste un cuvant de forma: cifra care indica numarul de aparitii urmata de litera aferenta. Sa se decodeze cuvantul citit. Ex: 1c1o1p3i -> copiii
```cpp
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char cuv[]="1a2c1e1s";
    char rez[100];
    int ct=0;
    for(int i=0;i<strlen(cuv);i++)
    {
        if(cuv[i]>='0' && cuv[i]<='9')
        {
            ct=cuv[i]-'0';
        }
        else
        {
            for(int j=0;j<ct;j++)
            {
                cout<<cuv[i];
            }
        }
    }
    return 0;
}
```
14. Se citeste de la tastaura un vers al unei poezii si o silaba. Sa se determine de cate ori apare silaba respectiva in vers. 
Ex: Un curcubeu multicolor, silaba: cu => 2
* Varianta cu funtii 
```cpp
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char vers[]="ana are are are mere";
    char silaba[]="are";
    int ct=0;
    while(strstr(vers, silaba)!=NULL){
        int poz=strstr(vers, silaba)-vers;
        int len=strlen(silaba);
        strcpy(vers+poz,vers+poz+len);
        cout<<vers<<endl;
        ct++;
    }
    cout<<endl;
    cout<<ct;
    
    return 0;
}
```
* Varianta fara functii
```cpp
#include <cstring>
#include <iostream>
using namespace std;
int main() {
    char vers[]="Un curcubeu multiculor";
    char silaba[]="cu";
    int ct=0;
    for(int i=0;i<strlen(vers);i++)
    {
        if(vers[i]==silaba[0])
        {
            bool suntEgale=true;
            for(int j=1;j<strlen(silaba);j++)
            {
                if(vers[i+j]!=silaba[j])
                {
                    suntEgale=false;
                }
            }
            if(suntEgale)
            ct++;
        }
    }
    cout<<ct;
    return 0;
}
```
15. Sa se realizeze operatiunea de find and replace asupra unui sir dat cu un subsir cautat si un subsir de inlocuit: ex: Ana are mere are pere, subsir de cautat: are, subsir de inlocuit era. => Ana era mere era pere.
```cpp
#include <cstring>
#include <iostream>
using namespace std;
//15. Sa se realizeze operatiunea de find and replace asupra unui sir dat cu un subsir cautat si un subsir de inlocuit, de dimiensiuni egale: ex: Ana are mere are pere, subsir de cautat: are, subsir de inlocuit era. => Ana era mere era pere.


int main() {
    char sir[]="ana are mere are pere";
    char find[]="are";
    char replace[]="era";
    
    while(strstr(sir,find)!=NULL)
    {
        int poz=strstr(sir,find)-sir;
        int len=strlen(find);
        for(int i=0;i<len;i++)
        {
            sir[poz+i]=replace[i];
        }
    }
    cout<<sir;
    return 0;
}
```
16. Sa se gaseasca toate pozitiile la care se gaseste un caracter dat: ex: ana are mere, caracterul:'a' -> 0,2,4
```cpp
#include <cstring>
#include <iostream>
using namespace std;

int main() {
    char sir[]="ana are mere are pere";
    char cautat='a';
    int ct=0;
    while(strchr(sir,cautat)!=NULL)
    {
        int poz=strchr(sir,cautat)-sir;
        strcpy(sir+poz,sir+poz+1);
        cout<<poz+ct<<endl;
        ct++;
    }
    return 0;
}
```
17. Sa se elimine un sir dat intr-o propozitie: ex: Azi este vineri sir dat: este => Azi vineri.
```cpp
#include <cstring>
#include <iostream>
using namespace std;
int main() {
    char sir[]="azi este vineri";
    char cautat[]="este";
    while(strstr(sir,cautat)!=NULL)
    {
        int poz=strstr(sir,cautat)-sir;
        strcpy(sir+poz,sir+poz+strlen(cautat)+1);
    }
    cout<<sir;
    return 0;
}
```
