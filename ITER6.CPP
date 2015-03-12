#include <iostream.h>
#include <conio.h>
void main() {
clrscr();
int num,i,j;
i=1;
while(i<=10)
{
cout << "\nEnter a number: ";
cin >> num;
if(num > 0) {
	j=1;
	while(j<=num)
	{
		cout << j << " ";
		j++;
	}
}
else if (num<0)
	cout << "Number is negative!";
else
	cout << "Number is zero!";
i++;
cout<< "\n";
}
getch();
}


/*
==============OUTPUT====================

Enter a number: -2323
Number is negative!

Enter a number: 0
Number is zero!

Enter a number: 15
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15

Enter a number: -243543545
Number is negative!

Enter a number: 2
1 2

Enter a number: 0
Number is zero!

Enter a number: 20
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20

Enter a number: -1
Number is negative!

*/