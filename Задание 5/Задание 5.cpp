#include <iostream>
using namespace std;
int main()
{
    setlocale(NULL, "rus");
    const int n = 5;
    int mass[n][n];
    float sum = 0;
    float sr = 0;
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mass[i][j] = rand() % 10;
            if (i > j && mass[i][j]%2==0)
            {
                sum += mass[i][j];
                k++;
            }
        }
    }
    sr = sum / k;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) {
            cout << mass[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Среднее арифметическое четных элементов ниже главной диагонали=" << sr << endl;
    system("pause");
}