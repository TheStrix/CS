Function Programs
Name:Parth Bhatia								Date: 11/03/2015	
STD/DIV: XI/H								Roll No: 3
Title: WAP to perform addition of 2 numbers using function 'add()' which should accept two parameters. Display output in function 'main()'.

#include<iostream.h>
#include<conio.h>
int add(int a,int b);  //function declaration

void main() {
clrscr();
int x,y;
cout<<"Enter two nos: ";
cin>>x>>y;
int sum=add(x,y); //function calling
cout<<"Addition is: "<<sum;
getch();
}

int add(int a,int b) {  //function defination
	int c;
	c=a+b;
	return c;
}

/*
==============OUTPUT============
Enter two nos: 8
9
Addition is: 17
*/
