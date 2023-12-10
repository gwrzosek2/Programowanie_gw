# Zadania lab 7

## Zadanie 1

Napisz program w którym będzie zmienna globalna, w funkcji main stwórz zmienną lokalną i przypisz jej watrość zmiennej globlanej, po wypisz na ekran adressy obu zmiennych. Następnie napisz funkcję przyjmującą dwie liczby i wypisującą ich adressy i wywołaj ją na wcześniej utworzonych zmiennych. Przed uruchomieniem programu spróbuj przewidzieć jego działanie (ile różnych adresów zostanie wypisanych).

## Zadanie 2

Napisz program który zadeklaruje tablicę `10` elementową i wczyta jej elementy od użytkownika a następnie wypisze je na ekran. Do elementów tablicy odwołuj się za pomocą wskaźników

## Zadanie 3

Napisz funkcję typu void która przyjmuje adressy dwóch zmiennych i zamienia miejscami wartości znajdujące się pod tymi adresami. W programie głównym stwórz dwie zmienne o różnych wartościach i wypisz je przed i po wywołaniu funkcji.

## Zadanie 4

Napisz funkcję która przyjmuje jako argument wskaźnik na tablicę nieujemnych liczb całkowitych i jej rozmiar, funkcja powinna zwrócić największy element tablicy i zamienić jego wartość w oryginalnej tablicy na 0.

## Zadanie 5

Napisz funkcję która przyjmuje wskaźniki na trzy liczby `a, b, c` posortuje wartości tych liczb rosnąco.

## Zadanie 6

Napisz funkcję która przyjuje wskaźnik na pierwszy i ostatni element tablicy liczb typu `int`. Funkcja powinna na podstawie wskaźników obliczyć rozmiar tablicy `n` i wypełnić ją liczbami od 1 do n.

## Powtórka

Napisz program który będzie służył do wykonywania różnych operacji na pewnej tablicy znaków.

W programie powinna znajdować się zmienna globalna `n` informująca ile znaków znajduje się w tablicy.

Sama tablica powinna być zadeklarowana dla 100 znaków, ale nie powinna być globalna.

Głównym elementem funkcji `main` powinna być nieskończona pętla w której za pomocą istrukcji `case/switch` program prosi użytkownika o wybranie liczby odpowiadającej następnej akcji.

Jeśli użytkownik wybierze `0` program powinien zakończyć działanie.

Jeśli użytkownik wybierze `1` program powinien wywołać funkcję typu `void` która wypisze elementy tablicy, lub zwróci komunikat błędu jeśli `n==0`.

Jeśli użytkownik wybierze `2` program powinien wywołać funkcję typu `void` która sprawdzi czy w tablicy jest miejsce na nowy element. Jeśli tak to program poprosi użytkownika o podanie cyfry i wstawi ją do tablicy, jeśli nie ma miejsca lub znak podany przez użytkownika nie jest cyfrą program powinien zwrócić odpowiedni komunikat.

Jeśli użytkownik wybierze `3` program powninien wywołać funkcję typu `void` która poprosi o indeks elementu i usunie go z tablicy oraz zmniejszy zmienną `n` o jeden, jednocześnie przesuwając pozostałe elementy tak, aby tablica po wywołaniu zawierała wszystkie pozostałe elementy znajdowały się na `n` pierwszych miejscach zachowując oryginalną kolejność.

Jeśli użytkownik wybierze `4` program powinien wywołać funkcję typu `int` która zwróci sumę cyfr reprezentowanych przez znaki w tablicy, program główny powinien wypisać tę sumę na ekran. Jeśli funkcja zostanie wywołana dla kiedy tablica posiada `0` znaków funkcja powinna zwrócić liczbę która pozwoli programowi głównemu zwrócić odpowiedni komunikat zamiast `Suma=0`.

Jeśli użytkownik wybierze `5` program powinien wywołać funkcję typu `void` która wypisze elementy listy jako `drzewo binarne`, tzn. w pierwszym wierszu powinien być wypisany 1 element, w drugim 2, w trzecim 4 itd. pierwyszy wiersz powinien być wyśrodkowany na jedynym elemencie, pozostałe powinny być wypisane tak aby zachować struktórę przypominającą `trójkąt równoboczny`.

Jeśli użytkownik wybierze coś innego niż przewidziano w powyższych krokach program powinien poinformować go o błędnym wyborze i ponownie przedstawić dostępne opcje.
