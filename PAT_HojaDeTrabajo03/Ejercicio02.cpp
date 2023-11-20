#include "Ejercicio02.h"
#include <map>
#include <algorithm>
using namespace std;
vector<vector<string>>* Ejercicio02::groupAnagrams(vector<string>& strings)
{
vector<vector<string>>* result = new vector<vector<string>>();
	map<string, vector<string>> res;

	for (string s : strings)
	{
		string sorted = s;
		sort(sorted.begin(), sorted.end());
		res[sorted].push_back(s);
	}

	for (auto it = res.begin(); it != res.end(); ++it)
	{
		result->push_back(it->second);
	}

	return result;
}
