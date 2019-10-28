#include <iostream>
#include "matlab.h"
using namespace std;

int main (){
    Matriz A(2,2,10);
    Matriz B;
    Matriz C(3,5,5);
    cout << C;
    cout <<endl<<endl;

    Matriz E = A + C;
    cout<< E;
    Matriz D;
    cin >> D;
    cout << D;

}