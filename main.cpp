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
    B.getRows();
}