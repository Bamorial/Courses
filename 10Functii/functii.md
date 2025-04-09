# Functii:
## Functii care nu returneaza nimic:
### output: 
  void
### input: 
orice -> &, int, float, char...
```cpp
        void Afiseaza(int valoare){
            cout<<valoare;
            // return-ul nu exista
        }
        Apel: Afiseaza(5);
```

## Functii care returneaza o valoare
### output: 
orice: int, char, float...
### input: 
orice: int, char, float...
```cpp
        int Suma(int nr1, int nr2){
            int output=nr1+nr2;
            return output;
        }

        tip_output nume_funtie(input, input,....){
            tip_output output;
            return output;
        }
        //observam ca tipul outputului coincide cu tipul functiei
        Apel: int rezultat= Suma(1,2); //rezultat=3
```
## Functii cu parametrii referinta
### intput = output = adrese (&)
### output 
in general nu avem nimic -> void
```cpp
        void interschimbare(int &a, int&b){
            int aux=a;
            a=b;
            b=aux;
        }
        ...
        interschimbare(val1, val2); // val1<-val2 && val2<-val1
```

        a-> valoarea lui a
        a=5
        cand a este transmis la functie, este ca si cum ai pune 5 in locul lui

        &a-> adresa lui a 
        a=5
        cand a este transmis la functie, este ca si cum ai pune adresa lui a in locul lui

        0x01  0x02 0x03 0x04
        10001 1002 1029 1201

```cpp
        void Incrementeaza1(int a){
            a++;
        }
        void Incrementeaza2(int &a){
            a++;
        }
        int main(){
            int a=3;
            Incrementeaza2(a);
            cout<<a; //4
            
        }
        //utilizata atunci cand dorim sa modificam mai multe valori
```

## Functii recursive
        1. Trebuie sa se apeleze pe ele insasi
        2. Trebuie sa aiba o conditie de oprire
        3.* Nu se folosesc bucle in interiorul f. r.

```cpp
        int Afisare_Multipla(int a){
            if(a==0){
                return 0
            }
            else{
                a--;
                cout<<a;
                return Afisare_Multipla(a)
            }
        }
```
