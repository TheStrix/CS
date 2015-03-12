Name: Parth Bhatia								Date: 5/12/2014
STD/DIV: XI/H									Roll No: 3
Title: WAP to enter a four-digit number. Display the digits of the number in the reverse order using modular division and division operation. Perform addition and multiplication of digits.

#include<iostream.h>
#include<conio.h>
void main(){
clrscr();
	int n,d1,d2,d3,d4;
	cout << "Enter a four digit number: ";
	cin >> n;
	d1=n%10;
	d2=(n/10)%10;
	d3=(n/100)%10;
	d4=n/1000;
	n=d1*1000+d2*100+d3*10+d4;
	cout << "After reverse number is " << n << ".";
getch();
}


/*
=====================OUTPUT=====================
Enter a four digit number: 1354
After reverse number is 4531.
*/
