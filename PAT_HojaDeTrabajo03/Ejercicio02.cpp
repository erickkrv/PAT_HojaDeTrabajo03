#include "Ejercicio02.h"
#include <map>
#include <algorithm>
using namespace std;
vector<vector<string>>* Ejercicio02::groupAnagrams(vector<string>& strings)
{
vector<vector<string>>* final = new vector<vector<string>>();
	map<string, vector<string>> res;

	for (string s : strings)
	{
		string aOrdenar = s;
		sort(aOrdenar.begin(), aOrdenar.end());
		res[aOrdenar].push_back(s);
	}

	for (auto it = res.begin(); it != res.end(); ++it)
	{
		final->push_back(it->second);
	}

	return final;
}
