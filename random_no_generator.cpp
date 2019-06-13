#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main ()
{ int a=0;
srand(time(0));
while(a<6)
{
	cout<<rand() <<endl;
	a++;
} 
 
	return 0;
}
/* srand ()  is used How srand() and rand() are related to each other?

srand() sets the seed which is used by rand to generate “random” numbers. If you don’t call srand before your first call to rand, it’s as if you had called srand(1) to set the seed to one.
In short, srand() — Set Seed for rand() Function.
******************
rand() function is used in C to generate random numbers. If we generate a sequence of random number with rand() function, it will create the same sequence again and again every time program runs. Say if we are generating 5 random numbers in C with the help of rand() in a loop, then every time we compile and run the program our output must be the same sequence of numbers.*/
