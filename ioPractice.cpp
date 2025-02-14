#include <sstream>
#include <fstream>
#include <string>
#include <iostream>

int main(){
	std::ifstream inFile;
	std::string currentLine;
	std::stringstream ss;
	std::stringstream converter;
	std::string sNum;
	int num;
	int tempNum;
	std::string word;
	inFile.open("data.csv");
	
	while(getline(inFile,currentLine)){
		ss.clear();
		converter.clear();
		
		ss.str(currentLine);
		getline(ss,sNum,',');
		converter << sNum;
		converter >> num;
		//std::cout << "this is num:" << num << std::endl;
		
		converter.clear();
	
		getline(ss,sNum, ',');
		converter << sNum;
		converter >> tempNum;
		//std::cout << "This is tempNum:" << tempNum << std::endl;
		num += tempNum;
		//std::cout << num << std::endl;
	
		getline(ss,word);
		for (int i = 0; i < num; i++){
			std::cout << word;
		}
		std::cout << std::endl;

	}
	return(0);
}
