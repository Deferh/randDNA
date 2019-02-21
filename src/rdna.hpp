#include <iostream>
#include <string>
#include <random>

using namespace std;
string randDNA (int seed , string bases, int n)
{
	mt19937 eng1(seed);
	int min = 0;
	int max = bases.size()-1;
	uniform_int_distribution<>uniform(min,max);
	int index = 0;
	string dna = "";

	if (bases.size() == 0)
	{
	 dna = "";
	 return dna;
	}

	for (int i=0; i<n; i++){
	 index = uniform (eng1);
	 dna = dna + bases[index];
	 
	 
	}
	
return dna;

}
