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
    if (A!=C) cout<<"Deu  bom"<<endl;
    // Matriz E = A - C;
    // cout << E;
    Matriz D;
    cin >> D;
    Matriz G;
    G = ~D;
    cout << G;
    cout<<endl;
    Matriz E;
    cin >> E;
    Matriz F;
    F = D*E;
    D(1,1)=10;
    cout << F;
  
}