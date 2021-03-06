Референции (References) (наричат се още псевдоними)

Досега обсъдихме два основни вида променливи:

- Нормални променливи, които съхраняват информация директно.
- Указатели, които съхраняват адреса на дадена стойност (или нула) и може да бъде използван за извличане на стойността на адреса, към който сочат. Референциите са третият основен тип променливи, който C++ поддържа. Референцията е променлива, която действа като псевдоним на друг обект или стойност.

Декларация на референция

Референция се декларира, като се използва символът & между типа на референцията и името на променливата:

    int value = 5; // нормално цяло число
    int &ref = value; // псевдоним на променливата value

В този контекст & не означава "адресът на", а означава "псевдонимът на". Референциите обикновено действат идентично на стойностите, към които се отнасят. В този смисъл реферирането действа като псевдоним на обекта, за който се отнася. Тоест, каквото правим с референцията, се отразява на променливата и обратното. Пример:

    #include <iostream>
    using namespace std; 
    int main()
    {
        int value = 3; // Нормално цяло число
        int &ref = value; // Псевдоним на променливата value
     
        value = 5; // value вече е 5
        ref = 13; // value вече е 13
     
        ++value;
        cout << value << endl;
        ++ref;
        cout << value << endl;
     
        return 0;
    }

Изход:

    14
    15
    

Както виждаме, компилатора се отнася към value и ref като към синоними. Освен това, когато приложим "address-of" оператора към ref, ние получаваме адреса на value:

    #include <iostream>
    using namespace std;
    
    int main()
    {
        int value = 3; // Нормално цяло число
        int &ref = value; // Псевдоним на променливата value
     
        cout << &value << endl;
        cout << &ref << endl;
    
        return 0;
    }

Изход:

    0x71d7e3331a1c
    0x71d7e3331a1c
    

- Референциите трябва да бъдат инициализирани, при създаването си.
  int &ref = value;
- Неконстантните референции, могат да бъдат инициализирани само с неконстантни стойности(променливи).
  int value = 3; // Нормално цяло число int &ref = value; // Псевдоним на променливата value
- Веднъж инициализирана, референцията не може да бъде псевдоним на друга променлива. А просто взима стойността й.
  int value2 = 5;	// Нормално цяло число ref = value2; // value получава стойността на value2, т.е value = 5
- За разлика от указателите, които могат да сочат(съдържат) нулева стойност, няма такова нещо като нулева референция.

Връзка с указателите

Референциите и указателите имат интересна връзка - референцията действа като указател, който се използва за достъп до променливата.

    int value = 5;
    int *const ptr = &value;
    int &ref = value;

- ptr и ref се оценяват по един и същ начин. В резултат на това, следните две твърдения са еквивалентни:

    *ptr = 5;
    ref = 5;

Референциите, обикновено, са много по-безопасни от указателите. Въпреки това, те също са малко по-ограничени в функционалност съответно. Ако дадена задача може да бъде решена с референция или с указател, по принцип трябва да се предпочита референцията. Указателите трябва да се използват само в ситуации, при които референциите не са достатъчни (като динамично заделяне на памет).

Const

Референция към константа(или още константен псевдоним(Не се бъркайте с указатели, там са 2 различни неща!))

Точно както е възможно да се декларира иказател към константна стойност, също е възможно да се декларира референция към константна стойност. Това се прави чрез деклариране на псевдоним с помощта на ключовата дума const.

    const int value = 5; // константа от тип int
    const int &ref = value; // ref е псевдоним на константата value

Инициализация

    int x = 5;
    const int &ref1 = x; // okay, x е променлива
     
    const int y = 7;
    const int &ref2 = y; // okay, y е константа

Подобно на указател към константа, референция към константа може да реферира неконстантна стойност(променлива). При достъп, чрез референцията, стойността се счита за константна, дори ако оригиналната стойност не е, следователно не можем да я променим.

    int value = 5; // Обикновена променлива
    const int &ref = value; // псевдоним към константна стойност на value
     
    value = 6; // okay, value не е константа
    ref = 7; // not okay, ref е "константен псевдоним"

**Обобщено: При референция към константна стойност, стойността(константна или не), достъпвана чрез псевдонима, не може да се променя. Може да се променя самата променлива.
