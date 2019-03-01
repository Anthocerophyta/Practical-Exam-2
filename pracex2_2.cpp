#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
int N=20;

void sort(float x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] < x[j-1]){
				float temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			} 
		}
	}
}

int main(){
	
	ifstream imp("score1.txt");
	ofstream exp("result.txt");
	string data;
	float x[N];
	int n=0;
	while(getline(imp,data)){	
		x[n]=atof(data.c_str());
		n++;					
	}
	sort(x,N);
	n=1;
	for(int i = 0; i < N; i++){
		if (x[i]<x[i+1]) exp <<n++<<" : "<< x[i]<<"\n";
			else exp <<n<<" : "<< x[i]<<"\n";
	
	}
		
	return 0;
}

