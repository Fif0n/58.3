#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

int records = 1;

int days[100];

long record(string fileName, int system){
	long max, number;
	int day, i = 0;
	string num1, num2;
	bool first = true;
	char* endptr;
	ifstream file;
	ofstream fileOut;
	file.open(fileName.c_str());
	while(!file.eof()){
		file>>num1>>num2;
		day++;
		number = strtol(num2.c_str(), &endptr, system);
		if(first){
			max = number;
			first = false;
		} else
			if(number > max){
				max = number;
				records++;
				days[i] = day;
				i++;
			}
				
	}
	
	return max;
}

int main(int argc, char** argv) {
	for(int i = 0; i<=100; i++){
		days[i] = 0;
	}
	record("c:\\dane_systemy1.txt", 2);
	record("c:\\dane_systemy2.txt", 4);
	record("c:\\dane_systemy3.txt", 8);
//	cout<<day;
	for(int i = 0; i<=100; i++){
		cout<<days[i]<<endl;
	}
//	cout<<records;
	
	return 0;
}
