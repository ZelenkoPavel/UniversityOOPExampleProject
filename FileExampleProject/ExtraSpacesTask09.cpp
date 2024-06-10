#include <iostream>	// input-output streams
#include <fstream>	// file streams
#include <string>

using namespace std;

int main() {
	string msg;
	
	ifstream fin("input.txt");
	ofstream fout("output.txt");
	


	while (!fin.eof()) {
		ofstream fout1("output1.txt");
		ifstream fin1("output1.txt");

		getline(fin, msg);
		fout1 << msg << endl;

		while (!fin1.eof()) {
			string s;
			fin1 >> s;
			
			fout << s << " ";
		}
		fout << endl;
		fin1.close();
		fout1.close();

	}

	fin.close();
	fout.close();

	return 0;
}
