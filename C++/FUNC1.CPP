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