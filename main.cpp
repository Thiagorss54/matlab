#include <iostream>
#include "matlab.h"
using namespace std;

int main (){
    Matriz A(2,2,10);
    printM(A.getMatriz());
    int linhaa = A.getRows();
    cout<<linhaa<<endl;
    int cola = A.getCols();
    cout<<cola<<endl;
    Matriz B;
    int linhab = B.getRows();
    cout<<linhab<<endl;
    Matriz C(3,4,5);
    cout << C ;
    Matriz D;
    cin >> D;
    cout << D;
}