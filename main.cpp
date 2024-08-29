#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	cout << "Enter any character to exit OR Enter number to see funny theory" << endl;
	int n, steps;
	while(cin >> n){
		steps = 0;
		while(n != 1){
			if(n%2==0) n/=2;
			else n = 3*n+1;
			++steps;
		}
		cout << "steps to 1: " << steps << endl;
	}
	return 0;
}
