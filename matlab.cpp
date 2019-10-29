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

void Matriz::zeros(){
    for(int i =0;i < matriz.size();i++){
       for(int j=0;j < matriz[i].size();j++){
           matriz[i][j] = 0;
       }
    }
}

Matriz Matriz::operator +(const Matriz& m){
    int tamlinha, tamlinhaa = matriz.size(), tamlinhab = m.matriz.size();
    int tamcol, tamcola = matriz[0].size(), tamcolb = m.matriz[0].size();
    if (tamlinhaa >= tamlinhab) tamlinha = tamlinhaa;
        else tamlinha = tamlinhab;
    if (tamcola >= tamcolb) tamcol = tamcola;
        else tamcol = tamcolb;
    Matriz r;
    for(int i =0;i < tamlinha ;i++){
        vector<double> aux;
        for(int j=0;j < tamcol ;j++){
            if (i>=tamlinhaa || j>=tamcola) aux.push_back(m.matriz[i][j]);
            else if (i>=tamlinhab || j>=tamcolb) aux.push_back(matriz[i][j]);
            else aux.push_back(matriz[i][j] + m.matriz[i][j]); 
        }
        r.matriz.push_back(aux);
    }
    return r;
}

void Matriz::operator +=(const Matriz& m){
    int tamlinha, tamlinhaa = matriz.size(), tamlinhab = m.matriz.size();
    int tamcol, tamcola = matriz[0].size(), tamcolb = m.matriz[0].size();
    if (tamlinhaa >= tamlinhab) tamlinha = tamlinhaa;
        else tamlinha = tamlinhab;
    if (tamcola >= tamcolb) tamcol = tamcola;
        else tamcol = tamcolb;
    Matriz r;
    for(int i =0;i < tamlinha ;i++){
        vector<double> aux;
        for(int j=0;j < tamcol ;j++){
            if (i>=tamlinhaa || j>=tamcola) aux.push_back(m.matriz[i][j]);
            else if (i>=tamlinhab || j>=tamcolb) aux.push_back(matriz[i][j]);
            else aux.push_back(matriz[i][j] + m.matriz[i][j]); 
        }
        r.matriz.push_back(aux);
    }
    matriz = r.matriz;
}

Matriz Matriz::operator -(const Matriz& m){
    int tamlinha, tamlinhaa = matriz.size(), tamlinhab = m.matriz.size();
    int tamcol, tamcola = matriz[0].size(), tamcolb = m.matriz[0].size();
    if (tamlinhaa >= tamlinhab) tamlinha = tamlinhaa;
        else tamlinha = tamlinhab;
    if (tamcola >= tamcolb) tamcol = tamcola;
        else tamcol = tamcolb;
    Matriz r;
    for(int i =0;i < tamlinha ;i++){
        vector<double> aux;
        for(int j=0;j < tamcol ;j++){
            if (i>=tamlinhaa || j>=tamcola) aux.push_back(-m.matriz[i][j]);
            else if (i>=tamlinhab || j>=tamcolb) aux.push_back(matriz[i][j]);
            else aux.push_back((matriz[i][j]) - (m.matriz[i][j])); 
        }
        r.matriz.push_back(aux);
    }
    return r;
}

void Matriz::operator -=(const Matriz& m){
    int tamlinha, tamlinhaa = matriz.size(), tamlinhab = m.matriz.size();
    int tamcol, tamcola = matriz[0].size(), tamcolb = m.matriz[0].size();
    if (tamlinhaa >= tamlinhab) tamlinha = tamlinhaa;
        else tamlinha = tamlinhab;
    if (tamcola >= tamcolb) tamcol = tamcola;
        else tamcol = tamcolb;
    Matriz r;
    for(int i =0;i < tamlinha ;i++){
        vector<double> aux;
        for(int j=0;j < tamcol ;j++){
            if (i>=tamlinhaa || j>=tamcola) aux.push_back(-m.matriz[i][j]);
            else if (i>=tamlinhab || j>=tamcolb) aux.push_back(matriz[i][j]);
            else aux.push_back((matriz[i][j]) - (m.matriz[i][j])); 
        }
        r.matriz.push_back(aux);
    }
    matriz = r.matriz;
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
istream& operator >> (istream& in, Matriz&M){
    int linha, coluna;
    double valor;
    cout <<"linhas: ";
    in >> linha;
    cout << "colunas: ";
    in >> coluna;
 for(int i =0; i < linha;++i){
       vector<double> aux;
       for(int j =0; j < coluna; ++j ){
           cout<< "m[" << i <<"][" << j << "] = ";
           in>> valor;
           aux.push_back(valor);
           
       }
       M.matriz.push_back(aux);
   }
}

void Matriz::operator *=(const double a){
    int linha =this->getRows();
    int coluna = this->getCols();

    for (int i = 0 ; i < linha ; i++){
        for (int j = 0 ; j < coluna ; j++){
            matriz[i][j] *= a;
        }
    }
}

double& Matriz::operator() ( int linha, int coluna){
    return matriz[linha-1][coluna-1];
}

bool Matriz::operator ==(const Matriz& m){
    int linha_a = matriz.size();
    int coluna_a = matriz[0].size();

    int linha_b = m.matriz.size();
    int col_b = m.matriz[0].size();

    if(linha_a != linha_b || coluna_a != col_b)  return false;

    for (int i=0; i < linha_a; i++){
        for (int j=0 ; j< coluna_a; j++){
            if (matriz[i][j] != m.matriz[i][j]) return false; 
        }
    }
    return true;
}

bool Matriz::operator !=(const Matriz& m){
    int linha_a = matriz.size();
    int coluna_a = matriz[0].size();

    int linha_b = m.matriz.size();
    int col_b = m.matriz[0].size();

    if(linha_a != linha_b || coluna_a != col_b)  return true;

    for (int i=0; i < linha_a; i++){
        for (int j=0 ; j< coluna_a; j++){
            if (matriz[i][j] != m.matriz[i][j]) return true; 
        }
    }
    return false;
}

void Matriz::operator ^=(const Matriz& m){
    matriz.clear();
    int lin_m = m.matriz.size();
    int col_m = m.matriz[0].size();
    
    for(int i = 0; i < col_m;i++ ){
        vector <double> aux;
        for (int j = 0; j < lin_m; j++){ 
            aux.push_back(m.matriz[j][i]);
        }
        matriz.push_back(aux);
    }
}

Matriz Matriz::operator *(const Matriz &m){
    if(matriz[0].size() != m.matriz.size()){
        cout << " c n fez gaal o buceta" << endl;
        Matriz vazia;
        return vazia;
    }
    else{
        Matriz aux_matriz(matriz.size(), m.matriz.size(), 0);
        
        for (int i = 0; i < matriz.size(); i++){
            for (int j = 0; j <m.matriz[0].size() ; j++){                
                for(int k = 0; k < matriz[0].size();k++){
                    aux_matriz.matriz[i][j] += matriz[i][k] * m.matriz[k][j];
                }
            }
        }     
        return aux_matriz;  
    }
}

// Matriz::~Matriz(){
//     matriz.clear();
// }
