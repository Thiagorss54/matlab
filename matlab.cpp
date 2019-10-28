#include <iostream>
#include <string>
#include <vector>
#include "matlab.h"

using namespace std;

Matriz::Matriz(){

}
Matriz::Matriz(int linhas, int colunas, const double &valor){
    for (int i = 0; i < colunas ; i++){
        for (int j = 0; j < linhas ; j++){
            matriz[i][j] = valor;
            cout<<"foi"<<endl;
        }
    }
}
Matriz::Matriz(const Matriz &m){
    
}
Matriz::~Matriz(){
    
}

int Matriz::getRows(){
    cout<<matriz[0].size()<<endl;
    return matriz[0].size();
}
