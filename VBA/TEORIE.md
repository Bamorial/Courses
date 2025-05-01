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

**5. Exp** - radicalul de ordin 2 unui numar
**5. Chr** - radicalul de ordin 2 unui numar
**5. Day/Year/Month** - radicalul de ordin 2 unui numar
**5. Day/Year/Month** - radicalul de ordin 2 unui numar
**5. String** - radicalul de ordin 2 unui numar
**5. String** - radicalul de ordin 2 unui numar
Exemplu:
```vba 
Sqr(4) '=> 2
```
Pentru radical de ordin superior se poate utiliza:  
$\sqrt[n]x= x^{\frac{1}{n}}$
```vba
Dim result As Double
result = x^(1/n) 'radical de ordin n din x
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

**Exemplul 1**
```vba
Dim i As Integer
For i = 1 To 10
    Cells(i, 1).Value = i
Next i
```

**Exemplul 2**
```vba
Dim i As Integer
For i = 1 To 10
  Range("A1:A10").Cells(i).Value=i
Next i
```
> in acest caz iteram prin fiecare celula din range-ul A1:A10 

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
## 9. Sortare

Sortarea datelor in Excel VBA se poate face folosind metoda `Sort` a obiectului `Range`. Iata un exemplu de sortare a unei coloane:

```vba
Sub SortData()
    ...
    Range("A1:A10").Sort Key1:=Range("A1"), Order1:=xlAscending, Header:=xlYes
End Sub
```
Sortare pe mai multe chei:
```vba
Sub MultiKeySort()

   ...
    With Sort
        .SetRange ws.Range("A1:B10") 'range-ul in care se afla datele
        .SortFields.Add Key:=ws.Range("A1:A10"), Order:=xlAscending 'prima cheie de sortare
        .SortFields.Add Key:=ws.Range("B1:B10"), Order:=xlDescending 'a doua cheie de sortare
        .Header = xlYes 'precizam ca in range-ul dat se afla si capetele de tabel, pentru ca acestea sa nu fie incluse 
        .Apply
    End With
End Sub

```
## 10. Filtrare
Filtrarea datelor se poate realiza folosind metoda AutoFilter
```vba

Sub FilterData()
   ... 
    Range("A1:B10").AutoFilter Field:=1, Criteria1:=">50"
End Sub
```
**Field** - numarul de ordine al coloanei dupa care filtram
**Criteria1** - criterul dupa care filtram

Filtrare avansata:
```vba
Sub MultiFieldFilterWith()
    ...
    With Range("A1:C10")
        .AutoFilter Field:=1, Criteria1:=">50"
        .AutoFilter Field:=2, Criteria1:="<=100"
        .AutoFilter Field:=3, Criteria1:="TextExample"
    End With
End Sub
```
## 11. Validare
Validarea datelor în Excel VBA se face folosind obiectul Validation.
```vba
Sub AddValidation()
    ...
    With ws.Range("A1").Validation
        .Delete
        .Add Type:=xlValidateWholeNumber, AlertStyle:=xlValidAlertStop, Operator:=xlBetween, Formula1:="1", Formula2:="100"
        .InputTitle = "Introduceți un număr"
        .ErrorTitle = "Eroare"
        .InputMessage = "Introduceți un număr între 1 și 100"
        .ErrorMessage = "Numărul trebuie să fie între 1 și 100"
    End With
End Sub
```
## 12. Grafice
Crearea graficelor în Excel VBA se face folosind obiectul Chart
```vba

Sub CreateChart()
    Dim ws As Worksheet
    Dim chartObj As ChartObject
    
    Set ws = ThisWorkbook.Sheets("Sheet1")
    Set chartObj = ws.ChartObjects.Add(Left:=100, Width:=375, Top:=50, Height:=225)
    
    With chartObj.Chart
        .SetSourceData Source:=ws.Range("A1:B10")
        .ChartType = xlColumnClustered
        .HasTitle = True
        .ChartTitle.Text = "Exemplu de Grafic"
    End With
End Sub

```
