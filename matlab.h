#ifndef MATLAB_H
#define MATLAB_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void printM(vector<vector<double>>);
class Matriz{
	private:
        vector<vector<double>> matriz;

	public:
        Matriz(); //cria uma matriz vazia com números de linhas e colunas iguais a 0
        Matriz(int linhas, int colunas, const double &valor = 0); //cria uma matriz com
            // número de linhas e colunas iguais aos recebidos pelos argumentos e com todos
            // os valores da matriz preenchidos com a variável valor.
        inline Matriz(const Matriz &m){ matriz = m.matriz; } //construtor de cópia
        ~Matriz(); //destrutor
        inline int getRows(){ return matriz.size(); }
        inline int getCols(){ return matriz[0].size(); }
        void zeros();
        inline void operator =(const Matriz& m){ matriz = m.matriz; }
        Matriz operator +(const Matriz& m);
        void operator +=(const Matriz& m);
        Matriz operator -(const Matriz& m);
        void operator -=(const Matriz& m);
        double& operator() (int, int);
        friend ostream& operator << (ostream&, Matriz&);
        friend istream& operator >> (istream&, Matriz&);

        // **********
        vector<vector<double>> getMatriz(){return matriz;}

};

#endif //MATLAB_H
