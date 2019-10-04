Указатели и масиви

Споменахме ли, че масивът е "указател"? Трудно е да повявате? Създайте масив (да кажем от double), след това напишете:

    double arr[5] = { 4, 5, 6, 7.6, 9 };
    cout << arr << endl; // Ще се изпише на конзолата: 0x7ffcd4326470 
    int *ptr = arr;
    cout << ptr << endl; // Ще се изпише на конзолата: 0x7ffcd4326470

Това е така, защото когато създаваме масив ние всъщност създаваме указател към първия елемент на масива и когато казваме arr[index] (еквивалентно на *(arr + index)) казваме дай ми елементът, който се намира на позицията на: адреса на първия елемент + отместване. На пръв поглед изглежда, че мавив и указател са едно и също. Но те не са. Основната разлика се илюстрира при използване на оператора sizeof(). Когато се използва върху масив, sizeof връща размера на целия масив (дължина на масива * размера на типа на елемента). Когато се използва върху указател сочещ масив, sizeof връща размера на адресa в паметта(в байтове). Следната програма илюстрира това:

    #include <iostream>
    using namespace std; 
    int main()
    {
    	int array[5] = {1, 2, 3, 4, 5};
     
    	cout << sizeof(array) << endl; // ще принтира sizeof(int) * дължината на масива
     
            int *ptr = array;
            cout << sizeof(ptr) << endl; // ще принтира размера на указателя
     
    	return 0;
    }

Изход:

    20
    4
    

Масивът(разглеждан като указател към първия елемент) сам за себе си знае колко е дълъг(нали използваме [], за да му го кажем). Указател, сочещ масива не го знае, знае само къде започва. Е, вече имаме едно доказателство, което не потвърждава равенството. Следователно отхвърляме твърдението, че масив и указател са едно и също нещо.

Адресна аритметика

Езикът C++ ни позволява да извършваме операции за добавяне или изваждане на адреси от указателя. Ако ptr сочи към цялото число, ptr + 1 е адреса на следващото цяло число в паметта след ptr. А ptr - 1 е адресът на предишното цяло число преди ptr. Имайте предвид, че ptr + 1 не връща адреса на паметта след ptr, а адреса на паметта на следващия обект от типа, към който сочи ptr. Ако ptr сочи към цяло число (4 байта), ptr + 3 означава 3 цели числа (12 байта) след ptr. Ако ptr сочи знак, който винаги е 1 байт, ptr + 3 означава 3 символа (3 байта) след ptr.

    #include <iostream>
     
    int main()
    {
        int value = 7;
        int *ptr = &value;
     
        cout << ptr << '\n';
        cout << ptr+1 << '\n';
        cout << ptr+2 << '\n';
        cout << ptr+3 << '\n';
     
        return 0;
    }

Изход:

    0x7df9abb0acbc
    0x7df9abb0acc0
    0x7df9abb0acc4
    0x7df9abb0acc8
    

Може също директно да извадите 2 адреса(например началото и края на масив), като така получавате броя клетки от първия(вкл.) до втория адрес.

    int main()
    {
        int values[5] = {11, 38, 99, 4, 7};
        int *ptr = values;
        int *ptr2 = values + 4;
     
        cout << ptr2 - ptr << '\n';
         
        return 0;
    }

Изход:

    4
    

Как можем да използваме това? Както споменахме в преди. Масивът е поредица от еднотипни променливи(елементи), които се съхраняват последователно в паметта. След това видяхме, че името на масива е указател към първият му елемент. Сега видяхме, че с указателите могат да се извършват операции по добавяне и изваждане на брой клетки от дадена клетка. Сега ще използваме всичко това за да итерираме в масива, не чрез индекси, а чрез указатели.

    #include <iostream>
    using namespace std; 
    int main()
    {
         int array [5] = {9, 4, 5, 3, 8};
     
         cout << &array[1] << '\n'; // ще изведе адреса в паметта на втория елемент на масива
         cout << array+1 << '\n'; // ще изведе адреса в паметта на втория елемент на масива 
     
         cout << array[1] << '\n'; // ще изведе 4
         cout << *(array+1) << '\n'; // ще изведе 4 () са задължителни
     
        return 0;
    }

Следователно array[1] и *(array + 1)  са напълно еквиваленти.

Подаване на масив като параметър на функция(разширение)

Синтаксис за едномерен масив

    return_type/void <function_name>( <type> <name>[], <integer_type> <size>);
    return_type/void <function_name>( <type> *<name>, <integer_type> <size>);
    

Пример:

    int sumAllElementsInArray(int arr[], int size);
    int sumAllElementsInArray(int *arr, int size);

Извикването става, само с името на масива:

    // somewhere in main()
    
    	int my_arr[5] = {1, 2, 3, 4, 5};
    	...
    	cout << sumAllElementsInArray(my_arr, 5);

Синтаксис за двумерен масив

    return_type/void <function_name>( <type> <name>[][<maximum_size_of_columns>], <integer_type> <size_of_rows>, <integer_type> <size_of_rows>);
    return_type/void <function_name>( <type> *(<name>)[<maximum_size_of_columns>], <integer_type> <size_of_rows>, <integer_type> <size_of_rows>);
    

Пример:

    int sumAllElementsInMatrix(int mrx[][10], int rowSize, int columnSize);
    int sumAllElementsInMatrix(int *(mrx)[10], int rowSize, int columnSize);

Извикването става, само с името на масива:

    // somewhere in main()
    
    	int my_mrx[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    	...
    	cout << sumAllElementsInMatrix(my_mrx, 3, 3);

NB! Не можем да връщаме масив от функция. Но можем да върнем указател. Виж следващата точка.