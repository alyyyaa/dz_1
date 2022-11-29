//Дано шестизначное натуральное число N. Посчитать количество нулей в этом числе.
#include<iostream>
using namespace std;
void main()
{
    int n, k;
    k = 0;
    cout << "Введите число: ";
    cin >> n;
    while (n > 0)
    {
        if (n % 10 == 0)
        {
            k += 1;
        }
        n /= 10;
    }
    cout << "Нулей в числе: " << k;
}