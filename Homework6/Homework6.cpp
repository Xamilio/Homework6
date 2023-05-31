#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    int ch;
    cout << ("Введите число: ");
    cin >> ch;
    if (ch % 2 == 0)
    {
        cout << ("Оно четное \n");
    }
    else
    {
        cout << ("Оно не четное \n");
    }
    
    cout << "\n\n\n\n";


    int ch1, ch2, ch3;
    cout << ("Введите число: ");
    cin >> ch1;
    cout << ("Введите число: ");
    cin >> ch2;
    cout << ("Введите число: ");
    cin >> ch3;

    if (ch1 < ch2 && ch1 < ch3)
    {
        cout << "Число" << ch1 << "наименьшее";
    }
    else if (ch2 < ch3)
    {
        cout << "Число" << ch2 << "наименьшее";
    }
    else;
    {
        cout << "Число" << ch3 << "наименьшее";
    }

    cout << "\n\n\n\n";

    int n;
    cout << ("Введите число: ");
    cin >> n;

    if (n > 0)
    {
        cout << "Число положительное";
    }
    else if (n < 0)
    {
        cout << "Число отрецательное";
    }
    else if (n == 0)
    {
        cout << "Число равно нулю";
    }

    cout << "\n\n\n\n";

    float a, b;
    char s;
    cout << ("Введите первое число: ");
    cin >> a;
    cout << ("Введите второе число: ");
    cin >> b;
    cout << ("Введите знак (+,-,/,*): ");
    cin >> s;
    
    if (s == '+')
    {
        cout << a + b;
    }
    else if (s == '-')
    {
        cout << a - b;
    }
    else if (s == '/')
    {
        if (a == 0 || b == 0)
        {
            cout << "Ошибка";
        }
        cout << a / b;
    }
    else if (s == '*')
    {
        cout << a * b;
    }

    cout << "\n\n\n\n";

    int N, M, c;
    cout << ("Введите 1 число деапозона: ");
    cin >> N;
    cout << ("Введите 2 число деапозона: ");
    cin >> M;
    cout << ("Введите число: ");
    cin >> c;

    if (N <= c <= M)
    {
        cout << "Число входит в деапозон";

    }
    else 
    {
        cout << "Число не входит в деапозон";
    }

    cout << "\n\n\n\n";

    int x, y;
    cout << "Введите число x ";
    cin >> x;
    cout << "Введите число y ";
    cin >> y;

    if (!(x % y)) 
    {
        cout << "Кратно";
    }
    else {
        cout << "Не кратно";
    }
     
    cout << "\n\n\n\n";

    int NN;
    cout << "Введите число  ";
    cin >> NN;

    if (!(NN % 3 && NN % 5 && NN % 7))
    {
        cout << "Кратно 3, 5 и 7 ";
    }
    else {
        cout << "Не кратно 3, 5 и 7";
    }
}
