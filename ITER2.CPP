Name: Parth Bhatia								Date: 5/12/2014
STD/DIV: XI/H									Roll No: 3
Title: WAP to calculate the sum of first and last numbers from 1 to 10. (Example 1+10,2+9, 3+8 sums should always 11.)


#include <iostream.h>
#include <conio.h>
void main() {
clrscr();
int i,j,sum;
j=10;
for(i=1;i<=10;i++)
{
if(i<=5)
{
sum=i+j;
cout << i << " + " << j << " = " << sum << "\n";
j=j-1;
}
else
break;
}
getch();
}


/*
==============OUTPUT==========
1 + 10 = 11
2 + 9 = 11
3 + 8 = 11
4 + 7 = 11
5 + 6 = 11
*/
