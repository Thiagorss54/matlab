#include <iostream>
#include <string>
#include <vector>
#include "matlab.h"

using namespace std;

Matriz::Matriz(){

}
Matriz::Matriz(const int linhas, const int colunas, const double &valor){
   for(int i =0; i < linhas;++i){
       vector<double> aux;
       for(int j =0; j < colunas; ++j ){
           aux.push_back(valor);
       }
       matriz.push_back(aux);
   }
}
Matriz::Matriz(const Matriz &m){
    
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

int Matriz::getRows(){
    cout<<matriz[0].size()<<endl;
    return matriz[0].size();
}
