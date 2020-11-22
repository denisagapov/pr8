#include <iostream>
using namespace std;
int main()
{
    setlocale(NULL, "rus");
    int n;
    cout << "Введите длинну массива: ";
    cin >> n;
    int* mass = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Введите " << i+1 << "-й элемент: ";
        cin >> mass[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << mass[i] << " ";
    }
    int min = mass[0];
    int imin = 0;
    for (int i = 0; i < n; i++)
    {
        if (min>=mass[i])
        {
            min = mass[i];
            imin = i;
        }
    }
    cout << endl;
    cout << "Номер последнего минимального элемента: " << imin+1 << endl;
    system("pause");
}
