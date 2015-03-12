Name: Parth Bhatia								Date: 5/12/2014
STD/DIV: XI/H									Roll No: 3
Title: WAP to find the total number of votes in favour of persons 'A' and 'B'.
Assume 10 voters will be casting their votes to these votes to these persons. Count the number of votes.

#include <iostream.h>
#include <conio.h>
void main() {
clrscr();
int ca,cb,i;
char v;
cout << "Vote for 'A' or 'B' \n";
ca=0;
cb=0;
for(i=1;i<=10;i++) {
	cout << "\nEnter your vote:";
	cin >> v;
	if(v=='A' || v=='a')
		ca++;
	if(v=='B' || v=='b')
		cb++;
	}
cout << "\nTotal votes for 'A'="<<ca;
cout << "\nTotal votes for 'B'="<<cb;
getch();

}




/*
========================OUTPUT=========================

Vote for 'A' or 'B'

Enter your vote:A

Enter your vote:B

Enter your vote:b

Enter your vote:A

Enter your vote:b

Enter your vote:b

Enter your vote:b

Enter your vote:b

Enter your vote:b

Enter your vote:b

Total votes for 'A'=2
Total votes for 'B'=8
*/
