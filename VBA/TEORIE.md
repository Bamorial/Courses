# VBA
## 1. Variabile 

Variabilele stocheaza date pe care programul le poate manipula

### Declarare
Utilizeaza **Dim** pentru a declara variabile

```vba
Dim myNumber As Integer
Dim myText As String
Dim myValue As Double
Dim myBoolean As Boolean
```

### Tipuri de date comune

|Data Type	    |Description	            |Example|
|---------------|---------------------------|-------|
Integer|	    Numere intregi           (-32,768 to 32,767)|	Dim x As Integer|
Long|	        Numere intregi mari    (-2B to 2B)|	        Dim x As Long|
Single|	        Numere reale   (precizie mica)|	Dim x As Single|
Double|	        Numere reale   (precizie mare)|	Dim x As Double|
String|	        Text|                                     	Dim x As String|
Boolean|	    Valori true sau false|	                    Dim x As Boolean|
Variant|	    Tine orie tip(nu e recomandat)|	        Dim x As Variant|

## 2. Constante

Constantele sunt valori care nu se schimba pe perioada executiei programului.
```vba
Const PI As Double = 3.14159
Const APP_NAME As String = "Excel VBA"
```


## 3. Operatori

### Operatori matematici

|Operator|	Description|	Example|
|--------|--------------|-----------|
|+	|Suma	|x = 5 + 3|
|-	|Diferenta	|x = 5 - 3
|*	|Inmultire	|x = 5 * 3
|/	|Impartire	|x = 5 / 3
|\	|Impartire cu rezultat intreg 	|x = 5 \ 3 → 1
|Mod	|Restul impartirii	|x = 5 Mod 3 → 2
|^	|Ridicare la putere|x = 2 ^ 3 → 8

### Operatori de comparatie

|Operator	|Description	|Example
|------------|---------------|------|
|=	|Egal cu	|If x = y Then|
|<>	|Nu e egal cu	|If x <> y Then
|<	|Mai mic decat	|If x < y Then
|>	|Mai mare ca	|If x > y Then
|<=	|Mai mic sau egal cu	|If x <= y Then
|>=	|Mai mare sau egal cu	|If x >= y Then

### Operatori logici

|Operator|	Description|	Example|
|--------|-------------|-----------|
And|	SI logic|	If x > 5 And x < 10 Then
Or|	SAU logic|	If x > 5 Or x < 10 Then|
Not|	NU logic|	If Not x = 5 Then|

## 4. Structuri de control

### If-Else 
```vba
Dim x As Integer
x = 10

If x > 5 Then
    MsgBox "x is greater than 5"
ElseIf x = 5 Then
    MsgBox "x is exactly 5"
Else
    MsgBox "x is less than 5"
End If
```
### Bucle
#### 1. For 
```vba
Dim i As Integer
For i = 1 To 5
    MsgBox "Iteration: " & i
Next i
```
#### 2. While 
```vba
Dim i As Integer
i = 1

While i <= 5
    MsgBox "Iteration: " & i
    i = i + 1
Wend
```
#### 3. Do While 
```vba
Dim i As Integer
i = 1

Do While i <= 5
    MsgBox "Iteration: " & i
    i = i + 1
Loop
```

## 5. Functii si subrutine

### Subroutine (Proceduri)
Un Sub este un bloc de cod care face ceva, dar nu returneazza o valoare
```vba
Sub SayHello()
    MsgBox "Hello, World!"
End Sub
```

### Functii (returneaza valori)
O functie este o subrutina care returneaza o valoare
```vba
Function Square(num As Double) As Double
    Square = num * num
End Function
```

Exemplu:
```vba
Dim result As Double
result = Square(4) ' rezultatul este 16
```
### Functii predefinite 
#### Functii matematice
**1. Abs** - returneaza molulul unui numar 
Exemplu:
```vba 
Abs(-1) '=>1
```
**2. Functii trigonometrice** 
Exemplu:
```vba 
Cos(0)
Sin(0)
Tan(0)
```
**3. Log** - logaritm natural
Exemplu:
```vba 
Log(0)
```
**4. Sqr** - radicalul de ordin 2 unui numar
Exemplu:
```vba 
Sqr(4) '=> 2
```
Pentru radical de ordin superior se poate utiliza:  
$\sqrt[n]x= x^{\frac{1}{n}}$
```vba
Dim result As Double
result = x^1/n 'radical de ordin n din x
```
Pentru mai multe functii viziteaza: 
https://learn.microsoft.com/en-us/office/vba/language/reference/functions-visual-basic-for-applications


## 6. Utilizarea foilor de calcul si a celulelor

### Referentierea celulelor
#### Scriere
```vba
Range("A1").Value = "Hello"
Cells(1, 1).Value = "Hello"
```
#### Citire
```vba
Dim myValue As String
myValue = Range("A1").Value
MsgBox myValue
```

#### Utilizarea buclelor pentru prelucrarea datelor
```vba
Dim i As Integer
For i = 1 To 10
    Cells(i, 1).Value = i
Next i
```

## 7. Input-uri si mesaje
### Afisare mesaje
```vba
MsgBox "Hello, World!"
```

### Input
```vba
Dim userInput As String
userInput = InputBox("Enter your name:")
MsgBox "Hello, " & userInput
```

## 8. With
Cuvantul cheie **With** permite aplicarea mai multor optiuni asupra unui obiect.

Fara with:
```vba
'utilizam un label 
MyLabel.Height = 2000  ' optiunea 1
MyLabel.Width = 2000   ' optiunea 2
MyLabel.Caption = "This is MyLabel"   ' optiunea 3
```
Cu with:
```vba
With MyLabel 
 .Height = 2000  ' optiunea 1
 .Width = 2000   ' optiunea 2
 .Caption = "This is MyLabel"   ' optiunea 3
End With 
```


TODO:
[ ] cifra din numar
[ ] sa se afiseze nr cu m divizori si divizorii
[ ] tablou unidim intre m n div cu 5

1 2 3 4 5 1 
1 2 3 4 5 1 
1 2 3 4 5 1 
1 2 3 4 5 1 
1 2 3 4 5 1 
1 2 3 4 5 1 