#include <iostream>
using namespace std;
int main()
{
    setlocale(NULL, "rus");
    int n;
    int nn = 0; // переменная отвечает за новый размер массива
    cout << "Введите длинну массива: ";
    cin >> n;
    int* mass = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Введите " << i + 1 << "-й элемент: ";
        cin >> mass[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << mass[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        if (mass[i] % 2 != 0)
        {
            mass[nn++] = mass[i]; 
        }
    }
    for (int i = 0; i < nn; i++)
    {
        cout << mass[i] << " ";
    }
    cout << endl;
    system("pause");
}
