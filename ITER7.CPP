#include <iostream.h>
#include <conio.h>
void main() {
clrscr();
char ch;
int i;
i=1;
while(i<=10) {
cout << "Enter data: ";
cin >> ch;
if(ch>=48 && ch<=57)
	cout << "\nNumeric is entered.";
else
	cout << "\nCharacter is enter.";
i++;
cout << "\n";
}
getch();
}


/*
=============================OUTPUT======================
Enter data: 4

Numeric is entered.
Enter data: d

Character is enter.
Enter data: d

Character is enter.
Enter data: 8

Numeric is entered.
Enter data: s

Character is enter.
Enter data: f

Character is enter.
Enter data: 5

Numeric is entered.
Enter data: v

Character is enter.
*/
