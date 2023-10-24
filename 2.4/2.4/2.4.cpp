#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    char ch;
    short int a, b, itog;
    cout << "Введите число:" << endl;
    cin >> a;
    cout << "Введите второе число:" << endl;
    cin >> b;
    cout << "Результат:" << endl;
    cin >> itog;
    if (itog == a * b) {
        cout << "Правильно";
    }
    else cout << "Неверно!!!Правильный ответ: " << a * b;
    return 0;

}