#include <iostream>

using namespace std;

int main()
{

    int i = 0;
    int contador = 0;

    for (i = 1; i <= 50; i++)
    {
        if (i % 2 == 0)
        {

            contador++;
            cout << contador << " : " << i << endl;
        }
    }

    return 0;
}