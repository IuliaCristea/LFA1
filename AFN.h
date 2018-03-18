#include <iostream>
#include "Stare.h"
#include <vector>
#include <string>
using namespace std;

class AFN
{
private:
	vector<Stare> _q;
	bool flag;
	void isAccepted(string cuvant, int nrCurent);
public:
	AFN(char* numeFisier);
	bool isAccepted(string cuvant);
};

