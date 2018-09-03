#include <iostream>
using namespace std;

int main() {
	cout<<"UNIVERSITY OF GHANA \n";
	cout<<"COURSE GRADING SYSTEM \n";
		int mark, ID;
		string FNAME, LNAME;
		cout<<"ENTER YOUR FIRST NAME HERE: \n";
		cin>>FNAME;
		cout<<"ENTER YOUR LAST NAME HERE: \n";
		cin>>LNAME;
		cout<<"ENTER STUDENT'S MARK HERE:  \n";
		cin>>mark;
		float GPT;
		float GPA;
		
	if (mark <= 100 && mark>=80){
		cout<<"NAME: "<<FNAME <<  LNAME<<endl;
		GPT =12.0;
		cout<<"GRADE: A\n";
		cout<<"GPT:"<<GPT;
		}
		else if(mark >=75 && mark <=79){
			cout<<"NAME: "<<FNAME<<LNAME<<endl;
			GPT = 10.50;
			cout<<"GRADE: B+\n";
			cout<<"GPT:"<<GPT;
		}
		else if(mark >= 70 && mark <= 74){
			cout<<"NAME: "<<FNAME<<LNAME<<endl;
			GPT = 9.00;
			cout<<"GRADE: B\n";
			cout<<"GPT:"<<GPT;
			}
		else if(mark>=65 && mark <= 69){
			cout<<"NAME: "<<FNAME<<LNAME<<endl;
			GPT=7.50;
			cout<<"GRADE: C+\n";
			cout<<"GPT:"<<GPT;
			}
		else if(mark >= 60 && mark <= 64){
			cout<<"NAME: "<<FNAME<<LNAME<<endl;
			GPT=6.50;
			cout<<"GRADE: C\n";
			cout<<"GPT:"<<GPT;	
			}
		else if(mark>=55 && mark<=59){
			cout<<"NAME: "<<FNAME<<LNAME<<endl;
			GPT=4.50;
			cout<<"GRADE: D+\n";
			cout<<"GPT:"<<GPT;
			}
		else if(mark>=50 && mark<=54){
			cout<<"NAME: "<<FNAME<<LNAME<<endl;
			GPT=3.50;
			cout<<"GRADE: D\n";
			cout<<"GPT:"<<GPT;
		}
		else if (mark>=40 && mark<=49){
			cout<<"NAME: "<<FNAME<<LNAME<<endl;
			GPT=0;
			cout<<"GRADE: E\n";
			cout<<"GPT:"<<GPT;
		}
		else if(mark<40){
			cout<<"NAME: "<<FNAME<<LNAME<<endl;
			GPT=0;
			cout<<"GRADE: F\n";
			cout<<"GPT:"<<GPT;	
		}
		
		
		
		
		
		return 0;
}
