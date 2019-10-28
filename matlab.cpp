#include <iostream>
#include <string>
#include <vector>
#include "matlab.h"

using namespace std;

Matriz::Matriz():Matriz(0,0,0){}

Matriz::Matriz(const int linhas, const int colunas, const double &valor){
   for(int i =0; i < linhas;++i){
       vector<double> aux;
       for(int j =0; j < colunas; ++j ){
           aux.push_back(valor);
       }
       matriz.push_back(aux);
   }
}

Matriz::Matriz(int linhas, int colunas, const double &valor){
    for (int i = 0; i < linhas ; i++){
        vector<double> temp;
        for (int j = 0; j < colunas ; j++){
            temp.push_back(valor);
        }
        matriz.push_back(temp);
    }
}

Matriz::~Matriz(){
    
}
