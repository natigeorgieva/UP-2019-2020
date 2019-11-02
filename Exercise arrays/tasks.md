# Допълнителни задачи върху масиви

## Задача 1
 Въведете в масив n на брой цели числа (n се въвежда от потребителя).
* Да се изведат елементите в следния ред:
   - първо всички елементи с четни индекси разгледани от ляво надясно
   - след това всички с нечетни индекси разгледани от дясно наляво
 * Да се провери дали сумата от елементите с четни индекси е равна на тези елементи с нечетни индекси.

Пример:
```
Kolko chisla shte vuvedete [1-500] :10
arr[0] = 1
arr[1] = 2
arr[2] = 3
arr[3] = 4
arr[4] = 5
arr[5] = 6
arr[6] = 7
arr[7] = 8
arr[8] = 9
arr[9] = 10


Izhod:
1 3 5 7 9 10 8 6 4 2 

Sumite ne sa ravni
```

## Задача 2
Въведете в масив n на брой цели числа (n се въвежда от потребителя) и изкарайте на екрана елементите в следната последователност: първо първия, после последния, след това втория, после предпоследния и така докато не обходите целия масив.
Пример 1:
```
Kolko chisla shte vuvedete [1-500] :10
arr[0] = 1
arr[1] = 2
arr[2] = 3
arr[3] = 4
arr[4] = 5
arr[5] = 6
arr[6] = 7
arr[7] = 8
arr[8] = 9
arr[9] = 10


Izhod :
1 10 2 9 3 8 4 7 5 6
```
Пример 2:
```
Kolko chisla shte vuvedete [1-500] :9
arr[0] = 1
arr[1] = 2
arr[2] = 3
arr[3] = 4
arr[4] = 5
arr[5] = 6
arr[6] = 7
arr[7] = 8
arr[8] = 9


Izhod :
1 9 2 8 3 7 4 6 5
```
## Задача 3 
 Въведете в масив n на брой цели ПРОСТИ числа(n се въвежда от потребителя и ако той въведе съставно число: "наплюйте" го и това число да да не се зачита),  след това въведете някакво цяло число k. Да се провери дали масива съдържа всички прости множители на k. 

Пример 1:
```
Kolko chisla shte vuvedete [1-500] :5
arr [0] = 1
X
Vuvedenoto chislo ne e prosto! Opitaite pak
arr [0] = 2
arr [1] = 11
arr [2] = 5
arr [3] = 3
arr [4] = 7

Vuvedete k: 210


Izhod :
V masiva se sudrzhat vsichki prosti mnozhiteli na k!
```
Пример 2:
```
Kolko chisla shte vuvedete [1-500] :5
arr [0] = 7
arr [1] = 3
arr [2] = 5
arr [3] = 2
arr [4] = 11

Vuvedete k: 205


Izhod :
V masiva ne se sudrzhat vsichki prosti mnozhiteli na k!
```
## Задача 4 
Въведете в масив n на брой реални числа (n се въвежда от потребителя) проверете дали числата образуват:
 - дали е аритметична прогресия
 - дали е геомертична прогресия 


Пример 1:
 ```
 Kolko chisla shte vuvedete [2-500] :5
arr[0] = 1
arr[1] = 2
arr[2] = 4
arr[3] = 8
arr[4] = 16
Chislata obrazuvat geomеtrichna progresiq!
Chislata NE obrazuvat aritmetichna progresiq!
 ```

 Пример 2:
 ```
 Kolko chisla shte vuvedete [2-500] :5
arr[0] = 1
arr[1] = 6
arr[2] = 2
arr[3] = 4
arr[4] = 6
Chislata NE obrazuvat geomеtrichna progresiq!
Chislata NE obrazuvat aritmetichna progresiq!
 ```

 Пример 3:
```
 Kolko chisla shte vuvedete [2-500] :5
arr[0] = 1
arr[1] = 2
arr[2] = 3
arr[3] = 4
arr[4] = 5
Chislata NE obrazuvat geomеtrichna progresiq!
Chislata obrazuvat aritmetichna progresiq!
```
## Задача 5
 Въведете в масив n на брой цели числа (n се въвежда от потребителя n > 5). Нека началния елемент ни бъде с индекс n/2 и неговата стойност да кръстим с q. Тогава:
 - ако q е четно, да се отиде на следващия елемент на q разтояние наляво
 - ако q е нечетно, да се отиде на q елемента надясно
Алгоритъма да се повтори за новия елемент.
Да се изпише на екрана дали е възможно да се излезе от масиваи и ако да то след колко стъки ще стане.

Пример 1:
```
Kolko chisla shte vuvedete [5-500] :5
arr[0] = 4
arr[1] = 2
arr[2] = 1
arr[3] = 3
arr[4] = 5
Izliza se ot masiva s 5 stupki!
```
Пример 2:
```
Kolko chisla shte vuvedete [5-500] :5
arr[0] = 10
arr[1] = 12
arr[2] = 2
arr[3] = 1
arr[4] = 1
Ne mozhe da se izleze ot masiva!
```