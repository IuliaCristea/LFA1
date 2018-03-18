#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
#include <map>
#include <iterator>
#include <string>
#include "AFN.h"

using namespace std;

int main()
{
	/*
	Stare q1;
	cout<<q1.getFin()<<endl;
	vector<pair<string,vector<int> > > s;
	pair<string,vector<int> > p1("a",{2,3}),p2("b",{4,5});
	s.push_back(p1);
	s.push_back(p2);
	Stare q2(s,1);
	vector<int>  out;
	out = q2.getVectorStari("b");
	for(int i = 0;i<out.size();i++)
	{
	cout<<out[i]<<" ";
	}
	cout<<endl;
	cout<<q2.getFin();*/
	AFN afn("E:\\Facultate\\LFA\\AFN\\date.in");
	if (afn.isAccepted("abazd"))
		cout << "Da";
	else
		cout << "Nope";
	return 0;
}