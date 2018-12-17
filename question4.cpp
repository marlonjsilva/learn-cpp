/*
 * Q4: Make a program that evaluates if a given number is greater thant they neighbors
 * and calculates the average of these values.
 *
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void printVector(string vName,vector<double>& vector);

int main (){

  vector<double> vectorA(10);
  vector<double> vectorB(10);
  double result = 0;
  double current = 0;
  double prev = 0;
  double next = 0;
  double sum = 0;
  double avr = 0;
  int count = 0;

  for (int i = 0; i < 10; i++){
  	cout << "Plase inform a number " << i+1 << " for the vector: \r\n";
  	cin >> vectorA[i];
  }
  /* Iterates under vectorA comparing the values if the conditional is matched 
   * the value is stored in vectorB otherwise vectorB receives the value 0
   */
	for (int i = 0; i < 10; i++){
			current = vectorA[i];
			next = vectorA[(i+1)];
			if(current > prev){
				if(current > next){
					vectorB[i] = current;
				}else {
					vectorB[i] = 0;
				}
			}else{
				vectorB[i] = 0;
			}
			prev = current;	
	}
	
	printVector("VectorB",vectorB);
	/* Iterates under vectorB and sum the values
	 */
	for(int i = 0; i < 10; i++){
		if(vectorB[i] > 0){
			sum += vectorB[i];
			count++;
		}
	}
	/* Divide the value by count */
	avr = sum / count;
	cout << "Average: " << avr << "\r\n"; 

  return 0;
}

void printVector(string vName,vector<double>& vector){
	std::cout << vName << ": " ;
	for(int i = 0; i < vector.size(); i++){
		std::cout << vector[i] << " " ;
	}
	cout << "\n\n";	
}


