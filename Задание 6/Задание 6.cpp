#include <iostream>
using namespace std;
int main()
{
    int mass[4][5];
    int max = mass[0][0];
    setlocale(NULL, "rus");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            mass[i][j] = rand() % 10;
            if (mass[i][j]>max)
            {
                max = mass[i][j];
            }
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++) 
        {
            cout << mass[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Максимальный элемент: " << max << endl;
    system("pause");
}
