Name:Parth Bhatia								Date: 11/03/2015	
STD/DIV: XI/H								Roll No: 3
Title: WAP to perform factorial of a given number using function having no return-type.

#include<iostream.h>
#include<conio.h>
void fact(); //function declaration

void main(){
clrscr();
fact(); //function calling
getch();
}

void fact() { //function defination
	int n;
	cout<<"Enter n: ";
	cin>>n;
	long f=1;
	while(n>0) {
		f=f*n;
		n--;
	}
	cout<<"Factorial is :"<<f;
}

/*
===============OUTPUT==================
Enter n: 9
Factorial is :362880
*/
