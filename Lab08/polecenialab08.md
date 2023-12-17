# Implementacja podstawowych algorytmów

## Zadanie 1

W oparciu o podany pseudokod przeprowadź symulację na małej tablicy i zaimplementuj algorytm przeszukiwania liniowego.
```
WEJŚCIE: Tablica TAB[1..N], element n
WYJŚCIE: True jeśli n znajduje się w TAB, False w przeciwnym przypadku

index = 1
wynik = False
Dopóki index <= N wykonuj:
   Jeśli TAB[index] == n to:
      wynik = True
   index = index + 1
Wypisz wynik
```

## Zadanie 2

W oparciu o podany pseudokod przeprowadź symulację na małej tablicy i zaimplementuj algorytm przeszukiwania binarnego.
```
WEJŚCIE: Posortowana tablica TAB[1..N], element n
WYJŚCIE: True jeśli n znajduje się w TAB, False w przeciwnym przypadku

left = 1
right = N
result = False
Dopóki left <= right:
  middle := floor((left + right) / 2)
  if Tab[middle] < n:
    left := middle + 1
  else if Tab[middle] > n:
    right := middle - 1
  else:
    result = True
Wypisz result
```

## Zadanie 3

W oparciu o podany pseudokod przeprowadź symulację na małej tablicy i zaimplementuj algorytm sortowania bąbelkowego.
```
WEJŚCIE: Tablica A[1..n]
WYJŚCIE: Posortowana rosnąco tablica A[1..n]
i = n
Dopóki i != 0 wykonuj:
  j = 0
  Dopóki j < i wykonuj
    Jeśli A[j+1] < A[j] to zamień miejscami A[j+1] z A[j]
    j = j + 1
  i = i - 1
```

## Zadanie 4

W oparciu o podany pseudokod przeprowadź symulację na małej tablicy i zaimplementuj algorytm sortowania przez wstawianie.
```
WEJŚCIE: Tablica A[1..n]
WYJŚCIE: Posortowana rosnąco tablica A[1..n]
i = 1
Dopóki i <= n wykonuj
  element = A[i]
  k = i - 1
  Dopóki k >= 1 oraz A[k] > element):
      A[k+1] = A[k]
      k = k - 1
  A[k+1] = element
  i = i + 1
```

## Zadanie 5

W oparciu o podany pseudokod przeprowadź symulację na małej tablicy i zaimplementuj algorytm sortowania przez selekcję.
```
WEJŚCIE: Tablica A[1..n]
WYJŚCIE: Posortowana rosnąco tablica A[1..n]
i = 1
Dopóki i < n wykonuj:
  Znajdź w tablicy A[i..n] najmniejszy element tablicy o nazwie min
  Zamień miejscami A[i] z min w tablicy A
  i = i + 1
```

## Zadanie 6

Wykorzystaj biblioteke `time.h` do sprawdzenia jak zmienia się czas działania algorytmów z zadań 1-5 w zależności od rozmiaru tablicy przekazanej na wejściu algorytmu.
Zależności między rozmiarem wejścia a czasem działania można opisać funkcją np.`f(n)=1`,`f(n)=log n`,`f(n)=n`,`f(n)=n^2`.

## Zadanie 7

Powtórz testy z zadania 6 dla algorytmów sortujących. Tym razem sprawdź jaki wpływ na czas działania ma początkowe ustawienie elementów w sortowanej tablicy.
Przykładowo czas działania można sprawdzić dla tablicy posortowanej, posortowanej w odwrotnej kolejności i danych losowych. (do losowania wartości można wykorzystać funkcję `rand()` z biblioteki `stdlib.h`)
