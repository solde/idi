#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;

int main(){
	char hex[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	srand(time(NULL));
	string str = "backgorund-color: #";
	for(int i = 0; i < 6; i++) str.push_back(hex[rand() % 16]);
	cout << str << endl;
}