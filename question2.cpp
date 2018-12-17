/*
 * Q2: Make a program that sums the sequences 5 + 55 + 555 + {...} n times, 
 * the n is given by user input
 * author: Marlon J. Silva
*/ 
#include <stdlib.h>
#include <math.h>
#include <iostream>
using namespace std;

unsigned long long int exp(unsigned long long int i);

int main (){
	
	unsigned long long int times = 0;
	unsigned long long int result = 0;
	cout << "How many times? \r\n";
	cin >> times;
	/* The function f(n)=5*(10^(n+1)-10-9n)/81 */ 
	result =5*(exp(times+1)-10-9*times)/81;
	cout << "result: " << result << "\r\n";
	return 0;
}
/* This funcion returns 10^n */
unsigned long long int exp(unsigned long long int i){
 unsigned long long int k;
 unsigned long long int j;
 k=1;
	 for(j=1;j<=i;j++){
	  k=10*k;
	 }
 return k;
}


