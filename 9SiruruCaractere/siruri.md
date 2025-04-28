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
**tolower** - Transforma in litera mica 
```cpp
tolower(char c)
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
