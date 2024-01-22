#include <iostream>
#include <Windows.h>


using namespace std;
char reshenie;

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main()
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");
    int a, b;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << "Введите нужную операцию: +, -, *, /, sqrt, !, %, ^): ";
    cin >> reshenie;


    switch (reshenie)
    {
    case '+':
        cout << "Результат сложения: " << a + b << endl;
        break;

    case '-':
        cout << "Результат вычитания: " << a - b << endl;
        break;
    case '*':
        cout << "Результат умножения: " << a * b << endl;
        break;
    case '/':
        cout << "Результат деления: " << a / b << endl;
        break;
    case '%':
        cout << "Результат процента от числа: " << (a * b) / 100 << endl;
        break;
    case 'sqrt':
        cout << "Результат: " << sqrt(a) << endl;
        break;
    case '!':
        cout << "Результат факториала: " << factorial(a) << endl;
        break;
    case '^':
        cout << "Результат возведения в степень: " << pow(a, b) << endl;
        break;
    case 'q':
        cout << "Программа окончена." << endl;
        return 0;
    default:
        cout << "Осуществлен выход из программы." << endl;
    }
    return 0;

}