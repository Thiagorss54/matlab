#include <iostream>
#include "matlab.h"
using namespace std;

int main (){
    Matriz B(3,2);
    Matriz A(B);
    Matriz A;
    int linhaa = A.getRows();
    cout<<linhaa<<endl;
    int cola = A.getCols();
    cout<<cola<<endl;
}