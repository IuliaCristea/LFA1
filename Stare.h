
#include<iostream>
#include <utility>
#include <algorithm>
#include <vector>
#include <map>
#include <iterator>
#include <string>
using namespace std;

class Stare
{
private:
	map<char, vector<int> > _stare;
	bool _finala;
public:
	Stare();
	Stare(const vector<pair<char, vector<int> > > & stare, bool fin);
	vector<int> getVectorStari(const char c);
	bool getFin();
	void setFin(bool b);
};