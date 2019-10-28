#ifndef MATLAB_H
#define MATLAB_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void printM(vector<vector<double>> );
class Matriz{
	private:
        vector<vector<double>> matriz;

	public:
        Matriz(); //cria uma matriz vazia com números de linhas e colunas iguais a 0
        Matriz(int linhas, int colunas, const double &valor = 0); //cria uma matriz com
            // número de linhas e colunas iguais aos recebidos pelos argumentos e com todos
            // os valores da matriz preenchidos com a variável valor.
        Matriz(const Matriz &m); //construtor de cópia
        ~Matriz(); //destrutor
        int getRows();

        // **********
        vector<vector<double>> getMatriz(){return matriz;}

};

#endif //MATLAB_H
