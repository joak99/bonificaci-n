# include <fstream>
# include <stdlib.h>
# include <iostream>
using namespace std ;

int main(void){
	ifstream filein;
	ofstream fileout;
	char buffer[100];
	filein.open("dict.txt");
	fileout.open("dict1.txt");
	int i=0;
	while(!filein.eof()){
		
		filein.getline(buffer, sizeof(buffer));
		i++;
	fileout << i << " " << buffer << endl;
	fileout << endl;
	}
	filein.close();
	fileout.close();
}