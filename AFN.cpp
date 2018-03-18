#include <iostream>
#include <vector>
#include "AFN.h"
#include <fstream>


AFN::AFN(char* numeFisier) :
	flag(false)
{
	int noOfSymbols;
	int noOfStatesForSymbol;
	bool isFinal;
	char symbol;
	ifstream file;
	file.open(numeFisier);
	while (!file.eof() && file)
	{

		file >> isFinal;
		file >> noOfSymbols; // nr de litere pe care le are o stare
		vector<pair<char, vector<int> > > v;
		for (int i = 0; i<noOfSymbols; i++)
		{
			file >> symbol; // litera
			file >> noOfStatesForSymbol; // nr de stari in care se duce litera c
			vector<int> w;
			for (int j = 0; j < noOfStatesForSymbol; j++)
			{
				int aux;
				file >> aux;
				w.push_back(aux);
			}
			pair<char, vector<int> > pairAux(symbol, w);
			v.push_back(pairAux);
		}
		Stare stareAux(v, isFinal);
		_q.push_back(stareAux);
	}
	file.close();
}

void AFN::isAccepted(string cuvant, int nrCurent)
{
	if (cuvant.empty() && _q[nrCurent].getFin())
	{
		flag = true;
	}
	vector<int> vStari = _q[nrCurent].getVectorStari(cuvant[0]);
	for (auto state : vStari)
	{
		if (!flag)
		{
			isAccepted(cuvant.substr(1, cuvant.size() - 1), state);
		}
	}
}

bool AFN::isAccepted(string cuvant)
{
	isAccepted(cuvant, 0);
	return flag;
}