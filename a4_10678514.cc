
#include <iostream>

using namespace std;

int gcd(int Fnum, int Snum);


int main() {
	int Fnum, Snum, C;
/*This program calculates the Greatest common divisor of two numbers*/	
	cout<<"PLEASE ENTER FIRST NUMBER HERE: ";
	cin>>Fnum;
	cout<<"PLEASE ENTER SECOND NUMBER:  ";
	cin>>Snum;
		
	cout<<"THE GCD OF "<< Fnum<<" AND "<<Snum <<" IS: " << gcd(Fnum, Snum);	
	

	return 0;
}
	int gcd(int Fnum, int Snum){
		
		if(Snum != 0)
		return  gcd(Snum, Fnum % Snum);
		else
			return Fnum;
}
