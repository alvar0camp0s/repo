#include <iostream>

using namespace std;

int main(){

    int num[3][4]={{1,2,3,4}, { 5,6,7,8},{9,10,11,12}};

cout <<num[0][2]<<endl;

int i,j;
 for (i=0; i<3;i++){
    for (j=0; j<4;j++){
        cout << num [i][j]<<endl;
    }
    cout << "Increase i"<<endl;
 }
    return 0;
} 