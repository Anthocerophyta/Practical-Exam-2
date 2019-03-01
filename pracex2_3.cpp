#include<iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
char table[8][8];

void showTable(char);
void randomTable(char);

int main(){
	srand(time(0));	
	randomTable(table);
	showTable(table);
}

void showTable(const char table[][8]){
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			cout << table[i][j] << " ";
		}
		cout << "\n";
	}
}
void randomTable(char table[][8]){
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){	
			table[i][j]=rand()%26-65;
		}
	}
	
}


