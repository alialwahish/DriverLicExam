// Name: Ali Bayati 
// Driver’s License Exam  

#include<iostream>
#include<string>

using namespace std;
void readanswers(char[]);
int gradeExam(char[], char[]);
void printResults(int, char[], char[]);


int main()
{
	const int x = 20;
	int corrtAns,wrngAns;
	char ansr[x]  , cAns[]= "BDAACABACDBCDADCCBDA";
	
	readanswers(ansr);
	cout << endl << endl;
	corrtAns = gradeExam(ansr, cAns);
	wrngAns = 20 - corrtAns;

	string status;
	if (wrngAns > 5)
		status = "Failed";
	else
		status = "Passed";
	cout << "You " << status << " the Driver's License Exam " << endl;
	cout << "You had " << corrtAns << " right answers and " << wrngAns << " Wrong answers " << endl << endl << endl;

	printResults(x, ansr,cAns );
	

	return 0;
}

void readanswers(char ansr[])
{
	int i,x=20;

	cout << "Enter student answers :"<<endl ;
	for (i = 0; i < x; i++)
	{		
		cin >> ansr[i];
				
		while (!(ansr[i] == 'A' || ansr[i] == 'B' || ansr[i] == 'C' || ansr[i] == 'D' ) )
		{
						
			cout << "Error answer can be only letters A, B, C, or D ! try again :"<<endl;
			cout << ":";
			cin >> ansr[i];
		}
	}
}
int gradeExam(char yourans[], char corrAns[])
{
	int i, totCorAns, x = 20;
	totCorAns = 0;
	for (i = 0; i < x; i++)
	{
		if (yourans[i] == corrAns[i])
		
			totCorAns++;
				
		
		}
	return totCorAns;

}
void printResults(int x , char yans[] , char cAns[])
{
	int i;
		cout << "*** Displaying Score Sheet ***" << endl << endl << endl;
	cout << "Your               Correct" << endl;
	cout << "Answer             Answer                Remark" << endl;
	cout << "------             ------                ------" << endl;
	for (i = 0; i < x; i++)
	{
		if (yans[i] != cAns[i])
			cout << "  " << yans[i] << "                   " << cAns[i] << "                  " << "*** Wrong ***" << endl;
		else
			cout << "  " << yans[i] << "                   " << cAns[i] << endl;
	}
	
	}
/*Output
Enter student answers :
D
D
A
C
C
A
C
A
C
B
A
C
D
A
D
C
B
B
D
C


You Failed the Driver's License Exam
You had 13 right answers and 7 Wrong answers


*** Displaying Score Sheet ***


Your               Correct
Answer             Answer                Remark
------             ------                ------
D                   B                  *** Wrong ***
D                   D
A                   A
C                   A                  *** Wrong ***
C                   C
A                   A
C                   B                  *** Wrong ***
A                   A
C                   C
B                   D                  *** Wrong ***
A                   B                  *** Wrong ***
C                   C
D                   D
A                   A
D                   D
C                   C
B                   C                  *** Wrong ***
B                   B
D                   D
C                   A                  *** Wrong ***
Press any key to continue . . .


Enter student answers :
B
A
A
A
C
A
B
A
D
D
B
C
D
B
D
C
C
B
D
A


You Passed the Driver's License Exam
You had 17 right answers and 3 Wrong answers


*** Displaying Score Sheet ***


Your               Correct
Answer             Answer                Remark
------             ------                ------
B                   B
A                   D                  *** Wrong ***
A                   A
A                   A
C                   C
A                   A
B                   B
A                   A
D                   C                  *** Wrong ***
D                   D
B                   B
C                   C
D                   D
B                   A                  *** Wrong ***
D                   D
C                   C
C                   C
B                   B
D                   D
A                   A
Press any key to continue . . .


*/
