#include <iostream>

using namespace std;

int main()
{

    int num[16] = {2, 45, 3, 5, 7, 8, 5, 8, 94, 39, 28, 38, 56, 292, 300, 30};
    int cont1=0;
    int cont2=0;

    for (int i = 0; i < sizeof(num) / sizeof(num[0]); i++)
    {
        if (num[i] % 2 == 0)
        {

                cout << i << " : " << num[i] << " PAR " << endl;
                cont1++;

        }
        else if (num[i] % 2 == 1)
        {
        
                cout << i << " : " << num[i] << " IMPAR " << endl;
                cont2++;
        
        }

    }

    cout<<"============================="<<endl;
    cout<<"Pares: "<<cont1<<endl;
    cout<<"Impares: "<<cont2<<endl;

    return 0;

}
