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

Matriz::~Matriz(){
    
}

//**************** printar matriz ****************
void printM(vector<vector<double>> M){
   for(int i =0;i < M.size();i++){
       for(int j=0;j < M[i].size();j++){
           cout << M[i][j] << " ";
       }
       cout << endl;
   }
}   
ostream& operator << (ostream& out, Matriz& M){
    for(int i =0;i < M.matriz.size();i++){
       for(int j=0;j < M.matriz[i].size();j++){
           out << M.matriz[i][j] << " ";
       }
       out << endl;
   }
}