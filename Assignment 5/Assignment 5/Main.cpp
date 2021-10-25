#include <iostream>
#include <map>
#include <string>
using namespace std;

//output's all states and their capitals in "capital, state" order
void outputMap(map<string, string> stateData) {
	for (auto const &pair : stateData) {
		cout << pair.second << ", " << pair.first << endl;
	}
	cout << endl;
}

//output's capital based off user entered state
void capitalName(map<string, string> stateData) {
	string state;
	bool incorrect = true;

	cout << "Enter State: ";
	cin >> state;

	for (auto const& pair : stateData) {
		if (state == pair.first) {
			cout << "Capital of " << pair.first << " is " << pair.second << endl;
			incorrect = false;
		}
	}

	if (incorrect) {
		cout << "Sorry, no state matches..." << endl;
	}
}

int main() {
	map<string, string> stateDataMap;

	stateDataMap["Nebraska"] = "Lincoln";
	stateDataMap["New York"] = "Albany";
	stateDataMap["Ohio"] = "Columbus";
	stateDataMap["California"] = "Sacramento";
	stateDataMap["Massachusetts"] = "Boston";
	stateDataMap["Texas"] = "Austin";

	outputMap(stateDataMap);

	stateDataMap["California"] = "Los Angeles";

	capitalName(stateDataMap);

	return 0;
}