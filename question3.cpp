/**
 * Q3: Make a program that receive user input and verify if 
 * is a prime stores in another vector and sum the values
 * at the end prints the vectors and result.
 * author: Marlon J. Silva
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isPrime ( const int prime);

void printVector(string vName,vector<int>& vector);

int main (){

  vector<int> vectorA(10);
  vector<int> vectorB(10);
  int n = 0;
  int result = 0;
  /* User inputs */
  for (int i = 0; i < 10; i++){
  	std::cout << "Please inform a number for the vectorA: " << endl;
  	std::cin >> vectorA[i];
  }
  
  printVector("VectorA",vectorA);
  
  /* If the value is prime then is stored in vectorB */
  for (int i = 0; i < 10; i++){
  	if(isPrime(vectorA[i])){
  		vectorB[i] = vectorA[i];
	  }else{
		vectorB[i] = 0;
	}
  }
  /* Sum all numbers in vectorB */
  for(int i = 0; i < 10; i++){
  	result += vectorB[i];
  }
  
   printVector("VectorB",vectorB);
  
  /* Print the sum */
  cout << "O result da soma " << result;
  return 0;
}
/* This function verifies is a given number is prime or not */
bool isPrime (const int prime) {
  int counter = 1;
  if (prime == 0){
      return false;
    }else {
      for (int i = 2; i < prime ; i++){
          	if ((prime % i ) == 0) {
	            counter++;
	         }
      }
	}
    if(counter > 1){
    	return false;
	}    
   return true;
}

void printVector(string vName,vector<int>& vector){
	std::cout << vName << ": " ;
	for(int i = 0; i < vector.size(); i++){
		std::cout << vector[i] << " " ;
	}
	cout << "\n\n";	
}

