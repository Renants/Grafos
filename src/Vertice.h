/*
 * Vertice.h
 *
 *  Created on: 1 de jun de 2016
 *      Author: renan
 */

#ifndef VERTICE_H_
#define VERTICE_H_
#include <vector>;
using namespace std;

class Vertice {
public:
	Vertice( int v);
	Vertice();
	void setVisitado( bool valor);
	bool getVisitado();

	void setId(int _id);
	int  getId();

	void setImput( int in);
	int getImput();

	void setOutput(int out);
	int getOutput();

	void setEstimativa(int in);
	int  getEstimativa();

	void setCor( String cor);
	String getCor();

private:
	vector <Vertice*> predecessores
	int id;
	int imput; // tempo inicial de busca do vertice para busca em profundidade;
	int output;// tempo final de busca do vertice para busca em profundidade;
	int estimativa // tempo de um vertice Dijkstra;
	bool visitado;
	String cor;
};

#endif /* VERTICE_H_ */
