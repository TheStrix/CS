Name:Parth Bhatia								Date: 11/03/2015	
STD/DIV: XI/H								Roll No: 3
Title: WAP to perform factorial of a given number using function of a return-type.

#include<iostream.h>
#include<conio.h>
long fact(int a);  //function declaration

void main() {
clrscr();
int x;
cout<<"Enter no: ";
cin>>x;
long f=fact(x);  //function calling
cout<<"factorial: "<<f;
getch();
}

long fact(int a) {   //function defination
	long c=1;
	while(a>0) {
		c=c*a;
		a--;
	}
	return c;
}

/*
===========OUTPUT=============
Enter no: 5
factorial: 120
*/
