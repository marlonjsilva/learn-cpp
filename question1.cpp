/**
* Q1: Create a program that swaps the value of a vectorA by the value of vectorB
* author: Marlon J. Silva
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void printVector(string vName,vector<int>& vector);

int main (){

 	vector<int> vectorA = {2,4,6,8,10};
 	vector<int> vectorB = {1,3,5,7,11};
 	int swap = 0;
	
	printVector("vectorA",vectorA);
	printVector("vectorB",vectorB);
 
	 /* 
	  * The variable 'swap' holds the value of vectorA while vectorB switch the value 
	  * and then the value of 'swap' is parsed to vectorB
	  */
	 for(int i = 0; i < 5; i++){
	 	swap = vectorA[i];
	 	vectorA[i] = vectorB[i];
	 	vectorB[i] = swap; 
	 }

	 printVector("vetorA",vectorA);
	 printVector("vetorB",vectorB);
  return 0;
}

void printVector(string vName,vector<int>& vector){
	std::cout << vName << ": " ;
	for(int i = 0; i < vector.size(); i++){
		std::cout << vector[i] << " " ;
	}
	cout << "\n\n";	
}


