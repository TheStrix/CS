Name: Parth Bhatia								Date: 5/12/2014
STD/DIV: XI/H									Roll No: 3
Title: WAP to pass the resolution in a meeting comprising of five members. If three or more votes are obtained the  resolution is passed otherwise rejected.

#include <iostream.h>
#include <conio.h>
void main() {
clrscr();
char v;
int m,y,n;
cout << "Vote to pass resolution (Y/N):\n";
y=n=0;
for(m=1;m<=5;m++) {
	cout << "\nEnter vote: ";
	cin >> v;
	if(v=='Y' || v=='y')
		y++;
	else
		n++;
	}
	if(y>n)
		cout << "\n\nResolution is passed!";
	else
		cout << "\n\nResolution is failed!";
getch();
}




/*
====================OUTPUT====================
Vote to pass resolution (Y/N):

Enter vote: Y

Enter vote: N

Enter vote: y

Enter vote: y

Enter vote: y


Resolution is passed!

*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
