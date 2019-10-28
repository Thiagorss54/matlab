#include <iostream>
#include "matlab.h"
using namespace std;

int main (){
    Matriz A(2,2,10);
    Matriz B;
    Matriz C(2,2,5);
    cout << C;
    cout <<endl<<endl;
    A -= C;
    cout<<A;

    A *= 2;
    cout<<A;
    // Matriz E = A - C;
    // cout << E;
    Matriz D;
    cin >> D;
    cout << D;
    D(1,1)=10;
    cout << D;
}