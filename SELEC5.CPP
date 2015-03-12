Name: Parth Bhatia								Date: 5/12/2014
STD/DIV: XI/H									Roll No: 3
Title: WAP to ensure that the subtraction of any two-digit number and its reverse is always the multiple of nine. For example, entered number is 54 and its reverse is 45. The difference between them is 9.

#include<iostream.h>
#include<conio.h>
void main() {
clrscr();
int num,num1,d1,d2,diff;
cout << "Enter a two digit number: ";
cin >> num;
d1=num%10;
d2=num/10;
num1=d1*10+d2;
cout << "Reverse number: " <<  num1;
if(num>num1)
diff=num-num1;
else
diff=num1-num;
if(diff==9)
cout << "\nThe difference is always 9.";
else
cout << "\nThe difference is not always 9.";
getch();
}

/*
====================OUTPUT===============
Enter a two digit number: 23
Reverse number: 32
The difference is always 9.
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
