/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13
, we can see that the 6th prime is 13.What is the 10001st 
prime number? Write a program to print it. Paste a link to your answer *
*/

#include <iostream>
using namespace std;

int main()
{
	int number;
	bool prime = true;
	int prime_count = 2; //for loop below starts at 5 - there are already 2 primes before 5: 2 and 3. 
	//Therefore, prime count is 2.
	int j = 2; //a number is prime if is only divisible by 1 and itself. In order to not divide by one, j is set to 2. 
	
	for (number = 5; prime_count < 10001; number++)
	{
	    j = 2;
	    while ( j < (number -1)) 
		{
		    prime = true;
			if (number % j == 0)
			{
				prime = false;
				break;
			}
			j++;
			//cout << "j is " << j << endl;
		if ((number - 1 == j) && (prime == true))
		{
			prime_count = prime_count + 1;
			//cout << "prime count is " << prime_count << endl;
			//cout << "the prime number is " << number << endl;
		}
				
		}
	}

		
	cout << "The prime count is " << prime_count << endl;
	cout << "The prime number for that count is " << number -1 << endl;


}