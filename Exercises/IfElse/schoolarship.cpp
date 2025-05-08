#include <iostream>

using namespace std;

int main()
{

    float score;
    int absesnces;

    cout << "----------**Welcome to this calculator**-------------" << endl;
    cout << "Please insert your academic score: " << endl;
    cin >> score;
    cout << "Please insert how many absences do you have?" << endl;

    if (score >= 85 and score <= 100)
    {
        if (absesnces >= 0 and absesnces <= 3)
        {
            cout << "You're approbed to get the schoorlarship" << endl;
        }
    }
    else
    {
        cout << "Sorry, you don't have the enough score and you have too many absences to get the schoolarship" << endl;
    }

    return 0;
}