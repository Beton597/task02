#include <iostream>
#include <map>
#include<string>
#include<exception>
using namespace std;
int main() {

	map<string, string>cities;


	cities["Rivne"] = "33001";
	cities["Lviv"] = "55321";
	cities["Dnipro"] = "79854";
	cities["Kiev"] = "64531";


	for (auto el : cities) {
		cout << el.first << "---" << el.second << endl;
	}
	try {
		string city;
		cout << "Enter city:";
		cin >> city;
		cout << "---" << cities.at[city] << endl;
	}
	catch(exception &msg){
		cout << msg.what() << endl;
	}

	auto it = cities.find("Lviv");
	if (it != cities.end()) {
		cout << "found!!!" << it->second << endl;
	}
	else
		cout << "Not found" << endl;

	cities["Lviv"] = 12345;
		for (auto el : cities) {
			cout << el.first << "---" << el.second << endl;
		}
		cities.erase("Rivne");
		for (auto el : cities) {
			cout << el.first << "---" << el.second << endl;
		}




	system("pause");

}