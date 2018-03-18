
#include <iostream>
#include "Stare.h"
#include <utility>
#include <algorithm>
#include <vector>
#include <map>
#include <iterator>
#include <string>
using namespace std;

Stare::Stare() :
	_finala(0)
{}

Stare::Stare(const vector<pair<char, vector<int> > > & stare, bool isFinal) :
	_finala(isFinal)
{
	vector<pair<char, vector<int> > > ::const_iterator it;
	for (it = stare.begin(); it != stare.end(); it++)
	{
		_stare.insert(pair<char, vector<int> >(it->first, it->second));
	}
}

vector<int> Stare::getVectorStari(const char key)
{
	if (_stare.find(key) != _stare.end())
	{
		return _stare[key];
	}
}

bool Stare::getFin()
{
	return _finala;
}

void Stare::setFin(bool b)
{
	_finala = b;
}

