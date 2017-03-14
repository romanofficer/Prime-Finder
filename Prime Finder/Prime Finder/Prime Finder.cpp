// Prime Finder.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>

bool isPrime(long value) {
	for (long j = (value / 2) + 1; j > 1; j--) {
		//if i mod j == 0 return false
		if (value % j == 0) {
			//std::cout << "Shoudl not get here unless prime\n";
			//std::cout << value << " " << j << " " << value % j << std::endl;
			return false;
		}
	}
	return true;
}

int main()
{
	//added comment...
	long countTo = 1000000;//999999
	long start = 900000;

	long totalPrimes = 0;

	std::clock_t startClock;
	std::clock_t innerClock;

	startClock = std::clock();

	for (long i = start; i < countTo; i++) {
		//innerClock = std::clock();
		if (isPrime(i)) {
			std::cout << i << "\t";
			totalPrimes++;
		}
		//std::cout << "\nTime: " << (std::clock() - innerClock) / (double)(CLOCKS_PER_SEC / 1000) << " ms" << std::endl;
	}

	std::cout << "\nTotal Primes: " << totalPrimes;
	std::cout << "\nTime: " << (std::clock() - startClock) / (double)(CLOCKS_PER_SEC / 1000) << " ms" << std::endl;

	return 0;
}

